#!/usr/bin/env python3
# -*- coding: utf-8 -*-

"""
D12 S/O Variant Taxonomy Analysis for LGL-DynT4
================================================

Purpose:
    This script summarizes the implementation architecture taxonomy of LGL-DynT4.

Scope:
    Data/Natural/Source_Raw

Rationale:
    D12 focuses on the A-dimension implementation architectures. Source_Raw is used
    because it preserves filenames, comments, implementation logic descriptions,
    parent tags, includes, and full generated metadata.

Outputs:
    script_OUTPUTS/variant_taxonomy/
    ├── variant_taxonomy_summary.json
    ├── variant_records.csv
    ├── per_seed_so_counts.csv
    ├── variant_type_counts.csv
    ├── parent_coverage.csv
    ├── implementation_feature_summary.csv
    └── naming_consistency_warnings.csv
"""

import csv
import json
import re
from collections import Counter, defaultdict
from pathlib import Path
from typing import Dict, List, Optional, Tuple


# ============================================================
# Path configuration
# ============================================================

# Expected script location:
#   Scripts_ext/analysis/variant_taxonomy/analyze_variant_taxonomy.py
PROJECT_ROOT = Path(__file__).resolve().parents[3]

SOURCE_RAW_DIR = PROJECT_ROOT / "Data" / "Natural" / "Source_Raw"

OUTPUT_DIR = PROJECT_ROOT / "script_OUTPUTS" / "variant_taxonomy"

SUMMARY_JSON = OUTPUT_DIR / "variant_taxonomy_summary.json"
VARIANT_RECORDS_CSV = OUTPUT_DIR / "variant_records.csv"
PER_SEED_SO_COUNTS_CSV = OUTPUT_DIR / "per_seed_so_counts.csv"
VARIANT_TYPE_COUNTS_CSV = OUTPUT_DIR / "variant_type_counts.csv"
PARENT_COVERAGE_CSV = OUTPUT_DIR / "parent_coverage.csv"
IMPLEMENTATION_FEATURE_SUMMARY_CSV = OUTPUT_DIR / "implementation_feature_summary.csv"
NAMING_WARNINGS_CSV = OUTPUT_DIR / "naming_consistency_warnings.csv"

EXPECTED_SEEDS = 50
EXPECTED_IMPLS_PER_SEED = 21
EXPECTED_TOTAL_FILES = 1050

ENCODINGS = ["utf-8", "gbk", "latin-1"]


# ============================================================
# Filename parsing
# ============================================================

S_PATTERN = re.compile(r"^(A\d{2})_(F\d{2})_S_(.+)\.c$")
O_PATTERN = re.compile(r"^(A\d{2})_(F\d{2})_O_(A\d{2})_(.+)\.c$")


def parse_filename(file_name: str) -> Dict[str, Optional[str]]:
    """
    Parse filenames such as:
        A01_F01_S_Loop.c
        A02_F01_O_A01_Flat.c
    """
    m_o = O_PATTERN.match(file_name)
    if m_o:
        return {
            "impl_id": m_o.group(1),
            "seed_id": m_o.group(2),
            "series": "O",
            "parent_id": m_o.group(3),
            "variant_desc": m_o.group(4),
            "parse_status": "ok",
        }

    m_s = S_PATTERN.match(file_name)
    if m_s:
        return {
            "impl_id": m_s.group(1),
            "seed_id": m_s.group(2),
            "series": "S",
            "parent_id": "",
            "variant_desc": m_s.group(3),
            "parse_status": "ok",
        }

    seed_match = re.search(r"(F\d{2})", file_name)
    impl_match = re.search(r"(A\d{2})", file_name)

    return {
        "impl_id": impl_match.group(1) if impl_match else "",
        "seed_id": seed_match.group(1) if seed_match else "",
        "series": "",
        "parent_id": "",
        "variant_desc": "",
        "parse_status": "filename_parse_failed",
    }


# ============================================================
# Text reading and metadata extraction
# ============================================================

def read_text(path: Path) -> str:
    last_error = None
    for enc in ENCODINGS:
        try:
            return path.read_text(encoding=enc)
        except Exception as exc:
            last_error = exc
    raise RuntimeError(f"Failed to read {path}: {last_error}")


def extract_implementation_logic(code: str) -> str:
    """
    Extract comment line:
        Implementation Logic: ...
    """
    m = re.search(r"Implementation\s+Logic\s*:\s*(.+)", code, flags=re.IGNORECASE)
    if m:
        return m.group(1).strip()
    return ""


def extract_core_function_name(code: str, seed_name_hint: str = "") -> str:
    """
    Extract the first likely non-main function name.
    This is only for feature-level checking, not semantic verification.
    """
    pattern = re.compile(
        r"\b(?:int|void|char|double|float|long|unsigned\s+int|long\s+long)\s+"
        r"([A-Za-z_][A-Za-z0-9_]*)\s*\([^;]*\)\s*\{"
    )

    for m in pattern.finditer(code):
        name = m.group(1)
        if name != "main":
            return name

    return seed_name_hint


def remove_comments(code: str) -> str:
    code = re.sub(r"/\*.*?\*/", " ", code, flags=re.DOTALL)
    code = re.sub(r"//.*", " ", code)
    return code


def strip_strings(code: str) -> str:
    code = re.sub(r'"(?:\\.|[^"\\])*"', '"STR"', code)
    code = re.sub(r"'(?:\\.|[^'\\])*'", "'C'", code)
    return code


def iter_c_files(root: Path) -> List[Path]:
    if not root.exists():
        return []
    return sorted(p for p in root.rglob("*.c") if p.is_file())


# ============================================================
# Variant-family classification
# ============================================================

def normalize_desc(desc: str) -> str:
    return desc.lower().replace("-", "_").replace(" ", "_")


def classify_variant_family(series: str, variant_desc: str, implementation_logic: str) -> str:
    """
    Classify variant family using filename suffix and implementation logic.
    This is taxonomy-oriented and heuristic. It is not a semantic verifier.
    """
    text = normalize_desc(variant_desc + "_" + implementation_logic)

    if series == "S":
        if any(k in text for k in ["recursive", "recursion", "recur"]):
            return "S-recursive"
        if any(k in text for k in ["math", "formula", "closed", "log", "sqrt", "precision", "newton"]):
            return "S-mathematical/numeric"
        if any(k in text for k in ["pointer", "ptr", "alias"]):
            return "S-pointer/alias"
        if any(k in text for k in ["buffer", "array", "index", "table", "lut", "lookup"]):
            return "S-buffer/table/index"
        if any(k in text for k in ["bitwise", "xor", "shift", "gray", "bit"]):
            return "S-bitwise/instructional"
        if any(k in text for k in ["library", "wrapper", "stdlib", "string"]):
            return "S-library/wrapper"
        if any(k in text for k in ["branch", "early", "deferred", "scan", "loop", "iterative", "standard"]):
            return "S-iterative/control"
        return "S-other"

    if series == "O":
        if any(k in text for k in ["flat", "flatten", "state", "state_machine"]):
            return "O-control-flow-flattening"
        if any(k in text for k in ["goto", "jump", "jumptable", "jump_table", "trampoline"]):
            return "O-goto/jump-reconstruction"
        if any(k in text for k in ["opaque", "dummy", "dead", "junk", "redundant"]):
            return "O-opaque/dummy/redundant"
        if any(k in text for k in ["varsplit", "var_split", "split", "temp", "temporary"]):
            return "O-data-flow-perturbation"
        if any(k in text for k in ["alias", "pointer", "ptr"]):
            return "O-alias/pointer-perturbation"
        if any(k in text for k in ["bitwise", "xor", "shift", "swap", "instruction"]):
            return "O-instruction-substitution"
        if any(k in text for k in ["unroll", "loop", "doubleloop", "switchloop", "switch"]):
            return "O-loop/control-restructuring"
        return "O-other"

    return "unknown"


# ============================================================
# Lightweight implementation feature extraction
# ============================================================

def count_regex(pattern: str, text: str) -> int:
    return len(re.findall(pattern, text))


def has_nested_loop(code_no_comments: str) -> bool:
    """
    Lightweight nested-loop heuristic:
    find a loop keyword, then another loop keyword shortly after before a closing brace.
    This is only a warning feature, not a parser-level guarantee.
    """
    compact = re.sub(r"\s+", " ", code_no_comments)
    return bool(re.search(r"\b(for|while|do)\b.{0,300}\b(for|while|do)\b", compact))


def extract_features(code: str, core_function_name: str) -> Dict[str, object]:
    code_nc = remove_comments(code)
    code_clean = strip_strings(code_nc)

    bitwise_ops = count_regex(r"(&&?|\|\|?|\^|<<|>>|~)", code_clean)
    # Avoid counting && and || as bitwise-only too strongly, but keep them as low-level operators.
    goto_count = count_regex(r"\bgoto\b", code_clean)
    switch_count = count_regex(r"\bswitch\b", code_clean)
    case_count = count_regex(r"\bcase\b", code_clean)
    for_count = count_regex(r"\bfor\s*\(", code_clean)
    while_count = count_regex(r"\bwhile\s*\(", code_clean)
    do_count = count_regex(r"\bdo\b", code_clean)

    if_count = count_regex(r"\bif\s*\(", code_clean)
    ternary_count = code_clean.count("?")
    pointer_tokens = count_regex(r"(\*|->|&[A-Za-z_])", code_clean)
    array_access_count = count_regex(r"\[[^\]]+\]", code_clean)

    math_call_count = count_regex(r"\b(sqrt|sqrtf|sqrtl|log|log2|log10|exp|pow|floor|ceil|round|fabs)\s*\(", code_clean)
    string_call_count = count_regex(r"\b(strlen|strcmp|strncmp|strcpy|strncpy|strcat|memcpy|memmove|memset|memcmp)\s*\(", code_clean)

    recursion_count = 0
    if core_function_name:
        # Count calls after the definition name. This is approximate.
        occurrences = count_regex(r"\b" + re.escape(core_function_name) + r"\s*\(", code_clean)
        recursion_count = max(0, occurrences - 1)

    return {
        "goto_count": goto_count,
        "switch_count": switch_count,
        "case_count": case_count,
        "for_count": for_count,
        "while_count": while_count,
        "do_count": do_count,
        "loop_count": for_count + while_count + do_count,
        "if_count": if_count,
        "ternary_count": ternary_count,
        "bitwise_op_count": bitwise_ops,
        "pointer_token_count": pointer_tokens,
        "array_access_count": array_access_count,
        "math_call_count": math_call_count,
        "string_call_count": string_call_count,
        "recursive_call_count": recursion_count,
        "has_nested_loop": "yes" if has_nested_loop(code_clean) else "no",
        "loc_nonempty": sum(1 for line in code.splitlines() if line.strip()),
    }


# ============================================================
# Naming consistency warnings
# ============================================================

def add_warning(warnings: List[Dict[str, object]], record: Dict[str, object], warning_type: str, message: str) -> None:
    warnings.append({
        "seed_id": record.get("seed_id", ""),
        "impl_id": record.get("impl_id", ""),
        "series": record.get("series", ""),
        "parent_id": record.get("parent_id", ""),
        "variant_desc": record.get("variant_desc", ""),
        "variant_family": record.get("variant_family", ""),
        "file": record.get("rel_path", ""),
        "warning_type": warning_type,
        "message": message,
    })


def generate_warnings(records: List[Dict[str, object]]) -> List[Dict[str, object]]:
    warnings: List[Dict[str, object]] = []

    by_seed_impl = {
        (r["seed_id"], r["impl_id"]): r
        for r in records
        if r.get("seed_id") and r.get("impl_id")
    }

    for r in records:
        desc = normalize_desc(str(r.get("variant_desc", "")))
        logic = normalize_desc(str(r.get("implementation_logic", "")))
        text = desc + "_" + logic

        series = r.get("series", "")
        parent_id = r.get("parent_id", "")
        seed_id = r.get("seed_id", "")

        goto_count = int(r.get("goto_count", 0))
        switch_count = int(r.get("switch_count", 0))
        loop_count = int(r.get("loop_count", 0))
        bitwise_count = int(r.get("bitwise_op_count", 0))
        rec_count = int(r.get("recursive_call_count", 0))
        pointer_count = int(r.get("pointer_token_count", 0))
        ternary_count = int(r.get("ternary_count", 0))
        math_count = int(r.get("math_call_count", 0))
        has_nested = r.get("has_nested_loop", "no")

        if r.get("parse_status") != "ok":
            add_warning(r= r, warnings=warnings, warning_type="filename_parse_failed",
                        message="Filename does not match expected S/O naming pattern.")
            continue

        if series == "O":
            if not parent_id:
                add_warning(warnings, r, "missing_parent_tag", "O-series file has no parsed parent tag.")
            elif (seed_id, parent_id) not in by_seed_impl:
                add_warning(warnings, r, "parent_not_found",
                            f"O-series parent {parent_id} was not found under seed {seed_id}.")

        if any(k in text for k in ["goto", "jump", "jumptable", "jump_table"]):
            if goto_count == 0 and switch_count == 0:
                add_warning(warnings, r, "weak_goto_jump_feature",
                            "Variant name/logic suggests goto/jump, but no goto or switch was detected.")

        if any(k in text for k in ["flat", "flatten", "state_machine"]):
            if switch_count == 0 and goto_count == 0:
                add_warning(warnings, r, "weak_flattening_feature",
                            "Variant name/logic suggests control-flow flattening, but no switch/goto was detected.")

        if any(k in text for k in ["switch", "switchloop"]):
            if switch_count == 0:
                add_warning(warnings, r, "weak_switch_feature",
                            "Variant name/logic suggests switch, but no switch statement was detected.")

        if any(k in text for k in ["recursive", "recursion", "recur"]):
            if rec_count == 0:
                add_warning(warnings, r, "weak_recursion_feature",
                            "Variant name/logic suggests recursion, but no recursive call was detected.")

        if any(k in text for k in ["bitwise", "xor", "shift", "gray"]):
            if bitwise_count == 0:
                add_warning(warnings, r, "weak_bitwise_feature",
                            "Variant name/logic suggests bitwise operations, but no bitwise operator was detected.")

        if any(k in text for k in ["pointer", "ptr", "alias"]):
            if pointer_count == 0:
                add_warning(warnings, r, "weak_pointer_alias_feature",
                            "Variant name/logic suggests pointer/alias behavior, but no pointer/address token was detected.")

        if any(k in text for k in ["ternary"]):
            if ternary_count == 0:
                add_warning(warnings, r, "weak_ternary_feature",
                            "Variant name/logic suggests ternary transformation, but no ternary operator was detected.")

        if any(k in text for k in ["doubleloop", "double_loop", "nested"]):
            if has_nested != "yes":
                add_warning(warnings, r, "weak_double_loop_feature",
                            "Variant name/logic suggests double/nested loop, but no nested-loop pattern was detected.")

        if any(k in text for k in ["math", "formula", "log", "sqrt", "newton", "precision"]):
            # Some mathematical variants may use arithmetic only, so this is a weak warning.
            if math_count == 0 and bitwise_count == 0:
                add_warning(warnings, r, "weak_math_numeric_feature",
                            "Variant name/logic suggests math/numeric reformulation, but no math call or low-level operator was detected.")

        if any(k in text for k in ["dummy", "opaque", "redundant", "junk"]):
            if loop_count == 0 and ternary_count == 0 and switch_count == 0 and int(r.get("if_count", 0)) == 0:
                add_warning(warnings, r, "weak_obfuscation_feature",
                            "Variant name/logic suggests dummy/opaque/redundant transformation, but no obvious extra control feature was detected.")

    return warnings


# ============================================================
# CSV/JSON writers
# ============================================================

def write_csv(path: Path, rows: List[Dict[str, object]], fieldnames: List[str]) -> None:
    path.parent.mkdir(parents=True, exist_ok=True)

    with path.open("w", encoding="utf-8", newline="") as f:
        writer = csv.DictWriter(f, fieldnames=fieldnames)
        writer.writeheader()

        for row in rows:
            out = {}
            for k in fieldnames:
                out[k] = row.get(k, "")
            writer.writerow(out)


# ============================================================
# Main analysis
# ============================================================

def collect_variant_records() -> List[Dict[str, object]]:
    records: List[Dict[str, object]] = []

    for path in iter_c_files(SOURCE_RAW_DIR):
        parsed = parse_filename(path.name)
        code = read_text(path)

        seed_id = parsed["seed_id"] or ""
        seed_name = path.parent.name

        implementation_logic = extract_implementation_logic(code)
        core_function_name = extract_core_function_name(code, seed_name_hint="")

        features = extract_features(code, core_function_name)

        variant_family = classify_variant_family(
            series=parsed["series"] or "",
            variant_desc=parsed["variant_desc"] or "",
            implementation_logic=implementation_logic,
        )

        try:
            rel_path = str(path.relative_to(PROJECT_ROOT))
        except Exception:
            rel_path = str(path)

        record = {
            "seed_dir": seed_name,
            "file_name": path.name,
            "rel_path": rel_path,
            "impl_id": parsed["impl_id"] or "",
            "seed_id": seed_id,
            "series": parsed["series"] or "",
            "parent_id": parsed["parent_id"] or "",
            "variant_desc": parsed["variant_desc"] or "",
            "variant_family": variant_family,
            "parse_status": parsed["parse_status"] or "",
            "implementation_logic": implementation_logic,
            "core_function_name": core_function_name,
        }

        record.update(features)
        records.append(record)

    return records


def build_per_seed_counts(records: List[Dict[str, object]]) -> List[Dict[str, object]]:
    grouped = defaultdict(list)
    for r in records:
        grouped[r["seed_id"]].append(r)

    rows = []
    for seed_id, group in sorted(grouped.items()):
        s_count = sum(1 for r in group if r["series"] == "S")
        o_count = sum(1 for r in group if r["series"] == "O")
        parse_failed = sum(1 for r in group if r["parse_status"] != "ok")

        rows.append({
            "seed_id": seed_id,
            "seed_dir": group[0]["seed_dir"] if group else "",
            "num_files": len(group),
            "num_S": s_count,
            "num_O": o_count,
            "num_parse_failed": parse_failed,
            "expected_files": EXPECTED_IMPLS_PER_SEED,
            "complete_21_variants": "yes" if len(group) == EXPECTED_IMPLS_PER_SEED else "no",
        })

    return rows


def build_variant_type_counts(records: List[Dict[str, object]]) -> List[Dict[str, object]]:
    counter = Counter()
    seed_sets = defaultdict(set)

    for r in records:
        key = (r["series"], r["variant_family"])
        counter[key] += 1
        seed_sets[key].add(r["seed_id"])

    rows = []
    for (series, family), count in sorted(counter.items()):
        rows.append({
            "series": series,
            "variant_family": family,
            "num_instances": count,
            "num_applicable_seeds": len(seed_sets[(series, family)]),
        })

    return rows


def build_parent_coverage(records: List[Dict[str, object]]) -> List[Dict[str, object]]:
    counter = Counter()
    seed_sets = defaultdict(set)

    for r in records:
        if r["series"] != "O":
            continue
        key = r["parent_id"]
        counter[key] += 1
        seed_sets[key].add(r["seed_id"])

    rows = []
    for parent_id, count in sorted(counter.items()):
        rows.append({
            "parent_id": parent_id,
            "num_O_variants": count,
            "num_seeds": len(seed_sets[parent_id]),
        })

    return rows


def main() -> None:
    OUTPUT_DIR.mkdir(parents=True, exist_ok=True)

    if not SOURCE_RAW_DIR.exists():
        print("=" * 90)
        print("ERROR: SOURCE_RAW_DIR does not exist.")
        print(f"Expected path: {SOURCE_RAW_DIR}")
        print("=" * 90)
        return

    records = collect_variant_records()

    per_seed_rows = build_per_seed_counts(records)
    type_count_rows = build_variant_type_counts(records)
    parent_rows = build_parent_coverage(records)
    warnings = generate_warnings(records)

    total_files = len(records)
    total_s = sum(1 for r in records if r["series"] == "S")
    total_o = sum(1 for r in records if r["series"] == "O")
    parse_failed = sum(1 for r in records if r["parse_status"] != "ok")

    seeds = sorted(set(r["seed_id"] for r in records if r["seed_id"]))
    complete_seed_count = sum(1 for row in per_seed_rows if row["complete_21_variants"] == "yes")

    summary = {
        "task": "D12 S/O Variant Taxonomy",
        "input_directory": str(SOURCE_RAW_DIR),
        "output_directory": str(OUTPUT_DIR),
        "scope": "Natural Source_Raw",
        "reason": (
            "D12 focuses on implementation architecture taxonomy. Source_Raw preserves "
            "filenames, comments, implementation logic descriptions, parent tags, and full metadata."
        ),
        "expected_total_files": EXPECTED_TOTAL_FILES,
        "expected_seeds": EXPECTED_SEEDS,
        "expected_impls_per_seed": EXPECTED_IMPLS_PER_SEED,
        "num_files": total_files,
        "num_seeds": len(seeds),
        "num_complete_21_variant_seeds": complete_seed_count,
        "num_S_series": total_s,
        "num_O_series": total_o,
        "num_filename_parse_failed": parse_failed,
        "num_variant_families": len(set(r["variant_family"] for r in records)),
        "num_naming_consistency_warnings": len(warnings),
        "note": (
            "Naming consistency warnings are heuristic candidates for manual review, "
            "not automatic correctness failures."
        ),
    }

    SUMMARY_JSON.write_text(
        json.dumps(summary, indent=2, ensure_ascii=False),
        encoding="utf-8",
    )

    write_csv(
        VARIANT_RECORDS_CSV,
        records,
        [
            "seed_id",
            "seed_dir",
            "impl_id",
            "series",
            "parent_id",
            "variant_desc",
            "variant_family",
            "file_name",
            "rel_path",
            "parse_status",
            "implementation_logic",
            "core_function_name",
        ],
    )

    write_csv(
        PER_SEED_SO_COUNTS_CSV,
        per_seed_rows,
        [
            "seed_id",
            "seed_dir",
            "num_files",
            "num_S",
            "num_O",
            "num_parse_failed",
            "expected_files",
            "complete_21_variants",
        ],
    )

    write_csv(
        VARIANT_TYPE_COUNTS_CSV,
        type_count_rows,
        [
            "series",
            "variant_family",
            "num_instances",
            "num_applicable_seeds",
        ],
    )

    write_csv(
        PARENT_COVERAGE_CSV,
        parent_rows,
        [
            "parent_id",
            "num_O_variants",
            "num_seeds",
        ],
    )

    write_csv(
        IMPLEMENTATION_FEATURE_SUMMARY_CSV,
        records,
        [
            "seed_id",
            "impl_id",
            "series",
            "parent_id",
            "variant_desc",
            "variant_family",
            "rel_path",
            "goto_count",
            "switch_count",
            "case_count",
            "for_count",
            "while_count",
            "do_count",
            "loop_count",
            "if_count",
            "ternary_count",
            "bitwise_op_count",
            "pointer_token_count",
            "array_access_count",
            "math_call_count",
            "string_call_count",
            "recursive_call_count",
            "has_nested_loop",
            "loc_nonempty",
        ],
    )

    write_csv(
        NAMING_WARNINGS_CSV,
        warnings,
        [
            "seed_id",
            "impl_id",
            "series",
            "parent_id",
            "variant_desc",
            "variant_family",
            "file",
            "warning_type",
            "message",
        ],
    )

    print("=" * 90)
    print("D12 S/O Variant Taxonomy analysis finished.")
    print(f"Input directory:                 {SOURCE_RAW_DIR}")
    print(f"Files analyzed:                  {total_files}")
    print(f"Seeds observed:                  {len(seeds)}")
    print(f"Complete 21-variant seeds:       {complete_seed_count}/{EXPECTED_SEEDS}")
    print(f"S-series files:                  {total_s}")
    print(f"O-series files:                  {total_o}")
    print(f"Filename parse failures:         {parse_failed}")
    print(f"Variant families:                {summary['num_variant_families']}")
    print(f"Naming consistency warnings:     {len(warnings)}")
    print("-" * 90)
    print(f"Summary JSON:                    {SUMMARY_JSON}")
    print(f"Variant records CSV:             {VARIANT_RECORDS_CSV}")
    print(f"Per-seed S/O counts CSV:         {PER_SEED_SO_COUNTS_CSV}")
    print(f"Variant type counts CSV:         {VARIANT_TYPE_COUNTS_CSV}")
    print(f"Parent coverage CSV:             {PARENT_COVERAGE_CSV}")
    print(f"Feature summary CSV:             {IMPLEMENTATION_FEATURE_SUMMARY_CSV}")
    print(f"Naming warnings CSV:             {NAMING_WARNINGS_CSV}")
    print("=" * 90)


if __name__ == "__main__":
    main()