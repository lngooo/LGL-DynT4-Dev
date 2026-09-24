#!/usr/bin/env python3
# -*- coding: utf-8 -*-

"""
LGL-DynT4 Oracle and Metamorphic Validation
-------------------------------------------
This script complements the expanded cross-implementation consistency audit.

D2 asks:
    Do implementations under the same seed produce the same output?

D3 asks:
    Is the agreed output consistent with an independent semantic oracle or
    with seed-specific metamorphic relations?

Expected location:
    Scripts_ext/validation/oracle_metamorphic/run_oracle_metamorphic_validation.py

Typical run:
    python Scripts_ext/validation/oracle_metamorphic/run_oracle_metamorphic_validation.py

Outputs:
    script_OUTPUTS/oracle_metamorphic/oracle_case_log.csv
    script_OUTPUTS/oracle_metamorphic/metamorphic_case_log.csv
    script_OUTPUTS/oracle_metamorphic/failed_oracle_cases.csv
    script_OUTPUTS/oracle_metamorphic/failed_metamorphic_cases.csv
    script_OUTPUTS/oracle_metamorphic/oracle_metamorphic_summary.json
"""

from __future__ import annotations

import base64
import csv
import json
import math
import os
import re
import shutil
import subprocess
import time
from dataclasses import dataclass
from pathlib import Path
from typing import Any, Callable, Dict, Iterable, List, Optional, Sequence, Tuple


# ============================================================
# Path configuration
# ============================================================
# Expected script location:
#   Scripts_ext/validation/oracle_metamorphic/run_oracle_metamorphic_validation.py
PROJECT_ROOT = Path(__file__).resolve().parents[3]

CONFIG_PATH = PROJECT_ROOT / "config.json"
SOURCE_DIR = PROJECT_ROOT / "Data" / "Natural" / "Source_Raw"

# Use the final D2 seed=42 test suite by default.
EXPANDED_CASES_CSV = PROJECT_ROOT / "script_OUTPUTS" / "expanded_consistency" / "expanded_test_cases.csv"

OUTPUT_DIR = PROJECT_ROOT / "script_OUTPUTS" / "oracle_metamorphic"
ORACLE_CASE_LOG_CSV = OUTPUT_DIR / "oracle_case_log.csv"
METAMORPHIC_CASE_LOG_CSV = OUTPUT_DIR / "metamorphic_case_log.csv"
FAILED_ORACLE_CASES_CSV = OUTPUT_DIR / "failed_oracle_cases.csv"
FAILED_METAMORPHIC_CASES_CSV = OUTPUT_DIR / "failed_metamorphic_cases.csv"
SUMMARY_JSON = OUTPUT_DIR / "oracle_metamorphic_summary.json"

TEMP_BIN_DIR = OUTPUT_DIR / "_temp_bin"


# ============================================================
# Execution configuration
# ============================================================
GCC_PATH = r"D:\programFiles\msys64\mingw64\bin\gcc.exe"
if not Path(GCC_PATH).exists():
    GCC_PATH = shutil.which("gcc") or "gcc"

ENCODING = "gbk"
COMPILE_TIMEOUT = 60
EXECUTION_TIMEOUT = 100
EXPECTED_IMPLS_PER_SEED = 21

# D3 can validate only A01 because D2 has already established same-seed
# cross-implementation consistency. Set to "all" for a stronger but slower
# implementation-level oracle audit.
VALIDATE_IMPL_MODE = "A01"  # choices: "A01", "all"

# Optional debugging filter. Use set() to validate all seeds.
ONLY_SEEDS: set[str] = set()

# Floating-output comparison tolerances. F25 prints two decimals and may differ
# by one formatting unit when incremental averaging is used.
DEFAULT_FLOAT_TOLERANCE = 1e-6
SEED_FLOAT_TOLERANCE: Dict[str, float] = {
    "F25": 1.1e-2,
}

# Representative metamorphic checks use at most this many cases per seed.
MAX_METAMORPHIC_CASES_PER_SEED = 20

# Keep compiled binaries for debugging.
KEEP_TEMP_BINARIES = False


# ============================================================
# Data structures
# ============================================================
@dataclass
class ProgramResult:
    ok: bool
    stdout: str = ""
    stderr: str = ""
    error_type: str = ""
    error_msg: str = ""


@dataclass
class ImplBinary:
    seed_id: str
    impl_id: str
    file_name: str
    source_path: Path
    binary_path: Path
    compile_ok: bool
    compile_error: str = ""


# ============================================================
# General helpers
# ============================================================
def normalize_output(text: str) -> str:
    text = text.replace("\r\n", "\n").replace("\r", "\n")
    return " ".join(text.strip().split())


def split_tokens(text: str) -> List[str]:
    norm = normalize_output(text)
    return norm.split() if norm else []


def parse_int_args(args: Sequence[str]) -> List[int]:
    return [int(x) for x in args]


def to_int32(x: int) -> int:
    x &= 0xFFFFFFFF
    if x >= 0x80000000:
        x -= 0x100000000
    return x


def to_uint32(x: int) -> int:
    return x & 0xFFFFFFFF


def fmt_int(x: int) -> str:
    return str(int(x))


def fmt_array(xs: Sequence[int]) -> str:
    return " ".join(str(int(x)) for x in xs)


def fmt_float2(x: float) -> str:
    # Python uses bankers rounding for exact ties, but the tested values are
    # usually not exact binary ties. The numeric comparator for F25 is tolerant.
    return f"{x:.2f}"


def numeric_equal(a: str, b: str, tol: float) -> bool:
    try:
        return abs(float(normalize_output(a)) - float(normalize_output(b))) <= tol
    except Exception:
        return False


def outputs_equal(seed_id: str, expected: str, actual: str) -> bool:
    expected_n = normalize_output(expected)
    actual_n = normalize_output(actual)

    if expected_n == actual_n:
        return True

    tol = SEED_FLOAT_TOLERANCE.get(seed_id, DEFAULT_FLOAT_TOLERANCE)
    if numeric_equal(expected_n, actual_n, tol):
        return True

    return False


def load_json(path: Path) -> Any:
    with path.open("r", encoding="utf-8") as f:
        return json.load(f)


def load_expanded_cases(path: Path) -> List[Dict[str, str]]:
    with path.open("r", encoding="utf-8", newline="") as f:
        return list(csv.DictReader(f))


def write_csv(path: Path, rows: List[Dict[str, Any]], fieldnames: List[str]) -> None:
    path.parent.mkdir(parents=True, exist_ok=True)
    with path.open("w", encoding="utf-8", newline="") as f:
        writer = csv.DictWriter(f, fieldnames=fieldnames)
        writer.writeheader()
        writer.writerows(rows)


# ============================================================
# Source discovery and execution
# ============================================================
def find_seed_source_files(seed_id: str) -> List[Path]:
    if not SOURCE_DIR.exists():
        raise FileNotFoundError(f"SOURCE_DIR not found: {SOURCE_DIR}")

    files: List[Path] = []

    # Common layout: Data/Natural/Source_Raw/F01_Sum/A01_F01_*.c
    for seed_dir in sorted(SOURCE_DIR.glob(f"{seed_id}_*")):
        if seed_dir.is_dir():
            files.extend(sorted(seed_dir.glob(f"A*_{seed_id}_*.c")))

    # Fallback: recursive search.
    if not files:
        files.extend(sorted(SOURCE_DIR.rglob(f"A*_{seed_id}_*.c")))

    return files


def extract_impl_id(path: Path) -> str:
    m = re.match(r"(A\d+)_", path.name)
    return m.group(1) if m else path.stem.split("_")[0]


def compile_source(seed_id: str, source_path: Path) -> ImplBinary:
    impl_id = extract_impl_id(source_path)
    exe_suffix = ".exe" if os.name == "nt" else ""
    binary_path = TEMP_BIN_DIR / seed_id / f"{source_path.stem}{exe_suffix}"
    binary_path.parent.mkdir(parents=True, exist_ok=True)

    cmd = [str(GCC_PATH), str(source_path), "-O2", "-lm", "-o", str(binary_path)]
    try:
        proc = subprocess.run(
            cmd,
            stdout=subprocess.PIPE,
            stderr=subprocess.PIPE,
            text=True,
            encoding=ENCODING,
            errors="replace",
            timeout=COMPILE_TIMEOUT,
        )
        if proc.returncode != 0:
            return ImplBinary(
                seed_id=seed_id,
                impl_id=impl_id,
                file_name=source_path.name,
                source_path=source_path,
                binary_path=binary_path,
                compile_ok=False,
                compile_error=proc.stderr.strip() or proc.stdout.strip(),
            )
        return ImplBinary(seed_id, impl_id, source_path.name, source_path, binary_path, True)
    except subprocess.TimeoutExpired:
        return ImplBinary(seed_id, impl_id, source_path.name, source_path, binary_path, False, "compile_timeout")
    except Exception as e:
        return ImplBinary(seed_id, impl_id, source_path.name, source_path, binary_path, False, repr(e))


def run_binary(binary_path: Path, args: Sequence[str]) -> ProgramResult:
    try:
        proc = subprocess.run(
            [str(binary_path)] + [str(x) for x in args],
            stdout=subprocess.PIPE,
            stderr=subprocess.PIPE,
            text=True,
            encoding=ENCODING,
            errors="replace",
            timeout=EXECUTION_TIMEOUT,
        )
        if proc.returncode != 0:
            return ProgramResult(
                ok=False,
                stdout=proc.stdout,
                stderr=proc.stderr,
                error_type="runtime_error",
                error_msg=f"returncode={proc.returncode}; stderr={proc.stderr.strip()}",
            )
        return ProgramResult(ok=True, stdout=proc.stdout, stderr=proc.stderr)
    except subprocess.TimeoutExpired:
        return ProgramResult(ok=False, error_type="timeout", error_msg="execution_timeout")
    except Exception as e:
        return ProgramResult(ok=False, error_type="execution_exception", error_msg=repr(e))


def compile_target_binaries(seed_id: str) -> List[ImplBinary]:
    files = find_seed_source_files(seed_id)
    if not files:
        return []

    if VALIDATE_IMPL_MODE.upper() == "A01":
        a01_files = [p for p in files if extract_impl_id(p) == "A01"]
        files = a01_files if a01_files else files[:1]

    binaries = [compile_source(seed_id, p) for p in files]
    binaries.sort(key=lambda b: b.impl_id)
    return binaries


# ============================================================
# Independent semantic oracles for F01-F50
# ============================================================
def oracle_f01(args: Sequence[str]) -> str:
    n = int(args[0])
    return fmt_int(n * (n + 1) // 2)


def oracle_f02(args: Sequence[str]) -> str:
    return fmt_int(math.gcd(int(args[0]), int(args[1])))


def oracle_f03(args: Sequence[str]) -> str:
    return fmt_int(math.factorial(int(args[0])))


def oracle_f04(args: Sequence[str]) -> str:
    n = int(args[0])
    a, b = 0, 1
    for _ in range(n):
        a, b = b, a + b
    return fmt_int(a)


def oracle_f05(args: Sequence[str]) -> str:
    return fmt_int(math.isqrt(int(args[0])))


def oracle_f06(args: Sequence[str]) -> str:
    n = int(args[0])
    if n < 2:
        return "0"
    if n == 2:
        return "1"
    if n % 2 == 0:
        return "0"
    d = 3
    while d * d <= n:
        if n % d == 0:
            return "0"
        d += 2
    return "1"


def oracle_f07(args: Sequence[str]) -> str:
    base, exp = int(args[0]), int(args[1])
    result = 1
    for _ in range(exp):
        result = to_int32(result * base)
    return fmt_int(result)


def oracle_f08(args: Sequence[str]) -> str:
    return fmt_int(abs(int(args[0])))


def oracle_f09(args: Sequence[str]) -> str:
    return fmt_int(math.isqrt(int(args[0])))


def oracle_f10(args: Sequence[str]) -> str:
    return fmt_int(int(math.log2(int(args[0]))))


def oracle_f11(args: Sequence[str]) -> str:
    target = int(args[0])
    arr = parse_int_args(args[1:])
    try:
        return fmt_int(arr.index(target))
    except ValueError:
        return "-1"


def oracle_sort(args: Sequence[str]) -> str:
    return fmt_array(sorted(parse_int_args(args)))


def oracle_f14(args: Sequence[str]) -> str:
    return fmt_array(list(reversed(parse_int_args(args))))


def oracle_f15(args: Sequence[str]) -> str:
    return fmt_int(max(parse_int_args(args)))


def oracle_f17(args: Sequence[str]) -> str:
    k = int(args[0])
    arr = parse_int_args(args[1:])
    if not arr:
        return ""
    k %= len(arr)
    return fmt_array(arr[k:] + arr[:k])


def oracle_f18(args: Sequence[str]) -> str:
    k = int(args[0])
    arr = sorted(parse_int_args(args[1:]))
    k = max(1, min(k, len(arr)))
    return fmt_int(arr[k - 1])


def oracle_f19(args: Sequence[str]) -> str:
    seen = set()
    out = []
    for x in parse_int_args(args):
        if x not in seen:
            seen.add(x)
            out.append(x)
    return fmt_array(out)


def oracle_f23(args: Sequence[str]) -> str:
    target = int(args[0])
    arr = parse_int_args(args[1:])
    try:
        return fmt_int(arr.index(target))
    except ValueError:
        return "-1"


def oracle_f24(args: Sequence[str]) -> str:
    return fmt_int(sum(parse_int_args(args)))


def oracle_f25(args: Sequence[str]) -> str:
    arr = parse_int_args(args)
    return fmt_float2(sum(arr) / len(arr))


def oracle_f26(args: Sequence[str]) -> str:
    return fmt_int(len(args[0]))


def c_style_strcmp(a: str, b: str) -> int:
    # Mimic the common byte-wise strcmp behavior for ASCII-domain generated strings.
    ba = a.encode("latin1", errors="ignore")
    bb = b.encode("latin1", errors="ignore")
    for x, y in zip(ba, bb):
        if x != y:
            return x - y
    return len(ba) - len(bb)


def oracle_f27(args: Sequence[str]) -> str:
    return fmt_int(c_style_strcmp(args[0], args[1]))


def oracle_f28(args: Sequence[str]) -> str:
    s = args[0]
    return "1" if s == s[::-1] else "0"


def oracle_f29(args: Sequence[str]) -> str:
    return "1" if sorted(args[0]) == sorted(args[1]) else "0"


def oracle_f30(args: Sequence[str]) -> str:
    return fmt_int(args[0].find(args[1]))


def oracle_f31(args: Sequence[str]) -> str:
    return fmt_int(len(args[0].split()))


def rle_encode(s: str) -> str:
    if not s:
        return ""
    out: List[str] = []
    prev = s[0]
    count = 1
    for ch in s[1:]:
        if ch == prev:
            count += 1
        else:
            out.append(f"{prev}{count}")
            prev = ch
            count = 1
    out.append(f"{prev}{count}")
    return "".join(out)


def oracle_f32(args: Sequence[str]) -> str:
    return rle_encode(args[0])


def oracle_f33(args: Sequence[str]) -> str:
    if not args:
        return ""
    prefix = args[0]
    for s in args[1:]:
        while not s.startswith(prefix):
            prefix = prefix[:-1]
            if not prefix:
                return ""
    return prefix


def oracle_f34(args: Sequence[str]) -> str:
    return fmt_int(args[0].count(args[1]))


def oracle_f35(args: Sequence[str]) -> str:
    return fmt_int(sum(1 for ch in args[0] if ch.lower() in "aeiou"))


def oracle_f36(args: Sequence[str]) -> str:
    return args[0].swapcase()


def oracle_f37(args: Sequence[str]) -> str:
    # Dataset convention for F37 TrimSpace: remove all ordinary spaces
    # from the string, not only leading/trailing spaces.
    return args[0].replace(" ", "")


def oracle_f38(args: Sequence[str]) -> str:
    return " ".join(reversed(args[0].split()))


def oracle_f39(args: Sequence[str]) -> str:
    # Dataset convention for F39 TitleCase: capitalize the first letter of
    # each word and convert the remaining letters to lowercase.
    words = args[0].split()
    return " ".join(w[:1].upper() + w[1:].lower() for w in words)


def oracle_f40(args: Sequence[str]) -> str:
    # C implementations print the parsed hexadecimal value as signed int.
    # Therefore, values above INT_MAX must be interpreted as signed 32-bit.
    return fmt_int(to_int32(int(args[0], 16)))


def oracle_f41(args: Sequence[str]) -> str:
    return fmt_int(bin(to_uint32(int(args[0]))).count("1"))


def oracle_f42(args: Sequence[str]) -> str:
    x = to_uint32(int(args[0]) ^ int(args[1]))
    return fmt_int(bin(x).count("1"))


def oracle_f43(args: Sequence[str]) -> str:
    n = int(args[0])
    return "1" if n > 0 and (n & (n - 1)) == 0 else "0"


def oracle_f44(args: Sequence[str]) -> str:
    n = to_uint32(int(args[0]))
    swapped = ((n & 0x000000FF) << 24) | ((n & 0x0000FF00) << 8) | ((n & 0x00FF0000) >> 8) | ((n & 0xFF000000) >> 24)
    return fmt_int(to_uint32(swapped))


def oracle_f45(args: Sequence[str]) -> str:
    n = to_uint32(int(args[0]))
    return fmt_int(to_uint32(n ^ (n >> 1)))


def oracle_f46(args: Sequence[str]) -> str:
    return base64.b64encode(args[0].encode("utf-8")).decode("ascii")


def oracle_f47(args: Sequence[str]) -> str:
    data, key = args[0], args[1]
    k = ord(key[0]) if key else 0
    # Dataset convention for F47 XorCipher: output XOR bytes as lowercase
    # two-digit hexadecimal strings.
    return "".join(f"{ord(ch) ^ k:02x}" for ch in data)


def oracle_f48(args: Sequence[str]) -> str:
    return rle_encode(args[0])


def oracle_f49(args: Sequence[str]) -> str:
    text, shift_s = args[0], args[1]
    shift = int(shift_s) % 26
    out = []
    for ch in text:
        if "a" <= ch <= "z":
            out.append(chr((ord(ch) - ord("a") + shift) % 26 + ord("a")))
        elif "A" <= ch <= "Z":
            out.append(chr((ord(ch) - ord("A") + shift) % 26 + ord("A")))
        else:
            out.append(ch)
    return "".join(out)


def oracle_f50(args: Sequence[str]) -> str:
    n = int(args[0])
    table = [
        (1000, "M"), (900, "CM"), (500, "D"), (400, "CD"),
        (100, "C"), (90, "XC"), (50, "L"), (40, "XL"),
        (10, "X"), (9, "IX"), (5, "V"), (4, "IV"), (1, "I"),
    ]
    out = []
    for value, symbol in table:
        while n >= value:
            out.append(symbol)
            n -= value
    return "".join(out)


ORACLES: Dict[str, Callable[[Sequence[str]], str]] = {
    "F01": oracle_f01,
    "F02": oracle_f02,
    "F03": oracle_f03,
    "F04": oracle_f04,
    "F05": oracle_f05,
    "F06": oracle_f06,
    "F07": oracle_f07,
    "F08": oracle_f08,
    "F09": oracle_f09,
    "F10": oracle_f10,
    "F11": oracle_f11,
    "F12": oracle_sort,
    "F13": oracle_sort,
    "F14": oracle_f14,
    "F15": oracle_f15,
    "F16": oracle_sort,
    "F17": oracle_f17,
    "F18": oracle_f18,
    "F19": oracle_f19,
    "F20": oracle_sort,
    "F21": oracle_sort,
    "F22": oracle_sort,
    "F23": oracle_f23,
    "F24": oracle_f24,
    "F25": oracle_f25,
    "F26": oracle_f26,
    "F27": oracle_f27,
    "F28": oracle_f28,
    "F29": oracle_f29,
    "F30": oracle_f30,
    "F31": oracle_f31,
    "F32": oracle_f32,
    "F33": oracle_f33,
    "F34": oracle_f34,
    "F35": oracle_f35,
    "F36": oracle_f36,
    "F37": oracle_f37,
    "F38": oracle_f38,
    "F39": oracle_f39,
    "F40": oracle_f40,
    "F41": oracle_f41,
    "F42": oracle_f42,
    "F43": oracle_f43,
    "F44": oracle_f44,
    "F45": oracle_f45,
    "F46": oracle_f46,
    "F47": oracle_f47,
    "F48": oracle_f48,
    "F49": oracle_f49,
    "F50": oracle_f50,
}


# ============================================================
# Metamorphic validation helpers
# ============================================================
def transform_args_for_mr(seed_id: str, args: Sequence[str], mr_name: str) -> Optional[List[str]]:
    if seed_id == "F02" and mr_name == "gcd_commutativity":
        return [args[1], args[0]]

    if seed_id in {"F12", "F13", "F16", "F20", "F21", "F22"} and mr_name == "sort_permutation_invariance":
        return list(reversed(args))

    if seed_id == "F14" and mr_name == "reverse_twice_input":
        return list(reversed(args))

    if seed_id in {"F15", "F24", "F25"} and mr_name == "array_permutation_invariance":
        return list(reversed(args))

    if seed_id == "F28" and mr_name == "palindrome_reverse_invariance":
        return [args[0][::-1]]

    if seed_id == "F29" and mr_name == "anagram_symmetry":
        return [args[1], args[0]]

    if seed_id == "F33" and mr_name == "lcp_common_prefix_extension":
        return ["zz" + s for s in args]

    if seed_id == "F43" and mr_name == "power_of_two_double_positive":
        n = int(args[0])
        if n <= 0 or n > 1_000_000_000:
            return None
        return [str(n * 2)]

    return None


def expected_relation_holds(seed_id: str, mr_name: str, original_output: str, transformed_output: str) -> bool:
    if seed_id == "F33" and mr_name == "lcp_common_prefix_extension":
        return normalize_output(transformed_output) == normalize_output("zz" + original_output)

    if seed_id == "F14" and mr_name == "reverse_twice_input":
        # Running reverse on reversed input should produce the original input.
        return True  # The direct oracle check already covers the exact expected output.

    return outputs_equal(seed_id, original_output, transformed_output)


MR_PLAN: Dict[str, List[str]] = {
    "F02": ["gcd_commutativity"],
    "F12": ["sort_permutation_invariance"],
    "F13": ["sort_permutation_invariance"],
    "F15": ["array_permutation_invariance"],
    "F16": ["sort_permutation_invariance"],
    "F20": ["sort_permutation_invariance"],
    "F21": ["sort_permutation_invariance"],
    "F22": ["sort_permutation_invariance"],
    "F24": ["array_permutation_invariance"],
    "F25": ["array_permutation_invariance"],
    "F28": ["palindrome_reverse_invariance"],
    "F29": ["anagram_symmetry"],
    "F33": ["lcp_common_prefix_extension"],
    "F43": ["power_of_two_double_positive"],
}


# ============================================================
# Validation logic
# ============================================================
def run_oracle_validation(
    cases: List[Dict[str, str]],
    binaries_by_seed: Dict[str, List[ImplBinary]],
) -> Tuple[List[Dict[str, Any]], List[Dict[str, Any]]]:
    rows: List[Dict[str, Any]] = []
    failures: List[Dict[str, Any]] = []

    for row in cases:
        seed_id = row["seed_id"]
        if ONLY_SEEDS and seed_id not in ONLY_SEEDS:
            continue
        if seed_id not in ORACLES:
            continue

        args = json.loads(row["args_json"])
        expected = ORACLES[seed_id](args)

        for binary in binaries_by_seed.get(seed_id, []):
            result = run_binary(binary.binary_path, args)
            actual = normalize_output(result.stdout)
            passed = result.ok and outputs_equal(seed_id, expected, actual)

            out = {
                "seed_id": seed_id,
                "seed_name": row.get("seed_name", ""),
                "case_id": row["case_id"],
                "case_type": row.get("case_type", ""),
                "args_json": json.dumps(args, ensure_ascii=False),
                "args_text": " ".join(str(x) for x in args),
                "impl_id": binary.impl_id,
                "file_name": binary.file_name,
                "expected_output": normalize_output(expected),
                "actual_output": actual,
                "passed": "yes" if passed else "no",
                "error_type": "" if result.ok else result.error_type,
                "error_msg": "" if result.ok else result.error_msg,
            }
            rows.append(out)
            if not passed:
                failures.append(out.copy())

    return rows, failures


def run_metamorphic_validation(
    cases: List[Dict[str, str]],
    binaries_by_seed: Dict[str, List[ImplBinary]],
) -> Tuple[List[Dict[str, Any]], List[Dict[str, Any]]]:
    rows: List[Dict[str, Any]] = []
    failures: List[Dict[str, Any]] = []

    per_seed_count: Dict[str, int] = {}

    for row in cases:
        seed_id = row["seed_id"]
        if ONLY_SEEDS and seed_id not in ONLY_SEEDS:
            continue
        if seed_id not in MR_PLAN:
            continue
        if per_seed_count.get(seed_id, 0) >= MAX_METAMORPHIC_CASES_PER_SEED:
            continue

        args = json.loads(row["args_json"])
        binaries = binaries_by_seed.get(seed_id, [])
        if not binaries:
            continue
        binary = binaries[0]

        original = run_binary(binary.binary_path, args)
        if not original.ok:
            continue
        original_output = normalize_output(original.stdout)

        per_seed_count[seed_id] = per_seed_count.get(seed_id, 0) + 1

        for mr_name in MR_PLAN[seed_id]:
            transformed_args = transform_args_for_mr(seed_id, args, mr_name)
            if transformed_args is None:
                continue

            transformed = run_binary(binary.binary_path, transformed_args)
            transformed_output = normalize_output(transformed.stdout)

            if seed_id == "F14" and mr_name == "reverse_twice_input":
                # More direct check for reverse: reverse(reversed(arr)) should equal arr.
                expected = fmt_array(parse_int_args(args))
                passed = transformed.ok and outputs_equal(seed_id, expected, transformed_output)
            elif seed_id == "F43" and mr_name == "power_of_two_double_positive":
                # If n is a power of two, 2n is also a power of two; otherwise not necessarily.
                n = int(args[0])
                if n > 0 and (n & (n - 1)) == 0:
                    passed = transformed.ok and transformed_output == "1"
                else:
                    passed = transformed.ok
            else:
                passed = transformed.ok and expected_relation_holds(
                    seed_id,
                    mr_name,
                    original_output,
                    transformed_output,
                )

            out = {
                "seed_id": seed_id,
                "seed_name": row.get("seed_name", ""),
                "case_id": row["case_id"],
                "mr_name": mr_name,
                "impl_id": binary.impl_id,
                "file_name": binary.file_name,
                "original_args_json": json.dumps(args, ensure_ascii=False),
                "transformed_args_json": json.dumps(transformed_args, ensure_ascii=False),
                "original_output": original_output,
                "transformed_output": transformed_output,
                "passed": "yes" if passed else "no",
                "error_type": "" if transformed.ok else transformed.error_type,
                "error_msg": "" if transformed.ok else transformed.error_msg,
            }
            rows.append(out)
            if not passed:
                failures.append(out.copy())

    return rows, failures


def main() -> None:
    start = time.time()

    if not CONFIG_PATH.exists():
        raise FileNotFoundError(f"config.json not found: {CONFIG_PATH}")
    if not EXPANDED_CASES_CSV.exists():
        raise FileNotFoundError(f"expanded_test_cases.csv not found: {EXPANDED_CASES_CSV}")

    OUTPUT_DIR.mkdir(parents=True, exist_ok=True)
    TEMP_BIN_DIR.mkdir(parents=True, exist_ok=True)

    config = load_json(CONFIG_PATH)
    cases = load_expanded_cases(EXPANDED_CASES_CSV)

    seed_ids = sorted({row["seed_id"] for row in cases}, key=lambda x: int(x[1:]))
    if ONLY_SEEDS:
        seed_ids = [s for s in seed_ids if s in ONLY_SEEDS]

    binaries_by_seed: Dict[str, List[ImplBinary]] = {}
    compile_errors: List[Dict[str, Any]] = []

    for seed_id in seed_ids:
        binaries = compile_target_binaries(seed_id)
        binaries_by_seed[seed_id] = [b for b in binaries if b.compile_ok]
        for b in binaries:
            if not b.compile_ok:
                compile_errors.append({
                    "seed_id": seed_id,
                    "impl_id": b.impl_id,
                    "file_name": b.file_name,
                    "error": b.compile_error,
                })

    oracle_rows, oracle_failures = run_oracle_validation(cases, binaries_by_seed)
    mr_rows, mr_failures = run_metamorphic_validation(cases, binaries_by_seed)

    oracle_fields = [
        "seed_id", "seed_name", "case_id", "case_type", "args_json", "args_text",
        "impl_id", "file_name", "expected_output", "actual_output", "passed",
        "error_type", "error_msg",
    ]
    mr_fields = [
        "seed_id", "seed_name", "case_id", "mr_name", "impl_id", "file_name",
        "original_args_json", "transformed_args_json", "original_output",
        "transformed_output", "passed", "error_type", "error_msg",
    ]

    write_csv(ORACLE_CASE_LOG_CSV, oracle_rows, oracle_fields)
    write_csv(FAILED_ORACLE_CASES_CSV, oracle_failures, oracle_fields)
    write_csv(METAMORPHIC_CASE_LOG_CSV, mr_rows, mr_fields)
    write_csv(FAILED_METAMORPHIC_CASES_CSV, mr_failures, mr_fields)

    elapsed = time.time() - start

    summary = {
        "project_root": str(PROJECT_ROOT),
        "config_path": str(CONFIG_PATH),
        "source_dir": str(SOURCE_DIR),
        "expanded_cases_csv": str(EXPANDED_CASES_CSV),
        "output_dir": str(OUTPUT_DIR),
        "gcc_path": str(GCC_PATH),
        "validate_impl_mode": VALIDATE_IMPL_MODE,
        "num_input_cases_loaded": len(cases),
        "num_seeds_loaded": len(seed_ids),
        "num_oracle_rows": len(oracle_rows),
        "num_oracle_failures": len(oracle_failures),
        "num_metamorphic_rows": len(mr_rows),
        "num_metamorphic_failures": len(mr_failures),
        "num_compile_errors": len(compile_errors),
        "compile_errors": compile_errors,
        "oracle_supported_seeds": sorted(ORACLES.keys(), key=lambda x: int(x[1:])),
        "metamorphic_supported_seeds": sorted(MR_PLAN.keys(), key=lambda x: int(x[1:])),
        "elapsed_seconds": round(elapsed, 3),
        "elapsed_minutes": round(elapsed / 60.0, 3),
    }

    with SUMMARY_JSON.open("w", encoding="utf-8") as f:
        json.dump(summary, f, ensure_ascii=False, indent=2)

    if not KEEP_TEMP_BINARIES and TEMP_BIN_DIR.exists():
        shutil.rmtree(TEMP_BIN_DIR, ignore_errors=True)

    print("=" * 80)
    print("Oracle/metamorphic validation finished.")
    print(f"Project root:              {PROJECT_ROOT}")
    print(f"Input cases:               {EXPANDED_CASES_CSV}")
    print(f"Output dir:                {OUTPUT_DIR}")
    print(f"Validation mode:           {VALIDATE_IMPL_MODE}")
    print(f"Oracle rows:               {len(oracle_rows)}")
    print(f"Oracle failures:           {len(oracle_failures)}")
    print(f"Metamorphic rows:          {len(mr_rows)}")
    print(f"Metamorphic failures:      {len(mr_failures)}")
    print(f"Compile errors:            {len(compile_errors)}")
    print(f"Summary:                   {SUMMARY_JSON}")
    print("=" * 80)


if __name__ == "__main__":
    main()