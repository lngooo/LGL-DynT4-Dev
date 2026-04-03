"""
LGL-DynT4 Dataset Dynamic Auditor - Functional Consistency Verifier
------------------------------------------------------------------
This script validates the functional isomorphism of the LGL-DynT4 dataset.
It ensures that all 21 variants (A01-A21) of a specific algorithmic logic
produce identical output distributions under the same input stimuli.

[Audit Checklist]
1. Cross-Variant Consistency: Compares A02-A21 execution outputs against A01 reference.
2. Compile-Run Pipeline: Automates GCC compilation and execution for all C variants.
3. Precision Tolerance: Handles floating-point stability using defined delta thresholds.
------------------------------------------------------------------
"""

import os
import subprocess
import shutil
import platform
import time

# --- Configuration ---
SOURCE_DIR = os.path.abspath("../Data/Source_Raw")
TEMP_BIN_DIR = os.path.abspath("./audit_temp_bin")
GCC_PATH = r"D:\programFiles\msys64\mingw64\bin\gcc.exe"

# Default tolerance and timeout settings
DEFAULT_TOLERANCE = 0.99
EXECUTION_TIMEOUT = 100  # Maximum running time of each C program (seconds)

# 1. TEST_CASES: Manually mapped from Config.json (F01-F50)
TEST_CASES = {
    # --- TRAIN_VAL_ZONE: F01-F40 ---
    "F01_Sum": [["100"], ["1000"]],
    "F02_GCD": [["48", "18"], ["101", "103"]],
    "F03_Factorial": [["5"], ["12"]],
    "F04_Fibonacci": [["10"], ["30"]],
    "F05_Sqrt": [["64"], ["9999"]],
    "F06_IsPrime": [["17"], ["100"]],
    "F07_Power": [["2", "10"], ["3", "5"]],
    "F08_Abs": [["-500"], ["999"]],
    "F09_NewtonRoot": [["256"], ["729"]],
    "F10_Log2": [["1024"], ["500"]],

    # Array Based (F11-F25)
    "F11_BinarySearch": [["11", "1", "3", "5", "7", "9", "11", "13", "15", "17", "19", "7"],
                         ["5", "2", "4", "6", "8", "10", "1"]],
    "F12_BubbleSort": [["5", "5", "4", "3", "2", "1"], ["4", "10", "20", "30", "40"]],
    "F13_QuickSort": [["5", "3", "1", "4", "5", "2"], ["4", "99", "10", "50", "20"]],
    "F14_ArrayReverse": [["5", "1", "2", "3", "4", "5"], ["3", "10", "20", "30"]],
    "F15_FindMax": [["5", "1", "5", "3", "9", "2"], ["3", "-10", "-5", "-20"]],
    "F16_MergeSort": [["4", "38", "27", "43", "3"], ["4", "100", "0", "50", "-10"]],
    "F17_ArrayRotate": [["2", "1", "2", "3", "4", "5"], ["1", "10", "20", "30", "40"]],
    "F18_KthSmallest": [["6", "3", "10", "50", "20", "40", "30", "2"], ["4", "1", "5", "2", "8", "3"]],
    "F19_RemoveDuplicates": [["5", "1", "1", "2", "2", "3"], ["3", "4", "4", "4"]],
    "F20_SelectionSort": [["3", "3", "2", "1"], ["4", "50", "10", "40", "20"]],
    "F21_ShellSort": [["4", "12", "7", "1", "5"], ["4", "100", "50", "20", "10"]],
    "F22_InsertionSort": [["4", "3", "1", "4", "2"], ["4", "9", "8", "7", "6"]],
    "F23_LinearSearch": [["2", "1", "2", "3", "4", "5", "3", "3"], ["3", "10", "20", "5", "5"]],
    "F24_ArraySum": [["3", "1", "2", "3"], ["5", "10", "20", "30", "40", "50"]],
    "F25_ArrayAverage": [["5", "1", "2", "3", "4", "5"], ["2", "10", "20"]],

    # String Based (F26-F40)
    "F26_StrLen": [["hello"], ["lgl_dynt4_dataset"]],
    "F27_StrCmp": [["abc", "abc"], ["abc", "abd"]],
    "F28_IsPalindrome": [["level"], ["hello"]],
    "F29_AnagramCheck": [["listen", "silent"], ["hello", "world"]],
    "F30_SubStrFind": [["the_quick_brown_fox", "brown"], ["mississippi", "issi"]],
    "F31_WordCount": [["hello world"], ["one two three four"]],
    "F32_StrCompress": [["aaabbc"], ["abcde"]],
    "F33_LCP": [["flower", "flow", "flight"], ["dog", "racecar"]],
    "F34_CharFrequency": [["banana", "a"], ["test", "z"]],
    "F35_VowelCount": [["education"], ["sky"]],
    "F36_CaseToggle": [["Hello"], ["aBcD"]],
    "F37_TrimSpace": [[" hello "], ["no_space"]],
    "F38_ReverseWords": [["hello world"], ["i love coding"]],
    "F39_TitleCase": [["hello world"], ["the quick brown fox"]],
    "F40_HexToInt": [["FF"], ["1A"]],

    # --- TEST_ISOLATION_ZONE: F41-F50 ---
    "F41_BitCount": [["7"], ["1024"]],
    "F42_HammingDistance": [["9", "14"], ["0", "255"]],
    "F43_IsPowerOfTwo": [["64"], ["63"]],
    "F44_ByteSwap": [["1"], ["255"]],
    "F45_GrayCode": [["4"], ["10"]],
    "F46_Base64Encode": [["data"], ["LGL"]],
    "F47_XorCipher": [["secret", "k"], ["hello", "x"]],
    "F48_RLEEncode": [["aaabbc"], ["abc"]],
    "F49_CaesarCipher": [["hello", "3"], ["abc", "1"]],
    "F50_IntToRoman": [["1994"], ["3888"]]
}

def compare_outputs(current, reference, tolerance=DEFAULT_TOLERANCE):
    """Intelligent Comparison: Supports string exact matching and floating-point tolerance matching"""
    if current == reference:
        return True
    try:
        return abs(float(current) - float(reference)) <= tolerance
    except ValueError:
        return current.strip() == reference.strip()

def audit_dynamic_consistency():
    # Setup Temp Directory
    if os.path.exists(TEMP_BIN_DIR):
        shutil.rmtree(TEMP_BIN_DIR)
    os.makedirs(TEMP_BIN_DIR, exist_ok=True)

    print("\n" + "=" * 80)
    print(f"LGL-DynT4 DYNAMIC CONSISTENCY AUDIT (WITH TIMEOUT CONTROL)")
    print(f"Target Source_Raw: {SOURCE_DIR}")
    print(f"Settings: TOLERANCE={DEFAULT_TOLERANCE}, TIMEOUT={EXECUTION_TIMEOUT}s")
    print("=" * 80)

    total_files = 0
    total_violations = 0
    failed_function_ids = set()

    for f_key in sorted(TEST_CASES.keys()):
        group_path = os.path.join(SOURCE_DIR, f_key)
        f_id_display = f_key.split('_')[0].replace('F0', 'F')

        if not os.path.exists(group_path):
            print(f"\n[SKIP] {f_key}: Directory not found.")
            failed_function_ids.add(f_id_display)
            continue

        c_files = [f for f in os.listdir(group_path) if f.endswith('.c')]
        if not c_files:
            print(f"\n[SKIP] {f_key}: No .c files in directory.")
            failed_function_ids.add(f_id_display)
            continue

        print(f"\n>>> AUDITING GROUP: {f_key} ({len(c_files)} files)")

        for tc_idx, args in enumerate(TEST_CASES[f_key]):
            reference_output = None
            group_error_count = 0
            print(f"  [TEST CASE {tc_idx + 1}] Input Args: {args}")

            for f_name in sorted(c_files):
                total_files += 1
                source_path = os.path.join(group_path, f_name)
                bin_path = os.path.join(TEMP_BIN_DIR, f"runner_{f_name}.exe")

                # 2. compile
                comp_cmd = [GCC_PATH, source_path, "-o", bin_path, "-lm"]
                cp = subprocess.run(comp_cmd, capture_output=True, text=True, errors='ignore')

                if cp.returncode != 0:
                    print(f"    [COMP_ERR] {f_name}")
                    total_violations += 1
                    group_error_count += 1
                    failed_function_ids.add(f_id_display)
                    continue

                # 3. run
                current_output = ""
                try:
                    rp = subprocess.run(
                        [bin_path] + args,
                        capture_output=True,
                        text=True,
                        encoding='gbk',
                        errors='ignore',
                        timeout=EXECUTION_TIMEOUT
                    )
                    current_output = rp.stdout.strip()
                except subprocess.TimeoutExpired:
                    print(f"    [TIMEOUT]  {f_name} (Killed after {EXECUTION_TIMEOUT}s)")
                    total_violations += 1
                    group_error_count += 1
                    failed_function_ids.add(f_id_display)
                    continue
                except Exception as e:
                    print(f"    [EXEC_ERR] {f_name} ({str(e)})")
                    total_violations += 1
                    group_error_count += 1
                    failed_function_ids.add(f_id_display)
                    continue
                finally:
                    # Attempt to delete the generated binary after running or timeout to avoid occupying space
                    if os.path.exists(bin_path):
                        try: os.remove(bin_path)
                        except: pass

                # 4. Benchmark output record (if the current program runs successfully and there is no benchmark yet)
                if reference_output is None:
                    reference_output = current_output
                    print(f"    [REFERENCE] Expected Output: '{reference_output}'")

                # 5. Logical consistency verification
                if not compare_outputs(current_output, reference_output):
                    print(f"    [LOGIC_ERR] {f_name} -> Got: '{current_output}'")
                    total_violations += 1
                    group_error_count += 1
                    failed_function_ids.add(f_id_display)

            if group_error_count == 0:
                print(f"  [RESULT] SUCCESS: Case {tc_idx + 1} consistent.")
            else:
                print(f"  [RESULT] FAILED: {group_error_count} violations in Case {tc_idx + 1}.")

    # --- final statistic ---
    print("\n" + "=" * 80)
    print("FINAL AUDIT SUMMARY")
    print(f"  Total Files Audited: {total_files}")
    print(f"  Total Violations:    {total_violations}")

    if failed_function_ids:
        sorted_failures = sorted(list(failed_function_ids), key=lambda x: int(x[1:]))
        print(f"  Failed Functions:    {', '.join(sorted_failures)}")
    else:
        print(f"  Failed Functions:    None")

    print("=" * 80)

    if total_violations == 0:
        print("ALL PASSED: Dataset is dynamically consistent.")
    else:
        print(f"ATTENTION: {total_violations} logic/execution issues detected!")

    # Cleanup
    try:
        shutil.rmtree(TEMP_BIN_DIR)
    except:
        pass

if __name__ == "__main__":
    audit_dynamic_consistency()