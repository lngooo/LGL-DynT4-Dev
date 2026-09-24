#!/usr/bin/env python3
# -*- coding: utf-8 -*-

"""
LGL-DynT4 Expanded Test Case Generator
--------------------------------------
This script generates expanded boundary-value and randomized input cases
for cross-implementation consistency validation.

It does NOT modify the released benchmark. It only generates additional
input cases for validating the existing 50 seeds and 1,050 retained C
implementations.

Output:
    script_OUTPUTS/expanded_consistency/expanded_test_cases.csv

Run:
    python Scripts_ext/validation/expanded_consistency/generate_expanded_tests.py
"""

import csv
import json
import random
from pathlib import Path
from typing import Any, Dict, List, Tuple


# ============================================================
# Path configuration
# ============================================================
# Expected file location:
#   Scripts_ext/validation/expanded_consistency/generate_expanded_tests.py
PROJECT_ROOT = Path(__file__).resolve().parents[3]

CONFIG_PATH = PROJECT_ROOT / "config.json"
OUTPUT_DIR = PROJECT_ROOT / "script_OUTPUTS" / "expanded_consistency"
OUTPUT_CSV = OUTPUT_DIR / "expanded_test_cases.csv"


# ============================================================
# Test generation configuration
# ============================================================
RANDOM_SEED = 42
# Number of boundary-value cases generated per seed from config.json.
BOUNDARY_CASES_PER_SEED = 6
# Number of randomized in-domain cases generated per seed from config.json.
RANDOM_CASES_PER_SEED = 50
INCLUDE_BASE_CASES = True

# Optional debugging: set to {"F02", "F13"} to generate only selected seeds.
# Use set() to generate all seeds.
ONLY_SEEDS = set()
# ONLY_SEEDS = {"F06"}


# ============================================================
# Original two predefined input cases used in the existing audit
# ============================================================
BASE_TEST_CASES: Dict[str, List[List[str]]] = {
    "F01": [["100"], ["1000"]],
    "F02": [["48", "18"], ["101", "103"]],
    "F03": [["5"], ["12"]],
    "F04": [["10"], ["30"]],
    "F05": [["64"], ["9999"]],
    "F06": [["17"], ["100"]],
    "F07": [["2", "10"], ["3", "5"]],
    "F08": [["-500"], ["999"]],
    "F09": [["256"], ["729"]],
    "F10": [["1024"], ["500"]],

    "F11": [
        ["11", "1", "3", "5", "7", "9", "11", "13", "15", "17", "19", "7"],
        ["5", "2", "4", "6", "8", "10", "1"],
    ],
    "F12": [["5", "5", "4", "3", "2", "1"], ["4", "10", "20", "30", "40"]],
    "F13": [["5", "3", "1", "4", "5", "2"], ["4", "99", "10", "50", "20"]],
    "F14": [["5", "1", "2", "3", "4", "5"], ["3", "10", "20", "30"]],
    "F15": [["5", "1", "5", "3", "9", "2"], ["3", "-10", "-5", "-20"]],
    "F16": [["4", "38", "27", "43", "3"], ["4", "100", "0", "50", "-10"]],
    "F17": [["2", "1", "2", "3", "4", "5"], ["1", "10", "20", "30", "40"]],
    "F18": [
        ["6", "3", "10", "50", "20", "40", "30", "2"],
        ["4", "1", "5", "2", "8", "3"],
    ],
    "F19": [["5", "1", "1", "2", "2", "3"], ["3", "4", "4", "4"]],
    "F20": [["3", "3", "2", "1"], ["4", "50", "10", "40", "20"]],
    "F21": [["4", "12", "7", "1", "5"], ["4", "100", "50", "20", "10"]],
    "F22": [["4", "3", "1", "4", "2"], ["4", "9", "8", "7", "6"]],
    "F23": [
        ["2", "1", "2", "3", "4", "5", "3", "3"],
        ["3", "10", "20", "5", "5"],
    ],
    "F24": [["3", "1", "2", "3"], ["5", "10", "20", "30", "40", "50"]],
    "F25": [["5", "1", "2", "3", "4", "5"], ["2", "10", "20"]],

    "F26": [["hello"], ["lgl_dynt4_dataset"]],
    "F27": [["abc", "abc"], ["abc", "abd"]],
    "F28": [["level"], ["hello"]],
    "F29": [["listen", "silent"], ["hello", "world"]],
    "F30": [["the_quick_brown_fox", "brown"], ["mississippi", "issi"]],
    "F31": [["hello world"], ["one two three four"]],
    "F32": [["aaabbc"], ["abcde"]],
    "F33": [["flower", "flow", "flight"], ["dog", "racecar"]],
    "F34": [["banana", "a"], ["test", "z"]],
    "F35": [["education"], ["sky"]],
    "F36": [["Hello"], ["aBcD"]],
    "F37": [[" hello "], ["no_space"]],
    "F38": [["hello world"], ["i love coding"]],
    "F39": [["hello world"], ["the quick brown fox"]],
    "F40": [["FF"], ["1A"]],

    "F41": [["7"], ["1024"]],
    "F42": [["9", "14"], ["0", "255"]],
    "F43": [["64"], ["63"]],
    "F44": [["1"], ["255"]],
    "F45": [["4"], ["10"]],
    "F46": [["data"], ["LGL"]],
    "F47": [["secret", "k"], ["hello", "x"]],
    "F48": [["aaabbc"], ["abc"]],
    "F49": [["hello", "3"], ["abc", "1"]],
    "F50": [["1994"], ["3888"]],
}


def seed_to_domain(seed_id: str) -> str:
    n = int(seed_id[1:])
    if 1 <= n <= 10:
        return "Numeric"
    if 11 <= n <= 25:
        return "Array"
    if 26 <= n <= 40:
        return "String"
    if 41 <= n <= 45:
        return "Bitwise"
    return "Encoding"


def clamp_int(x: int, lo: int, hi: int) -> int:
    return max(lo, min(hi, x))


def unique_cases(cases: List[Tuple[str, List[str], str]]) -> List[Tuple[str, List[str], str]]:
    seen = set()
    output = []
    for case_type, args, source in cases:
        key = tuple(args)
        if key in seen:
            continue
        seen.add(key)
        output.append((case_type, args, source))
    return output


def make_alpha_string(length: int, allow_spaces: bool = False) -> str:
    length = max(1, int(length))
    base = "abcdefghijklmnopqrstuvwxyz"

    if not allow_spaces:
        return "".join(base[i % len(base)] for i in range(length))

    # Generate a stable string with spaces. Subprocess passes it as one argv item.
    words = []
    remaining = length
    while remaining > 0:
        word_len = min(5, remaining)
        words.append("".join(base[i % len(base)] for i in range(word_len)))
        remaining -= word_len
        if remaining > 0:
            remaining -= 1
    s = " ".join(words)
    return s[:length].strip() or "a"


def random_alpha_string(
    rng: random.Random,
    lo: int,
    hi: int,
    allow_spaces: bool = False,
) -> str:
    lo = max(1, int(lo))
    hi = max(lo, int(hi))
    length = rng.randint(lo, hi)

    chars = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"
    if allow_spaces:
        chars += "     "

    s = "".join(rng.choice(chars) for _ in range(length)).strip()
    return s if s else "a"


def random_hex_string(rng: random.Random, lo: int, hi: int) -> str:
    lo = max(1, int(lo))
    hi = max(lo, int(hi))
    length = rng.randint(lo, hi)
    chars = "0123456789ABCDEF"
    return "".join(rng.choice(chars) for _ in range(length))


def char_from_charset(rng: random.Random, charset: str, boundary_index: int = 0) -> str:
    if charset == "alpha":
        options = ["a", "z", "A", "Z", "m"]
    else:
        # Keep printable and simple characters to avoid platform-specific issues.
        options = ["a", "Z", "0", "9", "x"]

    if 0 <= boundary_index < len(options):
        return options[boundary_index]

    return rng.choice(options)


def generate_boundary_value(spec: Dict[str, Any], boundary_index: int, rng: random.Random) -> Any:
    strategy = spec.get("strategy")
    constraints = spec.get("constraints")

    if strategy == "range":
        lo, hi = int(constraints[0]), int(constraints[1])
        mid = (lo + hi) // 2
        q1 = lo + (hi - lo) // 4
        q3 = lo + 3 * (hi - lo) // 4

        candidates = [
            lo,
            hi,
            mid,
            clamp_int(lo + 1, lo, hi),
            clamp_int(hi - 1, lo, hi),
            q1,
        ]

        return candidates[boundary_index % len(candidates)]

    if strategy == "array_gen":
        size_lo, size_hi = constraints["size"]
        val_lo, val_hi = constraints["val"]

        size_lo, size_hi = int(size_lo), int(size_hi)
        val_lo, val_hi = int(val_lo), int(val_hi)

        min_n = max(1, size_lo)
        mid_n = max(size_lo, min(size_hi, 10))
        max_n = max(size_lo, size_hi)

        zero_value = 0 if val_lo <= 0 <= val_hi else val_lo

        patterns = [
            [val_lo] * min_n,
            [val_hi] * min_n,
            [clamp_int(val_lo + i, val_lo, val_hi) for i in range(mid_n)],
            [clamp_int(val_lo + mid_n - 1 - i, val_lo, val_hi) for i in range(mid_n)],
            [zero_value] * mid_n,
            [rng.randint(val_lo, val_hi) for _ in range(max_n)],
        ]

        arr = patterns[boundary_index % len(patterns)]
        if constraints.get("sorted", False):
            arr = sorted(arr)
        return arr

    if strategy == "str_gen":
        lo, hi = constraints["len"]
        lo, hi = int(lo), int(hi)
        allow_spaces = bool(constraints.get("allow_spaces", False))

        lengths = [
            lo,
            hi,
            (lo + hi) // 2,
            min(hi, lo + 1),
            max(lo, hi - 1),
            lo,
        ]
        length = max(1, lengths[boundary_index % len(lengths)])

        if boundary_index % 6 == 0:
            return "a" * length
        if boundary_index % 6 == 1:
            return "z" * length
        return make_alpha_string(length, allow_spaces=allow_spaces)

    if strategy == "str_array_gen":
        count_lo, count_hi = constraints["count"]
        len_lo, len_hi = constraints["len"]

        count_lo, count_hi = int(count_lo), int(count_hi)
        len_lo, len_hi = int(len_lo), int(len_hi)

        counts = [
            count_lo,
            count_hi,
            (count_lo + count_hi) // 2,
            min(count_hi, count_lo + 1),
            max(count_lo, count_hi - 1),
            count_lo,
        ]
        lengths = [
            len_lo,
            len_hi,
            (len_lo + len_hi) // 2,
            min(len_hi, len_lo + 1),
            max(len_lo, len_hi - 1),
            len_lo,
        ]

        count = max(1, counts[boundary_index % len(counts)])
        length = max(1, lengths[boundary_index % len(lengths)])

        prefix = make_alpha_string(max(1, min(5, length)))
        return [prefix + str(i) for i in range(count)]

    if strategy == "char_gen":
        charset = constraints.get("charset", "alpha")
        return char_from_charset(rng, charset, boundary_index)

    if strategy == "hex_gen":
        lo, hi = constraints["len"]
        lo, hi = int(lo), int(hi)

        options = [
            "0",
            "F",
            "1A",
            "FF",
            "7F",
            "A" * max(1, min(hi, 8)),
        ]
        s = options[boundary_index % len(options)]
        return s[:hi] if len(s) > hi else s

    raise ValueError(f"Unsupported strategy: {strategy}")


def generate_random_value(spec: Dict[str, Any], rng: random.Random) -> Any:
    strategy = spec.get("strategy")
    constraints = spec.get("constraints")

    if strategy == "range":
        lo, hi = int(constraints[0]), int(constraints[1])
        return rng.randint(lo, hi)

    if strategy == "array_gen":
        size_lo, size_hi = constraints["size"]
        val_lo, val_hi = constraints["val"]

        size_lo, size_hi = int(size_lo), int(size_hi)
        val_lo, val_hi = int(val_lo), int(val_hi)

        # Cap random case size to keep validation efficient.
        n = rng.randint(size_lo, min(size_hi, 30))
        arr = [rng.randint(val_lo, val_hi) for _ in range(n)]

        if constraints.get("sorted", False):
            arr = sorted(arr)
        return arr

    if strategy == "str_gen":
        lo, hi = constraints["len"]
        allow_spaces = bool(constraints.get("allow_spaces", False))

        # Cap random string length to avoid extremely long argv payloads.
        return random_alpha_string(
            rng,
            int(lo),
            min(int(hi), 80),
            allow_spaces=allow_spaces,
        )

    if strategy == "str_array_gen":
        count_lo, count_hi = constraints["count"]
        len_lo, len_hi = constraints["len"]

        count = rng.randint(int(count_lo), min(int(count_hi), 10))
        return [
            random_alpha_string(rng, int(len_lo), min(int(len_hi), 30), allow_spaces=False)
            for _ in range(count)
        ]

    if strategy == "char_gen":
        charset = constraints.get("charset", "alpha")
        return char_from_charset(rng, charset, boundary_index=99)

    if strategy == "hex_gen":
        lo, hi = constraints["len"]
        return random_hex_string(rng, int(lo), min(int(hi), 8))

    raise ValueError(f"Unsupported strategy: {strategy}")


def flatten_args(values: List[Any]) -> List[str]:
    """
    Convert generated values into command-line argv items.

    Convention:
    - scalar int/string/char: one argv item
    - int_array: elements are passed as argv items, without adding length
    - string_array: strings are passed as argv items

    This follows the existing raw-source audit convention.
    """
    args: List[str] = []
    for value in values:
        if isinstance(value, list):
            args.extend(str(x) for x in value)
        else:
            args.append(str(value))
    return args


def generate_boundary_cases(
    fmeta: Dict[str, Any],
    boundary_cases: int,
    rng: random.Random,
) -> List[List[str]]:
    specs = fmeta.get("params_spec", [])
    cases: List[List[str]] = []

    for i in range(boundary_cases):
        values = [generate_boundary_value(spec, i, rng) for spec in specs]
        cases.append(flatten_args(values))

    return cases


def generate_random_cases(
    fmeta: Dict[str, Any],
    random_cases: int,
    rng: random.Random,
) -> List[List[str]]:
    specs = fmeta.get("params_spec", [])
    cases: List[List[str]] = []

    for _ in range(random_cases):
        values = [generate_random_value(spec, rng) for spec in specs]
        cases.append(flatten_args(values))

    return cases


def generate_f11_boundary_cases(fmeta: Dict[str, Any]) -> List[List[str]]:
    """
    Generate boundary-value cases for F11 BinarySearch.

    Binary search returns an index rather than a Boolean value. If the array
    contains duplicate target values, multiple returned indices can be valid.
    To make cross-implementation output comparison deterministic, the generated
    F11 arrays are strictly increasing.
    """
    target_spec = fmeta["params_spec"][0]
    array_spec = fmeta["params_spec"][1]

    target_lo, target_hi = target_spec["constraints"]
    arr_constraints = array_spec["constraints"]

    val_lo, val_hi = arr_constraints["val"]
    size_lo, size_hi = arr_constraints["size"]

    target_lo = int(target_lo)
    target_hi = int(target_hi)
    val_lo = int(val_lo)
    val_hi = int(val_hi)
    size_lo = int(size_lo)
    size_hi = int(size_hi)

    # Use a compact strictly increasing array so boundary cases are readable.
    n = max(10, size_lo)
    n = min(n, size_hi, val_hi - val_lo + 1)

    base_arr = [val_lo + i for i in range(n)]

    cases: List[List[str]] = []

    # Hit: first element.
    cases.append([str(base_arr[0])] + [str(x) for x in base_arr])

    # Hit: last element.
    cases.append([str(base_arr[-1])] + [str(x) for x in base_arr])

    # Hit: middle element.
    cases.append([str(base_arr[n // 2])] + [str(x) for x in base_arr])

    # Miss: target below the array range.
    arr_low_shifted_start = max(val_lo + 1, target_lo + 1)
    arr_low_shifted = [arr_low_shifted_start + i for i in range(n)]
    arr_low_shifted = [x for x in arr_low_shifted if x <= val_hi]

    if len(arr_low_shifted) >= size_lo:
        absent_low = arr_low_shifted[0] - 1
        absent_low = clamp_int(absent_low, target_lo, target_hi)
        cases.append([str(absent_low)] + [str(x) for x in arr_low_shifted])
    else:
        cases.append([str(base_arr[0])] + [str(x) for x in base_arr])

    # Miss: target above the array range.
    arr_high_base = [val_lo + i for i in range(n)]
    absent_high = arr_high_base[-1] + 1
    absent_high = clamp_int(absent_high, target_lo, target_hi)

    if absent_high not in arr_high_base:
        cases.append([str(absent_high)] + [str(x) for x in arr_high_base])
    else:
        cases.append([str(base_arr[-1])] + [str(x) for x in base_arr])

    # Miss: target inside the value range but not in the array.
    # Use even values as the array and an odd value as the absent target.
    even_arr: List[int] = []
    cur = max(val_lo, 2)
    if cur % 2 != 0:
        cur += 1

    while len(even_arr) < n and cur <= val_hi:
        even_arr.append(cur)
        cur += 2

    if len(even_arr) >= size_lo:
        absent_mid = even_arr[0] + 1
        if target_lo <= absent_mid <= target_hi and absent_mid not in even_arr:
            cases.append([str(absent_mid)] + [str(x) for x in even_arr])
        else:
            cases.append([str(base_arr[n // 2])] + [str(x) for x in base_arr])
    else:
        cases.append([str(base_arr[n // 2])] + [str(x) for x in base_arr])

    return cases[:BOUNDARY_CASES_PER_SEED]


def generate_f11_random_cases(
    fmeta: Dict[str, Any],
    random_cases: int,
    rng: random.Random,
) -> List[List[str]]:
    """
    Generate randomized in-domain cases for F11 BinarySearch.

    The array is strictly increasing to avoid ambiguous valid return indices
    when duplicate target values exist.
    """
    target_spec = fmeta["params_spec"][0]
    array_spec = fmeta["params_spec"][1]

    target_lo, target_hi = target_spec["constraints"]
    arr_constraints = array_spec["constraints"]

    val_lo, val_hi = arr_constraints["val"]
    size_lo, size_hi = arr_constraints["size"]

    target_lo = int(target_lo)
    target_hi = int(target_hi)
    val_lo = int(val_lo)
    val_hi = int(val_hi)
    size_lo = int(size_lo)
    size_hi = int(size_hi)

    value_pool = list(range(val_lo, val_hi + 1))
    cases: List[List[str]] = []

    for _ in range(random_cases):
        max_n = min(size_hi, 30, len(value_pool))
        if max_n < size_lo:
            raise ValueError("F11 value range is too small for a strictly increasing array.")

        n = rng.randint(size_lo, max_n)
        arr = sorted(rng.sample(value_pool, n))

        # About 70% hit cases and 30% miss cases.
        if rng.random() < 0.7:
            target = rng.choice(arr)
        else:
            target = rng.randint(target_lo, target_hi)

            # Try to select a target not present in arr.
            for _try in range(100):
                if target not in arr:
                    break
                target = rng.randint(target_lo, target_hi)

            # If no absent target is found, fall back to a hit case.
            if target in arr:
                target = rng.choice(arr)

        cases.append([str(target)] + [str(x) for x in arr])

    return cases


def main() -> None:
    rng = random.Random(RANDOM_SEED)

    if not CONFIG_PATH.exists():
        raise FileNotFoundError(f"config.json not found: {CONFIG_PATH}")

    OUTPUT_DIR.mkdir(parents=True, exist_ok=True)

    with CONFIG_PATH.open("r", encoding="utf-8") as f:
        config = json.load(f)

    functions = config["functions"]
    rows = []

    for seed_id in sorted(functions.keys(), key=lambda x: int(x[1:])):
        if ONLY_SEEDS and seed_id not in ONLY_SEEDS:
            continue

        fmeta = functions[seed_id]
        seed_name = fmeta["name"]
        domain = seed_to_domain(seed_id)

        combined_cases: List[Tuple[str, List[str], str]] = []

        if INCLUDE_BASE_CASES:
            for base_args in BASE_TEST_CASES.get(seed_id, []):
                combined_cases.append((
                    "base",
                    [str(x) for x in base_args],
                    "original_dynamic_audit",
                ))

        if seed_id == "F11":
            boundary_cases = generate_f11_boundary_cases(fmeta)
            random_cases = generate_f11_random_cases(fmeta, RANDOM_CASES_PER_SEED, rng)
        else:
            boundary_cases = generate_boundary_cases(fmeta, BOUNDARY_CASES_PER_SEED, rng)
            random_cases = generate_random_cases(fmeta, RANDOM_CASES_PER_SEED, rng)

        for args in boundary_cases:
            combined_cases.append((
                "boundary",
                args,
                "config_generated",
            ))

        for args in random_cases:
            combined_cases.append((
                "random",
                args,
                "config_generated",
            ))

        combined_cases = unique_cases(combined_cases)

        for idx, (case_type, args, source) in enumerate(combined_cases, start=1):
            case_id = f"{seed_id}_C{idx:04d}"
            rows.append({
                "seed_id": seed_id,
                "seed_name": seed_name,
                "domain": domain,
                "case_id": case_id,
                "case_type": case_type,
                "args_json": json.dumps(args, ensure_ascii=False),
                "args_text": " ".join(args),
                "source": source,
                "valid_domain": "yes",
            })

    fieldnames = [
        "seed_id",
        "seed_name",
        "domain",
        "case_id",
        "case_type",
        "args_json",
        "args_text",
        "source",
        "valid_domain",
    ]

    with OUTPUT_CSV.open("w", encoding="utf-8", newline="") as f:
        writer = csv.DictWriter(f, fieldnames=fieldnames)
        writer.writeheader()
        writer.writerows(rows)

    seed_count = len(set(r["seed_id"] for r in rows))
    total_cases = len(rows)

    case_type_count: Dict[str, int] = {}
    for row in rows:
        case_type_count[row["case_type"]] = case_type_count.get(row["case_type"], 0) + 1

    print("=" * 80)
    print("Expanded test case generation finished.")
    print(f"Project root:     {PROJECT_ROOT}")
    print(f"Config:           {CONFIG_PATH}")
    print(f"Output CSV:       {OUTPUT_CSV}")
    print(f"Seeds:            {seed_count}")
    print(f"Total cases:      {total_cases}")
    print(f"Base cases:       {case_type_count.get('base', 0)}")
    print(f"Boundary cases:   {case_type_count.get('boundary', 0)}")
    print(f"Random cases:     {case_type_count.get('random', 0)}")
    print(f"Boundary/seed:    {BOUNDARY_CASES_PER_SEED}")
    print(f"Random/seed:      {RANDOM_CASES_PER_SEED}")
    print("=" * 80)


if __name__ == "__main__":
    main()