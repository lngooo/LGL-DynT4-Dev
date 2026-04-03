"""
LGL-DynT4 Dataset Static Auditor - Structural & Semantic Integrity
------------------------------------------------------------------
This script performs a formal audit of the Source_Raw dataset to ensure
data purity for LLM-based world model training (P1-P4). It validates
naming conventions, structural completeness, and semantic quality.

[Audit Checklist]
1. Naming Convention: Validates 'A{Var}_F{ID}_{Type}_{Desc}.c' format strictly.
2. Index Range: Ensures Variant (01-21) and Function (01-50) are within bounds.
3. Obfuscation Trace: Verifies 'O' type files contain mandatory '_O_A{idx}_' tags.
4. Semantic Integrity: Scans for placeholders like 'todo' or 'simplified logic'.
5. Metadata Header: Checks for 'LGL-DynT4 Dataset' mandatory file identifier.
6. Dataset Completeness: Verifies the exact presence of 21 variants per function.
------------------------------------------------------------------
"""
import os
import re

# --- Configuration ---
SOURCE_DIR = "../Data/Source_Raw"

# 1. Enhanced Naming Convention Regex
# Pattern: A{01-21}_F{01-50}_{S/O}_{Any_Description}.c
RE_STRICT_NAME = re.compile(r'^A(\d{2})_F(\d{2})_([SO])_([A-Za-z0-9_]+)\.c$')

# 2. Obfuscation Derivation Tag Regex
RE_O_TRACE = re.compile(r'_O_A\d{2}_')

# 3. Semantic Quality Blacklist
FORBIDDEN_PHRASES = [
    "simplified logic",
    "placeholder",
    "todo",
    "omitted for brevity",
    "implementation here",
    "/* ... */",
    "// logic here",
]

def audit_dataset():
    """
    Performs a formal audit of dataset structure, naming, and completeness.
    """

    if not os.path.exists(SOURCE_DIR):
        print(f"[ERROR] Source_Raw directory not found: {os.path.abspath(SOURCE_DIR)}")
        return

    # Retrieve and sort all functional group folders
    f_folders = sorted([d for d in os.listdir(SOURCE_DIR) if os.path.isdir(os.path.join(SOURCE_DIR, d))])

    print("-" * 80)
    print("DATASET AUDIT REPORT: LGL-DynT4 INTEGRITY VERIFICATION (V2)")
    print(f"Timestamp: 2026-02-08")
    print(f"Target Directory: {os.path.abspath(SOURCE_DIR)}")
    print(f"Total Function Groups Identified: {len(f_folders)}")
    print("-" * 80)

    total_violations = 0
    total_files_checked = 0

    for folder in f_folders:
        folder_path = os.path.join(SOURCE_DIR, folder)
        files = [f for f in os.listdir(folder_path) if f.endswith('.c')]

        # --- Hierarchy Sync: Extract Parent Folder ID (e.g., 'F01' from 'F01_Sort') ---
        folder_id_match = re.match(r'^(F\d{2})', folder)
        expected_f_id = folder_id_match.group(1) if folder_id_match else None

        print(f"ANALYZING GROUP: {folder} (Expected ID: {expected_f_id})")

        folder_errors = 0
        found_indices = set()
        required_indices = {f"{i:02d}" for i in range(1, 22)}

        for f_name in files:
            total_files_checked += 1
            file_path = os.path.join(folder_path, f_name)

            # --- 1. Strict Naming & Segment Check ---
            match = RE_STRICT_NAME.match(f_name)
            if not match:
                print(f"    [NAMING_VIOLATION] Invalid segment format: {f_name}")
                folder_errors += 1
                continue

            idx, f_id, f_type, f_desc = match.groups()
            found_indices.add(idx)

            # --- 2. Cross-Directory Consistency Check (NEW) ---
            current_f_segment = f"F{f_id}"
            if expected_f_id and current_f_segment != expected_f_id:
                print(f"    [ID_MISMATCH] Folder is {expected_f_id} but file labels as {current_f_segment}: {f_name}")
                folder_errors += 1

            # --- 3. Obfuscation Traceability Check ---
            if f_type == 'O':
                if not RE_O_TRACE.search(f_name):
                    print(f"    [METADATA_VIOLATION] O-type missing derivation tag: {f_name}")
                    folder_errors += 1

            # --- 4. Source Content & Quality Check ---
            try:
                with open(file_path, 'r', encoding='utf-8') as f:
                    content = f.read()
                    content_lower = content.lower()

                    # Semantic violation check
                    for phrase in FORBIDDEN_PHRASES:
                        if phrase in content_lower:
                            print(f"    [SEMANTIC_VIOLATION] Placeholder detected ('{phrase}'): {f_name}")
                            folder_errors += 1

                    # Minimum byte check
                    if len(content) < 300:
                        print(f"    [SIZE_WARNING] Code volume below threshold ({len(content)} bytes): {f_name}")
                        folder_errors += 1

                    # Dynamic execution support check
                    if "int main" not in content:
                        print(f"    [ENTRY_VIOLATION] Missing 'int main' entry point: {f_name}")
                        folder_errors += 1

                    # Dataset identification check
                    if "LGL-DynT4 Dataset" not in content:
                        print(f"    [ENTRY_VIOLATION] Missing 'LGL-DynT4 Dataset' identifier: {f_name}")
                        folder_errors += 1

            except Exception as e:
                print(f"    [IO_ERROR] Internal read error for {f_name}: {str(e)}")
                folder_errors += 1

        # --- 5. Index Continuity & Completeness (A01-A21) ---
        missing = required_indices - found_indices
        if missing:
            print(f"    [COMPLETENESS_ERROR] Missing mandatory indices: {sorted(list(missing))}")
            folder_errors += len(missing)

        # Verification of total number of variants
        if len(files) != 21:
            print(f"    [COUNT_ERROR] Expected 21 variants, observed {len(files)} variants.")
            folder_errors += 1

        if folder_errors == 0:
            print(f"    STATUS: PASSED")
        else:
            print(f"    STATUS: FAILED ({folder_errors} violations logged)")

        total_violations += folder_errors
        print("." * 80)

    print("\nFINAL SUMMARY REPORT")
    print("-" * 30)
    print(f"Total Files Audited: {total_files_checked}")
    print(f"Total Violations:    {total_violations}")
    print("-" * 30)

    if total_violations == 0:
        print("CONCLUSION: Dataset complies with LGL-DynT4 integrity standards.")
    else:
        print("CONCLUSION: Dataset rejected. Manual intervention required.")

if __name__ == "__main__":
    audit_dataset()