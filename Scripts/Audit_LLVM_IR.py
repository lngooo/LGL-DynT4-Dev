"""
LGL-DynT4 Dataset LLVM-IR Auditor - Intermediate Representation Integrity
--------------------------------------------------------------------------
[Audit Checklist]
1. Multi-Target Scan: Audits both 'LLVM_IR_Raw' and 'LLVM_IR_Clean' directory trees.
2. Group Integrity: Validates the presence of all 50 function groups (F01-F50).
3. Variant Completeness: Ensures 21 (.ll) files exist per function group.
4. Compilation Success: Detects missing IR files caused by clang compilation errors.
--------------------------------------------------------------------------
"""
import os

BASE_DATA_DIR = "../Data"
TARGET_DIRECTORIES = ["LLVM_IR_Clean", "LLVM_IR_Raw"]

EXPECTED_FOLDERS = 50
EXPECTED_FILES_PER_FOLDER = 21


def audit_llvm_ir():
    """Audit the number of folders and file integrity in the LLVM IR directory"""

    print("-" * 80)
    print("DATASET AUDIT REPORT: LLVM IR INTEGRITY VERIFICATION")
    print(f"Timestamp: 2026-02-06")
    print("-" * 80)

    overall_passed = True

    for target in TARGET_DIRECTORIES:
        path = os.path.join(BASE_DATA_DIR, target)
        print(f"\n[TARGET DIRECTORY]: {target}")

        if not os.path.exists(path):
            print(f"    [ERROR] Directory not found: {os.path.abspath(path)}")
            overall_passed = False
            continue

        # Retrieve the list of subfolders
        subfolders = sorted([d for d in os.listdir(path) if os.path.isdir(os.path.join(path, d))])
        folder_count = len(subfolders)

        print(f"    - Subfolders Found: {folder_count}")

        # Determine the number of subfolders
        if folder_count != EXPECTED_FOLDERS:
            print(f"    [COUNT_ERROR] Expected {EXPECTED_FOLDERS} folders, but found {folder_count}.")
            overall_passed = False

        # Traverse the number of audit files in each subfolders
        for folder in subfolders:
            folder_path = os.path.join(path, folder)
            # Count the number of. ll files
            files = [f for f in os.listdir(folder_path) if f.endswith('.ll')]
            file_count = len(files)

            if file_count != EXPECTED_FILES_PER_FOLDER:
                print(
                    f"    [FILE_COUNT_ERROR] Group '{folder}': Expected {EXPECTED_FILES_PER_FOLDER} files, found {file_count}.")
                overall_passed = False

    print("\n" + "=" * 30)
    print("FINAL SUMMARY REPORT")
    print("-" * 30)

    if overall_passed:
        print("CONCLUSION: Dataset complies with LLVM_IR integrity standards (50x21).")
        print("STATUS: PASSED")
    else:
        print("CONCLUSION: Dataset rejected. Missing folders or incorrect file counts detected.")
        print("STATUS: FAILED")
    print("-" * 30)


if __name__ == "__main__":
    audit_llvm_ir()