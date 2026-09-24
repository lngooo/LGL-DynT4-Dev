#!/usr/bin/env python3
# -*- coding: utf-8 -*-

"""
LGL-DynT4 Expanded Dynamic Consistency Auditor
----------------------------------------------
This script compiles and executes retained C implementations under expanded
input cases, then checks cross-implementation output consistency within each
algorithmic-logic seed.

It does NOT modify the dataset.

Inputs:
    Data/Source_Raw/
    script_OUTPUTS/expanded_consistency/expanded_test_cases.csv

Outputs:
    script_OUTPUTS/expanded_consistency/per_run_log.csv
    script_OUTPUTS/expanded_consistency/per_case_consistency.csv
    script_OUTPUTS/expanded_consistency/per_seed_summary.csv
    script_OUTPUTS/expanded_consistency/failed_cases.csv
    script_OUTPUTS/expanded_consistency/audit_summary.json

Run:
    python Scripts_ext/validation/expanded_consistency/run_expanded_consistency_audit.py
"""

import csv
import json
import platform
import re
import shutil
import subprocess
import tempfile
import time
from collections import defaultdict
from pathlib import Path
from typing import Any, Dict, List, Tuple


# ============================================================
# Path configuration
# ============================================================
# Expected file location:
#   Scripts_ext/validation/expanded_consistency/run_expanded_consistency_audit.py
PROJECT_ROOT = Path(__file__).resolve().parents[3]

SOURCE_DIR = PROJECT_ROOT /"Data"/"Natural"/"Source_Raw"

OUTPUT_DIR = PROJECT_ROOT /"script_OUTPUTS"/"expanded_consistency"
TEST_CASES_CSV = OUTPUT_DIR /"expanded_test_cases.csv"

PER_RUN_LOG_CSV = OUTPUT_DIR / "per_run_log.csv"
PER_CASE_CONSISTENCY_CSV = OUTPUT_DIR / "per_case_consistency.csv"
PER_SEED_SUMMARY_CSV = OUTPUT_DIR / "per_seed_summary.csv"
FAILED_CASES_CSV = OUTPUT_DIR / "failed_cases.csv"
AUDIT_SUMMARY_JSON = OUTPUT_DIR / "audit_summary.json"


# ============================================================
# Tool and runtime configuration
# ============================================================
GCC_PATH = r"D:\programFiles\msys64\mingw64\bin\gcc.exe"

# If the configured GCC path does not exist, fall back to system gcc.
if not Path(GCC_PATH).exists():
    GCC_PATH = shutil.which("gcc") or "gcc"

EXECUTION_TIMEOUT = 100
COMPILE_TIMEOUT = 60
ENCODING = "gbk"

DEFAULT_FLOAT_TOLERANCE = 1e-6
SEED_FLOAT_TOLERANCE = {
    "F05": 1e-3,  # Sqrt
    "F09": 1e-3,  # NewtonRoot
}

EXPECTED_IMPLS_PER_SEED = 21

# Optional debugging:
#   set ONLY_SEEDS = {"F02", "F13", "F23", "F28", "F49"} for a small test;
#   set ONLY_SEEDS = set() for all seeds.
ONLY_SEEDS = set()

KEEP_TEMP_BINARIES = False


# ============================================================
# Internal helpers
# ============================================================
IMPL_RE = re.compile(r"(A\d+)")


def normalize_output(s: str) -> str:
    """
    Normalize stdout before comparison.

    Current normalization:
    - strip leading/trailing whitespace
    - normalize CRLF/LF
    - collapse consecutive whitespace into a single space
    """
    if s is None:
        return ""
    s = s.replace("\r\n", "\n").replace("\r", "\n")
    return " ".join(s.strip().split())


def try_parse_float_tokens(s: str) -> List[float]:
    tokens = normalize_output(s).split()
    if not tokens:
        raise ValueError("empty output")
    return [float(token) for token in tokens]


def outputs_equal(current: str, reference: str, tolerance: float) -> bool:
    """
    Compare outputs.

    First performs exact comparison after normalization.
    If that fails, tries numeric token-wise comparison with tolerance.
    """
    cur_norm = normalize_output(current)
    ref_norm = normalize_output(reference)

    if cur_norm == ref_norm:
        return True

    try:
        cur_vals = try_parse_float_tokens(cur_norm)
        ref_vals = try_parse_float_tokens(ref_norm)

        if len(cur_vals) != len(ref_vals):
            return False

        return all(abs(a - b) <= tolerance for a, b in zip(cur_vals, ref_vals))

    except Exception:
        return False


def load_test_cases(path: Path) -> Dict[str, List[Dict[str, Any]]]:
    if not path.exists():
        raise FileNotFoundError(f"Test case CSV not found: {path}")

    grouped: Dict[str, List[Dict[str, Any]]] = defaultdict(list)

    with path.open("r", encoding="utf-8", newline="") as f:
        reader = csv.DictReader(f)
        required = {
            "seed_id",
            "seed_name",
            "domain",
            "case_id",
            "case_type",
            "args_json",
            "args_text",
        }

        missing = required - set(reader.fieldnames or [])
        if missing:
            raise ValueError(f"Missing columns in {path}: {missing}")

        for row in reader:
            args_json = row.get("args_json", "[]")
            try:
                argv = json.loads(args_json)
            except json.JSONDecodeError as e:
                raise ValueError(
                    f"Invalid args_json in case {row.get('case_id')}: {args_json}"
                ) from e

            row["argv"] = [str(x) for x in argv]
            grouped[row["seed_id"]].append(row)

    return grouped


def find_seed_dir(source_dir: Path, seed_id: str, seed_name: str) -> Path:
    preferred = source_dir / f"{seed_id}_{seed_name}"
    if preferred.exists() and preferred.is_dir():
        return preferred

    candidates = [
        p for p in source_dir.iterdir()
        if p.is_dir() and p.name.startswith(seed_id + "_")
    ]

    if not candidates:
        raise FileNotFoundError(f"No directory found for {seed_id} under {source_dir}")

    return sorted(candidates, key=lambda p: p.name)[0]


def get_impl_id(c_file: Path) -> str:
    match = IMPL_RE.search(c_file.name)
    if match:
        return match.group(1)
    return c_file.stem


def binary_suffix() -> str:
    return ".exe" if platform.system().lower().startswith("win") else ""


def compile_c_file(c_file: Path, bin_file: Path) -> Tuple[bool, str]:
    cmd = [str(GCC_PATH), str(c_file), "-o", str(bin_file), "-lm"]

    try:
        cp = subprocess.run(
            cmd,
            capture_output=True,
            text=True,
            errors="ignore",
            timeout=COMPILE_TIMEOUT,
        )
    except subprocess.TimeoutExpired:
        return False, f"compile_timeout_after_{COMPILE_TIMEOUT}s"
    except Exception as e:
        return False, f"compile_exception: {e}"

    if cp.returncode != 0:
        msg = (cp.stderr or cp.stdout or "").strip()
        return False, msg[:500]

    return True, ""


def run_binary(bin_file: Path, argv: List[str]) -> Tuple[str, str, str, int, float]:
    """
    Returns:
        run_status, raw_output, error_msg, return_code, elapsed_ms
    """
    cmd = [str(bin_file)] + argv
    start = time.time()

    try:
        rp = subprocess.run(
            cmd,
            capture_output=True,
            text=True,
            encoding=ENCODING,
            errors="ignore",
            timeout=EXECUTION_TIMEOUT,
        )
        elapsed_ms = (time.time() - start) * 1000.0

        raw_output = (rp.stdout or "").strip()
        stderr = (rp.stderr or "").strip()

        if rp.returncode != 0:
            return "runtime_error", raw_output, stderr[:500], rp.returncode, elapsed_ms

        return "ok", raw_output, "", rp.returncode, elapsed_ms

    except subprocess.TimeoutExpired:
        elapsed_ms = (time.time() - start) * 1000.0
        return "timeout", "", f"timeout_after_{EXECUTION_TIMEOUT}s", -1, elapsed_ms

    except Exception as e:
        elapsed_ms = (time.time() - start) * 1000.0
        return "exec_exception", "", str(e)[:500], -1, elapsed_ms


def choose_reference_impl(c_files: List[Path]) -> str:
    """
    Prefer A01 as the reference. If A01 does not exist, use the first sorted file.
    """
    for c_file in c_files:
        if get_impl_id(c_file) == "A01":
            return "A01"
    return get_impl_id(c_files[0])


def get_seed_tolerance(seed_id: str) -> float:
    return SEED_FLOAT_TOLERANCE.get(seed_id, DEFAULT_FLOAT_TOLERANCE)


def open_csv_writer(path: Path, fieldnames: List[str]):
    f = path.open("w", encoding="utf-8", newline="")
    writer = csv.DictWriter(f, fieldnames=fieldnames)
    writer.writeheader()
    return f, writer


# ============================================================
# Main audit logic
# ============================================================
def main() -> None:
    if not SOURCE_DIR.exists():
        raise FileNotFoundError(f"SOURCE_DIR not found: {SOURCE_DIR}")

    OUTPUT_DIR.mkdir(parents=True, exist_ok=True)

    test_cases_by_seed = load_test_cases(TEST_CASES_CSV)
    if ONLY_SEEDS:
        test_cases_by_seed = {
            seed_id: cases
            for seed_id, cases in test_cases_by_seed.items()
            if seed_id in ONLY_SEEDS
        }

    temp_root = Path(tempfile.mkdtemp(prefix="lgldynt4_expanded_audit_"))

    per_run_fields = [
        "seed_id",
        "seed_name",
        "domain",
        "case_id",
        "case_type",
        "impl_id",
        "file_name",
        "args_json",
        "args_text",
        "compile_status",
        "run_status",
        "return_code",
        "raw_output",
        "normalized_output",
        "elapsed_ms",
        "error_msg",
    ]

    per_case_fields = [
        "seed_id",
        "seed_name",
        "domain",
        "case_id",
        "case_type",
        "args_json",
        "args_text",
        "num_impl",
        "expected_impls",
        "num_compile_error",
        "num_timeout",
        "num_runtime_error",
        "num_success",
        "num_distinct_outputs",
        "reference_impl",
        "reference_output",
        "consistency_pass",
    ]

    per_seed_fields = [
        "seed_id",
        "seed_name",
        "domain",
        "num_impl",
        "expected_impls",
        "num_base_cases",
        "num_boundary_cases",
        "num_random_cases",
        "num_total_cases",
        "num_program_executions",
        "compile_errors",
        "timeout_errors",
        "runtime_errors",
        "consistency_violations",
        "passed",
    ]

    failed_case_fields = [
        "seed_id",
        "seed_name",
        "domain",
        "case_id",
        "case_type",
        "args_json",
        "args_text",
        "impl_id",
        "file_name",
        "reference_impl",
        "reference_output",
        "current_output",
        "error_type",
        "error_msg",
    ]

    per_case_rows: List[Dict[str, Any]] = []
    per_seed_rows: List[Dict[str, Any]] = []
    failed_case_rows: List[Dict[str, Any]] = []

    global_summary: Dict[str, Any] = {
        "project_root": str(PROJECT_ROOT),
        "source_dir": str(SOURCE_DIR),
        "test_cases_csv": str(TEST_CASES_CSV),
        "output_dir": str(OUTPUT_DIR),
        "gcc_path": str(GCC_PATH),
        "execution_timeout": EXECUTION_TIMEOUT,
        "compile_timeout": COMPILE_TIMEOUT,
        "encoding": ENCODING,
        "num_seeds": 0,
        "num_implementations": 0,
        "expected_impls_per_seed": EXPECTED_IMPLS_PER_SEED,
        "num_base_cases": 0,
        "num_boundary_cases": 0,
        "num_random_cases": 0,
        "num_total_input_cases": 0,
        "num_program_executions": 0,
        "compile_errors": 0,
        "timeout_errors": 0,
        "runtime_errors": 0,
        "consistency_violations": 0,
        "passed_seeds": 0,
        "failed_seeds": 0,
    }

    per_run_file = None

    try:
        per_run_file, per_run_writer = open_csv_writer(PER_RUN_LOG_CSV, per_run_fields)

        for seed_id in sorted(test_cases_by_seed.keys(), key=lambda x: int(x[1:])):
            cases = test_cases_by_seed[seed_id]
            if not cases:
                continue

            seed_name = cases[0].get("seed_name", "")
            domain = cases[0].get("domain", "")
            seed_tolerance = get_seed_tolerance(seed_id)

            seed_dir = find_seed_dir(SOURCE_DIR, seed_id, seed_name)
            c_files = sorted(seed_dir.glob("*.c"), key=lambda p: p.name)

            if not c_files:
                raise FileNotFoundError(f"No .c files found in {seed_dir}")

            reference_impl = choose_reference_impl(c_files)

            print("=" * 80)
            print(f"Auditing seed:     {seed_id}_{seed_name}")
            print(f"Domain:            {domain}")
            print(f"Source directory:  {seed_dir}")
            print(f"C files:           {len(c_files)}")
            print(f"Input cases:       {len(cases)}")
            print(f"Reference impl:    {reference_impl}")
            print(f"Tolerance:         {seed_tolerance}")

            seed_temp_dir = temp_root / seed_id
            seed_temp_dir.mkdir(parents=True, exist_ok=True)

            compile_status: Dict[str, Dict[str, Any]] = {}
            bin_paths: Dict[str, Path] = {}

            # ------------------------------------------------
            # Compile each implementation once.
            # ------------------------------------------------
            for c_file in c_files:
                impl_id = get_impl_id(c_file)
                bin_file = seed_temp_dir / f"{impl_id}_{c_file.stem}{binary_suffix()}"

                ok, err = compile_c_file(c_file, bin_file)

                compile_status[impl_id] = {
                    "ok": ok,
                    "error": err,
                    "file_name": c_file.name,
                }

                if ok:
                    bin_paths[impl_id] = bin_file

            seed_compile_errors = sum(1 for v in compile_status.values() if not v["ok"])
            seed_timeout_errors = 0
            seed_runtime_errors = 0
            seed_consistency_violations = 0
            seed_program_executions = 0

            case_type_counts: Dict[str, int] = defaultdict(int)

            # ------------------------------------------------
            # Run all test cases.
            # ------------------------------------------------
            for case in cases:
                case_id = case["case_id"]
                case_type = case["case_type"]
                args_json = case["args_json"]
                args_text = case["args_text"]
                argv = case["argv"]

                case_type_counts[case_type] += 1

                outputs_by_impl: Dict[str, str] = {}
                normalized_by_impl: Dict[str, str] = {}
                file_by_impl: Dict[str, str] = {}
                success_impls: List[str] = []

                num_compile_error = 0
                num_timeout = 0
                num_runtime_error = 0

                for c_file in c_files:
                    impl_id = get_impl_id(c_file)
                    file_name = c_file.name
                    file_by_impl[impl_id] = file_name

                    seed_program_executions += 1

                    cstat = compile_status[impl_id]
                    if not cstat["ok"]:
                        num_compile_error += 1

                        per_run_writer.writerow({
                            "seed_id": seed_id,
                            "seed_name": seed_name,
                            "domain": domain,
                            "case_id": case_id,
                            "case_type": case_type,
                            "impl_id": impl_id,
                            "file_name": file_name,
                            "args_json": args_json,
                            "args_text": args_text,
                            "compile_status": "fail",
                            "run_status": "skipped",
                            "return_code": "",
                            "raw_output": "",
                            "normalized_output": "",
                            "elapsed_ms": "",
                            "error_msg": cstat["error"],
                        })

                        failed_case_rows.append({
                            "seed_id": seed_id,
                            "seed_name": seed_name,
                            "domain": domain,
                            "case_id": case_id,
                            "case_type": case_type,
                            "args_json": args_json,
                            "args_text": args_text,
                            "impl_id": impl_id,
                            "file_name": file_name,
                            "reference_impl": reference_impl,
                            "reference_output": "",
                            "current_output": "",
                            "error_type": "compile_error",
                            "error_msg": cstat["error"],
                        })

                        continue

                    run_status, raw_output, error_msg, return_code, elapsed_ms = run_binary(
                        bin_paths[impl_id],
                        argv,
                    )

                    normalized = normalize_output(raw_output)

                    if run_status == "timeout":
                        num_timeout += 1
                    elif run_status != "ok":
                        num_runtime_error += 1
                    else:
                        success_impls.append(impl_id)
                        outputs_by_impl[impl_id] = raw_output
                        normalized_by_impl[impl_id] = normalized

                    per_run_writer.writerow({
                        "seed_id": seed_id,
                        "seed_name": seed_name,
                        "domain": domain,
                        "case_id": case_id,
                        "case_type": case_type,
                        "impl_id": impl_id,
                        "file_name": file_name,
                        "args_json": args_json,
                        "args_text": args_text,
                        "compile_status": "ok",
                        "run_status": run_status,
                        "return_code": return_code,
                        "raw_output": raw_output,
                        "normalized_output": normalized,
                        "elapsed_ms": f"{elapsed_ms:.3f}",
                        "error_msg": error_msg,
                    })

                    if run_status == "timeout":
                        failed_case_rows.append({
                            "seed_id": seed_id,
                            "seed_name": seed_name,
                            "domain": domain,
                            "case_id": case_id,
                            "case_type": case_type,
                            "args_json": args_json,
                            "args_text": args_text,
                            "impl_id": impl_id,
                            "file_name": file_name,
                            "reference_impl": reference_impl,
                            "reference_output": "",
                            "current_output": "",
                            "error_type": "timeout",
                            "error_msg": error_msg,
                        })
                    elif run_status != "ok":
                        failed_case_rows.append({
                            "seed_id": seed_id,
                            "seed_name": seed_name,
                            "domain": domain,
                            "case_id": case_id,
                            "case_type": case_type,
                            "args_json": args_json,
                            "args_text": args_text,
                            "impl_id": impl_id,
                            "file_name": file_name,
                            "reference_impl": reference_impl,
                            "reference_output": "",
                            "current_output": raw_output,
                            "error_type": "runtime_error",
                            "error_msg": error_msg,
                        })

                seed_timeout_errors += num_timeout
                seed_runtime_errors += num_runtime_error

                # ------------------------------------------------
                # Determine reference output.
                # ------------------------------------------------
                reference_output = ""
                reference_available = False

                if reference_impl in outputs_by_impl:
                    reference_output = outputs_by_impl[reference_impl]
                    reference_available = True
                elif success_impls:
                    # Fallback only if A01 failed; this should not happen in valid data.
                    reference_output = outputs_by_impl[success_impls[0]]
                    reference_available = True

                consistency_pass = True

                if num_compile_error > 0 or num_timeout > 0 or num_runtime_error > 0:
                    consistency_pass = False

                if len(success_impls) != len(c_files):
                    consistency_pass = False

                # Important:
                # Empty output can be a valid output for some string tasks, e.g., LCP.
                # Therefore, we should check whether a reference output exists,
                # rather than whether the reference output string is empty.
                if not reference_available:
                    consistency_pass = False
                else:
                    for impl_id in success_impls:
                        current_output = outputs_by_impl[impl_id]
                        if not outputs_equal(current_output, reference_output, seed_tolerance):
                            consistency_pass = False
                            failed_case_rows.append({
                                "seed_id": seed_id,
                                "seed_name": seed_name,
                                "domain": domain,
                                "case_id": case_id,
                                "case_type": case_type,
                                "args_json": args_json,
                                "args_text": args_text,
                                "impl_id": impl_id,
                                "file_name": file_by_impl.get(impl_id, ""),
                                "reference_impl": reference_impl,
                                "reference_output": normalize_output(reference_output),
                                "current_output": normalize_output(current_output),
                                "error_type": "output_mismatch",
                                "error_msg": "",
                            })

                if not consistency_pass:
                    seed_consistency_violations += 1

                distinct_outputs = sorted(set(normalized_by_impl.values()))

                per_case_rows.append({
                    "seed_id": seed_id,
                    "seed_name": seed_name,
                    "domain": domain,
                    "case_id": case_id,
                    "case_type": case_type,
                    "args_json": args_json,
                    "args_text": args_text,
                    "num_impl": len(c_files),
                    "expected_impls": EXPECTED_IMPLS_PER_SEED,
                    "num_compile_error": num_compile_error,
                    "num_timeout": num_timeout,
                    "num_runtime_error": num_runtime_error,
                    "num_success": len(success_impls),
                    "num_distinct_outputs": len(distinct_outputs),
                    "reference_impl": reference_impl,
                    "reference_output": normalize_output(reference_output),
                    "consistency_pass": "yes" if consistency_pass else "no",
                })

            # ------------------------------------------------
            # Seed-level summary.
            # ------------------------------------------------
            seed_passed = (
                len(c_files) == EXPECTED_IMPLS_PER_SEED
                and seed_compile_errors == 0
                and seed_timeout_errors == 0
                and seed_runtime_errors == 0
                and seed_consistency_violations == 0
            )

            per_seed_rows.append({
                "seed_id": seed_id,
                "seed_name": seed_name,
                "domain": domain,
                "num_impl": len(c_files),
                "expected_impls": EXPECTED_IMPLS_PER_SEED,
                "num_base_cases": case_type_counts.get("base", 0),
                "num_boundary_cases": case_type_counts.get("boundary", 0),
                "num_random_cases": case_type_counts.get("random", 0),
                "num_total_cases": len(cases),
                "num_program_executions": seed_program_executions,
                "compile_errors": seed_compile_errors,
                "timeout_errors": seed_timeout_errors,
                "runtime_errors": seed_runtime_errors,
                "consistency_violations": seed_consistency_violations,
                "passed": "yes" if seed_passed else "no",
            })

            global_summary["num_seeds"] += 1
            global_summary["num_implementations"] += len(c_files)
            global_summary["num_base_cases"] += case_type_counts.get("base", 0)
            global_summary["num_boundary_cases"] += case_type_counts.get("boundary", 0)
            global_summary["num_random_cases"] += case_type_counts.get("random", 0)
            global_summary["num_total_input_cases"] += len(cases)
            global_summary["num_program_executions"] += seed_program_executions
            global_summary["compile_errors"] += seed_compile_errors
            global_summary["timeout_errors"] += seed_timeout_errors
            global_summary["runtime_errors"] += seed_runtime_errors
            global_summary["consistency_violations"] += seed_consistency_violations

            if seed_passed:
                global_summary["passed_seeds"] += 1
            else:
                global_summary["failed_seeds"] += 1

            print(f"Seed passed:              {seed_passed}")
            print(f"Compile errors:           {seed_compile_errors}")
            print(f"Timeout errors:           {seed_timeout_errors}")
            print(f"Runtime errors:           {seed_runtime_errors}")
            print(f"Consistency violations:   {seed_consistency_violations}")

        if per_run_file:
            per_run_file.close()
            per_run_file = None

        # ----------------------------------------------------
        # Write summary files.
        # ----------------------------------------------------
        with PER_CASE_CONSISTENCY_CSV.open("w", encoding="utf-8", newline="") as f:
            writer = csv.DictWriter(f, fieldnames=per_case_fields)
            writer.writeheader()
            writer.writerows(per_case_rows)

        with PER_SEED_SUMMARY_CSV.open("w", encoding="utf-8", newline="") as f:
            writer = csv.DictWriter(f, fieldnames=per_seed_fields)
            writer.writeheader()
            writer.writerows(per_seed_rows)

        with FAILED_CASES_CSV.open("w", encoding="utf-8", newline="") as f:
            writer = csv.DictWriter(f, fieldnames=failed_case_fields)
            writer.writeheader()
            writer.writerows(failed_case_rows)

        with AUDIT_SUMMARY_JSON.open("w", encoding="utf-8") as f:
            json.dump(global_summary, f, ensure_ascii=False, indent=2)

        print("=" * 80)
        print("Expanded consistency audit finished.")
        print(f"Project root:             {PROJECT_ROOT}")
        print(f"Source dir:               {SOURCE_DIR}")
        print(f"Test cases:               {TEST_CASES_CSV}")
        print(f"Output dir:               {OUTPUT_DIR}")
        print(f"Per-run log:              {PER_RUN_LOG_CSV}")
        print(f"Per-case consistency:     {PER_CASE_CONSISTENCY_CSV}")
        print(f"Per-seed summary:         {PER_SEED_SUMMARY_CSV}")
        print(f"Failed cases:             {FAILED_CASES_CSV}")
        print(f"Audit summary:            {AUDIT_SUMMARY_JSON}")
        print("-" * 80)
        print(json.dumps(global_summary, ensure_ascii=False, indent=2))
        print("=" * 80)

    finally:
        if per_run_file:
            per_run_file.close()

        if KEEP_TEMP_BINARIES:
            print(f"Temporary binaries kept at: {temp_root}")
        else:
            shutil.rmtree(temp_root, ignore_errors=True)


if __name__ == "__main__":
    main()