"""
LGL-DynT4 Dataset Trace Auditor - Post-Production Consistency
--------------------------------------------------------------
This script performs a rigorous academic audit of the generated execution
traces. It ensures the structural integrity of the 10,500 trace files
and validates "Input Homogeneity" across all algorithmic variants.

[Audit Checklist Update]
1. Hierarchical Structure: Validates F(50) -> A(21) -> T(10) folder nesting levels.
2. Inheritance Integrity: Cross-checks filename A/F tags with parent directory IDs.
3. Input Homogeneity: Ensures identical '# Input Parameters' for the same T-index.
4. Dataset Inventory: Tracks total trace count to meet the 10,500 file target.
5. Format Compliance: Enforces 'Txx_Axx_Fxx.csv' strict naming and header format.
6. Comment Integrity: Ensures lines before 'loc_id' are wrapped with '#'. [NEW]
7. Data Columns: Enforces exactly 4 columns (3 commas) for all data rows. [NEW]
--------------------------------------------------------------
"""
import os

# --- Configuration ---
TRACE_ROOT = os.path.abspath("../Data/Trace")


def validate_trace_content(file_path):
    """
    Requirement 6 & 7: Validates internal file structure line by line.
    - All lines before 'loc_id' must start with '#'.
    - All data rows after header must have exactly 4 columns (3 commas).
    """
    errors = []
    found_header = False

    try:
        with open(file_path, 'r', encoding='utf-8') as f:
            for line_num, line in enumerate(f, 1):
                clean_line = line.strip()
                if not clean_line:
                    continue  # Skip empty lines

                if not found_header:
                    # Check if we reached the CSV header
                    if clean_line.startswith("loc_id,"):
                        found_header = True
                        continue
                    # Validation: Metadata lines must start with '#'
                    if not clean_line.startswith("#"):
                        errors.append(f"Line {line_num}: Metadata missing '#' prefix")
                else:
                    # Validation: Data rows must have 4 columns (exactly 3 commas)
                    comma_count = clean_line.count(',')
                    if comma_count != 3:
                        errors.append(f"Line {line_num}: Column count mismatch (Found {comma_count+1}, expected 4)")

        if not found_header:
            errors.append("CRITICAL: Header row 'loc_id' not found")

    except Exception as e:
        errors.append(f"File access error: {str(e)}")

    return errors


def get_first_line(file_path):
    try:
        with open(file_path, 'r', encoding='utf-8') as f:
            line = f.readline().strip()
            return line if line else None
    except Exception:
        return None


def audit_trace_dataset():
    print(f"INFO: Starting academic audit at: {TRACE_ROOT}")
    print("-" * 95)

    stats = {
        "f_count": 0, "a_count": 0, "t_count": 0,
        "err_missing_f": 0, "err_missing_a": 0, "err_missing_t": 0,
        "err_naming_format": 0,  # Format error (such as missing .csv or incorrect underline)
        "err_inheritance": 0,  # Inheritance error (AXX_FXX in file name does not match folder)
        "err_input_mismatch": 0, # Input error (Requirement 5)
        "err_content_structure": 0 # Structural error (Requirement 6 & 7)
    }

    # 1. Traverse F01-F50
    for f_idx in range(1, 51):
        f_prefix = f"F{f_idx:02d}"
        # Identify folders starting with FXX
        f_dir_name = next((d for d in os.listdir(TRACE_ROOT) if d.startswith(f_prefix)), None)

        if not f_dir_name:
            print(f"ERROR: Missing directory for prefix {f_prefix}")
            stats["err_missing_f"] += 1
            continue

        f_path = os.path.join(TRACE_ROOT, f_dir_name)
        stats["f_count"] += 1
        print(f"INFO: Auditing group {f_prefix}...", end="\r")

        # Requirement 5 Benchmark Dictionary
        f_group_baselines = {}

        # 2. Traverse A01-A21
        for a_idx in range(1, 22):
            a_prefix = f"A{a_idx:02d}"
            a_dir_name = next((d for d in os.listdir(f_path) if d.startswith(a_prefix)), None)

            if not a_dir_name:
                print(f"\nERROR: [{f_prefix}] Missing implementation prefix {a_prefix}")
                stats["err_missing_a"] += 1
                continue

            a_path = os.path.join(f_path, a_dir_name)
            stats["a_count"] += 1

            # 3. Traverse T01-T10
            for t_idx in range(1, 11):
                t_prefix = f"T{t_idx:02d}"
                # Find files starting with TXX
                t_files = [f for f in os.listdir(a_path) if f.startswith(t_prefix) and f.endswith(".csv")]

                if not t_files:
                    print(f"\nERROR: [{f_prefix}/{a_prefix}] Missing trace file: {t_prefix}")
                    stats["err_missing_t"] += 1
                    continue

                t_file = t_files[0]
                stats["t_count"] += 1

                # Specification: TXX_AXX_FXX.csv
                parts = t_file.replace(".csv", "").split('_')

                if len(parts) < 3:
                    print(f"\nERROR: [{f_prefix}/{a_prefix}] Invalid naming format: {t_file}")
                    stats["err_naming_format"] += 1
                else:
                    file_t, file_a, file_f = parts[0], parts[1], parts[2]
                    if file_a != a_prefix or file_f != f_prefix:
                        print(f"\nCRITICAL: [{f_prefix}/{a_prefix}] Inheritance Mismatch: {t_file}")
                        stats["err_inheritance"] += 1

                file_full_path = os.path.join(a_path, t_file)

                # --- NEW: Requirement 6 & 7 Structural Integrity Check ---
                content_errors = validate_trace_content(file_full_path)
                if content_errors:
                    stats["err_content_structure"] += 1
                    print(f"\nFORMAT ERROR: [{f_prefix}/{a_prefix}/{t_file}]")
                    for err in content_errors[:3]: # Limit error output per file
                        print(f"  -> {err}")

                # --- Requirement 5: Cross algorithm input consistency verification ---
                current_input = get_first_line(file_full_path)

                if t_prefix not in f_group_baselines:
                    f_group_baselines[t_prefix] = {"content": current_input, "source": a_prefix}
                else:
                    baseline = f_group_baselines[t_prefix]
                    if current_input != baseline["content"]:
                        print(f"\nCRITICAL: [{f_prefix}/{t_prefix}] Input mismatch detected!")
                        print(f"  - Baseline (from {baseline['source']}): {baseline['content']}")
                        print(f"  - Current  (from {a_prefix}): {current_input}")
                        stats["err_input_mismatch"] += 1

    # --- Final Statistics ---
    print("\n" + "=" * 95)
    print("ACADEMIC DATASET AUDIT REPORT")
    print("-" * 95)
    print(f"  1. F-Groups (F01-F50):          {stats['f_count']:>5} / 50")
    print(f"  2. A-Implementations (A01-A21):  {stats['a_count']:>5} / 1050")
    print(f"  3. T-Trace Files (T01-T10):     {stats['t_count']:>5} / 10500")
    print("-" * 95)
    print(f"  [Error] Missing F/A/T Dirs:     {stats['err_missing_f']}/{stats['err_missing_a']}/{stats['err_missing_t']}")
    print(f"  [Error] Naming/Inheritance:     {stats['err_naming_format']}/{stats['err_inheritance']}")
    print(f"  [Error] Input Mismatch:         {stats['err_input_mismatch']}")
    print(f"  [Error] Content Structure:      {stats['err_content_structure']}")
    print("=" * 95)

    critical_total = sum(v for k, v in stats.items() if k.startswith("err"))

    if critical_total == 0:
        print("RESULT: Dataset integrity verified. No critical errors found.")
    else:
        print(f"RESULT: Audit failed. Found {critical_total} critical errors.")


if __name__ == "__main__":
    audit_trace_dataset()