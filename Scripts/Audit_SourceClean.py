"""
LGL-DynT4 Dataset Clean-Code Auditor - Signature Isomorphism Verifier
--------------------------------------------------------------------
This script ensures the structural consistency of cleaned C source code.
It validates that all implementations (A01-A21) share identical function
signatures (return types and parameters) after header/main removal.

[Audit Checklist]
1. Baseline Extraction: Anchors A01 as the gold standard for function signatures.
2. Signature Parsing: Uses regex to extract Return_Type, Name, and Parameters.
3. Isomorphism Check: Validates A02-A21 against the A01 reference signature strictly.
4. Error Localization: Identifies specific folders where implementation signatures diverge.
5. Interface Alignment: Ensures interchangeable function calls for cross-modal training.
--------------------------------------------------------------------
"""
import os
import re


class CSourceAuditor:
    """
    Auditor for C source files to ensure function signature consistency.
    Uses A01 as the reference and validates A02-A21.
    """

    def __init__(self, target_dir):
        self.target_dir = target_dir
        # Matches: Return_Type Function_Name ( Parameters )
        self.func_pattern_template = r'([\w\s\*]+)\b({})\s*\(([^)]*)\)'
        # Matches files A02.c through A21.c
        self.test_file_pattern = re.compile(r'^A(0[2-9]|1[0-9]|2[0-1])')

        self.stats = {
            "total_folders": 0,
            "failed_folders": []
        }

    def run_audit(self):
        """Executes the audit across all subdirectories."""
        if not os.path.exists(self.target_dir):
            print(f"[ERROR] Directory not found: {self.target_dir}")
            return

        # Get sorted list of subdirectories (e.g., F01_Sum, F02_GCD)
        subdirs = sorted([d for d in os.listdir(self.target_dir)
                          if os.path.isdir(os.path.join(self.target_dir, d))])

        for subdir in subdirs:
            print(f"\n>>> Processing Subdirectory: {subdir}")
            self.stats["total_folders"] += 1

            # Extract function name: 'F01_Sum' -> 'Sum'
            parts = subdir.split('_', 1)
            if len(parts) < 2:
                print(f"  [ERROR] Skip: Folder '{subdir}' does not match 'ID_Name' format.")
                continue

            logic_id = parts[0]
            func_name = parts[1]
            folder_path = os.path.join(self.target_dir, subdir)

            if not self._audit_folder(folder_path, func_name):
                self.stats["failed_folders"].append(logic_id)

        self._print_final_summary()

    def _audit_folder(self, folder_path, func_name):
        """Validates all files in a folder against the A01 reference."""
        files = os.listdir(folder_path)

        # 1. Establish reference from A01
        a01_file = next((f for f in files if f.startswith("A01") and f.endswith(".c")), None)
        if not a01_file:
            print(f"  [FAIL] Reference file A01*.c missing.")
            return False

        ref_data = self._extract_signature(os.path.join(folder_path, a01_file), func_name)
        if not ref_data:
            print(f"  [FAIL] A01: Could not find function '{func_name}'.")
            return False

        # Display the expected signature
        print(f"  [EXPECTED] {ref_info_formatter(ref_data)}")

        # 2. Validate A02-A21
        is_consistent = True
        test_files = sorted([f for f in files if self.test_file_pattern.match(f) and f.endswith(".c")])

        for t_file in test_files:
            current_data = self._extract_signature(os.path.join(folder_path, t_file), func_name)

            if not current_data:
                print(f"  [FAIL] {t_file}: Does not satisfy the expected value (Function missing).")
                is_consistent = False
            elif current_data['normalized'] != ref_data['normalized']:
                print(f"  [FAIL] {t_file}: Signature mismatch.")
                is_consistent = False

        return is_consistent

    def _extract_signature(self, file_path, func_name):
        """Extracts and normalizes function components."""
        try:
            with open(file_path, 'r', encoding='utf-8', errors='ignore') as f:
                content = f.read()

            pattern = self.func_pattern_template.format(re.escape(func_name))
            match = re.search(pattern, content)

            if match:
                ret_type = " ".join(match.group(1).split())
                params = " ".join(match.group(3).split())
                return {
                    "ret": ret_type,
                    "name": func_name,
                    "params": params,
                    "normalized": f"{ret_type}|{params}"
                }
        except Exception as e:
            print(f"  [ERROR] Reading {os.path.basename(file_path)}: {e}")
        return None

    def _print_final_summary(self):
        """Displays the aggregated audit results."""
        failed_count = len(self.stats["failed_folders"])
        print("\n" + "=" * 60)
        print("FINAL AUDIT SUMMARY")
        print("=" * 60)
        print(f"Total Subdirectories Scanned : {self.stats['total_folders']}")
        print(f"Passed                       : {self.stats['total_folders'] - failed_count}")
        print(f"Failed                       : {failed_count}")

        if failed_count > 0:
            # Displays only the ID (e.g., F01, F02)
            print(f"Failed Folders               : {', '.join(self.stats['failed_folders'])}")
        else:
            print("Status                       : ALL PASSED")
        print("=" * 60)


def ref_info_formatter(data):
    """Formats the signature output into: Return_Type Function_Name (Parameters)"""
    return f"{data['ret']} {data['name']}({data['params']})"


if __name__ == "__main__":
    CLEAN_PATH = os.path.join("..", "Data", "Source_Clean")
    auditor = CSourceAuditor(CLEAN_PATH)
    auditor.run_audit()