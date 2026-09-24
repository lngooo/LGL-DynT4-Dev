#!/usr/bin/env python3
# -*- coding: utf-8 -*-

"""
D9 Duplicate / Template-Bias Audit for LGL-DynT4
================================================

Scope:
    Data/Natural/Source_Clean

Rationale:
    Natural Source_Clean removes boilerplate such as headers, comments,
    and main functions, so the audit focuses on the core computational
    logic rather than shared I/O templates.

Main checks:
    1. Exact duplicate pairs:
       Whether two cleaned source files are textually identical.

    2. Normalized duplicate pairs:
       Whether two cleaned source files become identical after removing
       comments/whitespace and normalizing identifiers, literals, and strings.

    3. Template-bias indicators:
       Within-seed normalized token similarity statistics and top-ranked
       high-similarity implementation pairs for inspection.

Expected project placement:
    Scripts_ext/analysis/duplicate_template/analyze_duplicate_template_bias.py

Expected input:
    Data/Natural/Source_Clean

Output:
    script_OUTPUTS/duplicate_template/
"""

import csv
import hashlib
import json
import math
import re
from collections import Counter, defaultdict
from itertools import combinations
from pathlib import Path
from typing import Dict, Iterable, List, Optional, Tuple


# ============================================================
# Path configuration
# ============================================================

# Expected script location:
#   Scripts_ext/analysis/duplicate_template/analyze_duplicate_template_bias.py
PROJECT_ROOT = Path(__file__).resolve().parents[3]

# D9 only checks the origin of core logic:
# Natural Source_Clean.
SOURCE_CLEAN_DIR = PROJECT_ROOT / "Data" / "Natural" / "Source_Clean"

OUTPUT_DIR = PROJECT_ROOT / "script_OUTPUTS" / "duplicate_template"

SUMMARY_JSON = OUTPUT_DIR / "duplicate_template_summary.json"
OVERALL_CSV = OUTPUT_DIR / "duplicate_template_overall.csv"
PER_SEED_SUMMARY_CSV = OUTPUT_DIR / "per_seed_similarity_summary.csv"
TOP_SIMILAR_PAIRS_CSV = OUTPUT_DIR / "top_similar_pairs.csv"
EXACT_DUPLICATE_PAIRS_CSV = OUTPUT_DIR / "exact_duplicate_pairs.csv"
NORMALIZED_DUPLICATE_PAIRS_CSV = OUTPUT_DIR / "normalized_duplicate_pairs.csv"

# Pair ranking and high-similarity threshold.
TOP_K_PAIRS = 100
HIGH_SIMILARITY_THRESHOLD = 0.95

# For debugging only. Empty set means all seeds.
# Example: ONLY_SEEDS = {"F01", "F13"}
ONLY_SEEDS = set()

# Decoding fallback.
ENCODINGS = ["utf-8", "gbk", "latin-1"]


# ============================================================
# C normalization settings
# ============================================================

C_KEYWORDS = {
    "auto", "break", "case", "char", "const", "continue", "default", "do",
    "double", "else", "enum", "extern", "float", "for", "goto", "if",
    "inline", "int", "long", "register", "restrict", "return", "short",
    "signed", "sizeof", "static", "struct", "switch", "typedef", "union",
    "unsigned", "void", "volatile", "while", "_Bool", "_Complex", "_Imaginary",
}

COMMON_STD_NAMES = {
    "printf", "scanf", "malloc", "calloc", "realloc", "free",
    "atoi", "atof", "strtol", "strtoul", "strtoll", "strtoull",
    "strlen", "strcmp", "strncmp", "strcpy", "strncpy", "strcat",
    "memset", "memcpy", "memcmp", "sqrt", "sqrtf", "sqrtl",
    "log", "log2", "log10", "exp", "floor", "ceil", "round",
    "llround", "llroundl", "fabs", "fabsl", "pow", "abs", "labs",
    "llabs", "qsort", "FILE", "NULL", "stdin", "stdout", "stderr",
}

TOKEN_RE = re.compile(
    r"""
    0[xX][0-9a-fA-F]+ |                    # hexadecimal integer
    \d+\.\d+(?:[eE][+-]?\d+)? |            # floating number
    \d+(?:[eE][+-]?\d+)? |                 # integer/scientific number
    "(?:\\.|[^"\\])*" |                    # string literal
    '(?:\\.|[^'\\])*' |                    # char literal
    [A-Za-z_][A-Za-z0-9_]* |               # identifier
    ==|!=|<=|>=|&&|\|\||<<|>>|\+\+|--|->|  # multi-character operators
    [-+*/%&|^~!=<>?:;,.(){}\[\]]           # single-character tokens
    """,
    re.VERBOSE,
)


# ============================================================
# Utility functions
# ============================================================

def read_text(path: Path) -> str:
    last_error = None
    for enc in ENCODINGS:
        try:
            return path.read_text(encoding=enc)
        except Exception as exc:
            last_error = exc
    raise RuntimeError(f"Failed to read {path}: {last_error}")


def sha256_text(text: str) -> str:
    return hashlib.sha256(text.encode("utf-8", errors="ignore")).hexdigest()


def extract_seed_id(text: str) -> Optional[str]:
    m = re.search(r"(F\d{2})", text)
    return m.group(1) if m else None


def extract_impl_id(text: str) -> Optional[str]:
    m = re.search(r"(A\d{2})", text)
    return m.group(1) if m else None


def iter_c_files(root: Path) -> Iterable[Path]:
    if not root.exists():
        return []
    return sorted(p for p in root.rglob("*.c") if p.is_file())


def remove_comments(code: str) -> str:
    code = re.sub(r"/\*.*?\*/", " ", code, flags=re.DOTALL)
    code = re.sub(r"//.*", " ", code)
    return code


def normalize_code(code: str) -> Tuple[str, List[str]]:
    """
    Normalize source code for duplicate/template-bias analysis.

    Operations:
        - remove comments
        - remove preprocessor lines
        - replace identifiers by ID, except C keywords and common std names
        - replace numeric literals by NUM
        - replace string literals by STR
        - replace char literals by CHAR
        - preserve operators and control keywords
    """
    code = remove_comments(code)

    kept_lines = []
    for line in code.splitlines():
        stripped = line.strip()
        if stripped.startswith("#"):
            continue
        kept_lines.append(line)
    code = "\n".join(kept_lines)

    tokens = TOKEN_RE.findall(code)
    norm_tokens: List[str] = []

    for tok in tokens:
        if not tok:
            continue

        if tok.startswith('"') and tok.endswith('"'):
            norm_tokens.append("STR")
        elif tok.startswith("'") and tok.endswith("'"):
            norm_tokens.append("CHAR")
        elif re.fullmatch(r"0[xX][0-9a-fA-F]+", tok):
            norm_tokens.append("NUM")
        elif re.fullmatch(r"\d+\.\d+(?:[eE][+-]?\d+)?", tok):
            norm_tokens.append("NUM")
        elif re.fullmatch(r"\d+(?:[eE][+-]?\d+)?", tok):
            norm_tokens.append("NUM")
        elif re.fullmatch(r"[A-Za-z_][A-Za-z0-9_]*", tok):
            if tok in C_KEYWORDS or tok in COMMON_STD_NAMES:
                norm_tokens.append(tok)
            else:
                norm_tokens.append("ID")
        else:
            norm_tokens.append(tok)

    return " ".join(norm_tokens), norm_tokens


def counter_cosine(a: Counter, b: Counter) -> float:
    if not a or not b:
        return 0.0

    common = set(a.keys()) & set(b.keys())
    dot = sum(a[k] * b[k] for k in common)
    norm_a = math.sqrt(sum(v * v for v in a.values()))
    norm_b = math.sqrt(sum(v * v for v in b.values()))

    if norm_a == 0.0 or norm_b == 0.0:
        return 0.0

    return dot / (norm_a * norm_b)


def token_jaccard(a_tokens: List[str], b_tokens: List[str]) -> float:
    a = set(a_tokens)
    b = set(b_tokens)

    if not a and not b:
        return 1.0
    if not a or not b:
        return 0.0

    return len(a & b) / len(a | b)


def quantile(values: List[float], q: float) -> Optional[float]:
    if not values:
        return None

    xs = sorted(values)
    pos = (len(xs) - 1) * q
    lo = int(math.floor(pos))
    hi = int(math.ceil(pos))

    if lo == hi:
        return xs[lo]

    return xs[lo] * (hi - pos) + xs[hi] * (pos - lo)


def write_csv(path: Path, rows: List[Dict[str, object]], fieldnames: List[str]) -> None:
    path.parent.mkdir(parents=True, exist_ok=True)

    with path.open("w", encoding="utf-8", newline="") as f:
        writer = csv.DictWriter(f, fieldnames=fieldnames)
        writer.writeheader()

        for row in rows:
            out = {}
            for k in fieldnames:
                v = row.get(k, "")
                if isinstance(v, float):
                    out[k] = f"{v:.6f}"
                elif v is None:
                    out[k] = ""
                else:
                    out[k] = v
            writer.writerow(out)


# ============================================================
# Record collection
# ============================================================

def collect_records() -> List[Dict[str, object]]:
    records: List[Dict[str, object]] = []

    for path in iter_c_files(SOURCE_CLEAN_DIR):
        seed_id = extract_seed_id(path.name) or extract_seed_id(str(path.parent))
        impl_id = extract_impl_id(path.name) or extract_impl_id(str(path.parent))

        if not seed_id or not impl_id:
            continue

        if ONLY_SEEDS and seed_id not in ONLY_SEEDS:
            continue

        raw_text = read_text(path)
        normalized_text, norm_tokens = normalize_code(raw_text)

        rel_path = str(path.relative_to(PROJECT_ROOT))

        records.append({
            "seed_id": seed_id,
            "impl_id": impl_id,
            "file_name": path.name,
            "rel_path": rel_path,
            "raw_text": raw_text,
            "raw_hash": sha256_text(raw_text),
            "normalized_text": normalized_text,
            "normalized_hash": sha256_text(normalized_text),
            "raw_loc": sum(1 for line in raw_text.splitlines() if line.strip()),
            "norm_token_count": len(norm_tokens),
            "norm_unique_token_count": len(set(norm_tokens)),
            "norm_tokens": norm_tokens,
            "norm_counter": Counter(norm_tokens),
        })

    return records


# ============================================================
# Duplicate detection
# ============================================================

def find_duplicate_pairs(records: List[Dict[str, object]], hash_key: str) -> List[Dict[str, object]]:
    groups: Dict[str, List[Dict[str, object]]] = defaultdict(list)

    for rec in records:
        groups[str(rec[hash_key])].append(rec)

    rows: List[Dict[str, object]] = []

    for hash_value, group in groups.items():
        if len(group) <= 1:
            continue

        for a, b in combinations(group, 2):
            rows.append({
                "seed_a": a["seed_id"],
                "impl_a": a["impl_id"],
                "file_a": a["rel_path"],
                "seed_b": b["seed_id"],
                "impl_b": b["impl_id"],
                "file_b": b["rel_path"],
                "same_seed": "yes" if a["seed_id"] == b["seed_id"] else "no",
                "hash": hash_value,
            })

    return rows


# ============================================================
# Similarity analysis
# ============================================================

def analyze_within_seed_similarity(records: List[Dict[str, object]]) -> Tuple[List[Dict[str, object]], List[Dict[str, object]], Dict[str, object]]:
    by_seed: Dict[str, List[Dict[str, object]]] = defaultdict(list)

    for rec in records:
        by_seed[str(rec["seed_id"])].append(rec)

    per_seed_rows: List[Dict[str, object]] = []
    all_pair_rows: List[Dict[str, object]] = []

    all_cos_values: List[float] = []
    all_jac_values: List[float] = []
    high_similarity_count = 0
    total_pair_count = 0

    for seed_id, group in sorted(by_seed.items()):
        group = sorted(group, key=lambda x: str(x["impl_id"]))

        if len(group) < 2:
            continue

        seed_cos_values: List[float] = []
        seed_jac_values: List[float] = []
        seed_high_count = 0
        seed_pair_count = 0

        for a, b in combinations(group, 2):
            cos = counter_cosine(a["norm_counter"], b["norm_counter"])
            jac = token_jaccard(a["norm_tokens"], b["norm_tokens"])

            seed_pair_count += 1
            total_pair_count += 1

            seed_cos_values.append(cos)
            seed_jac_values.append(jac)
            all_cos_values.append(cos)
            all_jac_values.append(jac)

            if cos >= HIGH_SIMILARITY_THRESHOLD:
                seed_high_count += 1
                high_similarity_count += 1

            all_pair_rows.append({
                "seed_id": seed_id,
                "impl_a": a["impl_id"],
                "impl_b": b["impl_id"],
                "file_a": a["rel_path"],
                "file_b": b["rel_path"],
                "cosine_similarity": cos,
                "jaccard_similarity": jac,
                "loc_a": a["raw_loc"],
                "loc_b": b["raw_loc"],
                "token_count_a": a["norm_token_count"],
                "token_count_b": b["norm_token_count"],
            })

        per_seed_rows.append({
            "seed_id": seed_id,
            "num_files": len(group),
            "num_pairs": seed_pair_count,
            "cos_min": min(seed_cos_values) if seed_cos_values else None,
            "cos_q25": quantile(seed_cos_values, 0.25),
            "cos_median": quantile(seed_cos_values, 0.50),
            "cos_mean": sum(seed_cos_values) / len(seed_cos_values) if seed_cos_values else None,
            "cos_q75": quantile(seed_cos_values, 0.75),
            "cos_max": max(seed_cos_values) if seed_cos_values else None,
            "jaccard_mean": sum(seed_jac_values) / len(seed_jac_values) if seed_jac_values else None,
            "jaccard_max": max(seed_jac_values) if seed_jac_values else None,
            "high_similarity_pairs": seed_high_count,
            "high_similarity_ratio": seed_high_count / seed_pair_count if seed_pair_count else None,
        })

    top_pair_rows = sorted(
        all_pair_rows,
        key=lambda row: float(row["cosine_similarity"]),
        reverse=True,
    )[:TOP_K_PAIRS]

    for idx, row in enumerate(top_pair_rows, start=1):
        row["rank"] = idx

    overall = {
        "num_within_seed_pairs": total_pair_count,
        "cos_min": min(all_cos_values) if all_cos_values else None,
        "cos_q25": quantile(all_cos_values, 0.25),
        "cos_median": quantile(all_cos_values, 0.50),
        "cos_mean": sum(all_cos_values) / len(all_cos_values) if all_cos_values else None,
        "cos_q75": quantile(all_cos_values, 0.75),
        "cos_max": max(all_cos_values) if all_cos_values else None,
        "jaccard_mean": sum(all_jac_values) / len(all_jac_values) if all_jac_values else None,
        "jaccard_max": max(all_jac_values) if all_jac_values else None,
        "high_similarity_threshold": HIGH_SIMILARITY_THRESHOLD,
        "high_similarity_pairs": high_similarity_count,
        "high_similarity_ratio": high_similarity_count / total_pair_count if total_pair_count else None,
    }

    return per_seed_rows, top_pair_rows, overall


# ============================================================
# Main
# ============================================================

def main() -> None:
    OUTPUT_DIR.mkdir(parents=True, exist_ok=True)

    if not SOURCE_CLEAN_DIR.exists():
        print("=" * 90)
        print("ERROR: SOURCE_CLEAN_DIR does not exist.")
        print(f"Expected path: {SOURCE_CLEAN_DIR}")
        print("Please check PROJECT_ROOT or SOURCE_CLEAN_DIR.")
        print("=" * 90)
        return

    records = collect_records()

    if not records:
        print("=" * 90)
        print("ERROR: No .c files were collected.")
        print(f"Input directory: {SOURCE_CLEAN_DIR}")
        print("=" * 90)
        return

    exact_duplicate_rows = find_duplicate_pairs(records, "raw_hash")
    normalized_duplicate_rows = find_duplicate_pairs(records, "normalized_hash")
    per_seed_rows, top_pair_rows, overall = analyze_within_seed_similarity(records)

    seed_ids = sorted(set(str(r["seed_id"]) for r in records))
    impl_ids = sorted(set(str(r["impl_id"]) for r in records))

    summary = {
        "task": "D9 Duplicate / Template-Bias Audit",
        "input_directory": str(SOURCE_CLEAN_DIR),
        "output_directory": str(OUTPUT_DIR),
        "scope": "Natural Source_Clean only",
        "reason": (
            "Source_Clean removes boilerplate such as headers and main functions, "
            "so this audit focuses on the core computational logic."
        ),
        "num_files_checked": len(records),
        "num_seeds": len(seed_ids),
        "num_impl_ids_observed": len(impl_ids),
        "expected_files": 1050,
        "expected_seeds": 50,
        "expected_impls_per_seed": 21,
        "exact_duplicate_pairs": len(exact_duplicate_rows),
        "normalized_duplicate_pairs": len(normalized_duplicate_rows),
        "similarity": overall,
    }

    # Summary JSON
    SUMMARY_JSON.write_text(
        json.dumps(summary, indent=2, ensure_ascii=False),
        encoding="utf-8",
    )

    # One-row paper-friendly overall CSV
    overall_row = {
        "input_view": "Natural Source_Clean",
        "num_files_checked": len(records),
        "num_seeds": len(seed_ids),
        "exact_duplicate_pairs": len(exact_duplicate_rows),
        "normalized_duplicate_pairs": len(normalized_duplicate_rows),
        "num_within_seed_pairs": overall["num_within_seed_pairs"],
        "cos_mean": overall["cos_mean"],
        "cos_median": overall["cos_median"],
        "cos_q75": overall["cos_q75"],
        "cos_max": overall["cos_max"],
        "high_similarity_threshold": overall["high_similarity_threshold"],
        "high_similarity_pairs": overall["high_similarity_pairs"],
        "high_similarity_ratio": overall["high_similarity_ratio"],
    }

    write_csv(
        OVERALL_CSV,
        [overall_row],
        [
            "input_view",
            "num_files_checked",
            "num_seeds",
            "exact_duplicate_pairs",
            "normalized_duplicate_pairs",
            "num_within_seed_pairs",
            "cos_mean",
            "cos_median",
            "cos_q75",
            "cos_max",
            "high_similarity_threshold",
            "high_similarity_pairs",
            "high_similarity_ratio",
        ],
    )

    write_csv(
        PER_SEED_SUMMARY_CSV,
        per_seed_rows,
        [
            "seed_id",
            "num_files",
            "num_pairs",
            "cos_min",
            "cos_q25",
            "cos_median",
            "cos_mean",
            "cos_q75",
            "cos_max",
            "jaccard_mean",
            "jaccard_max",
            "high_similarity_pairs",
            "high_similarity_ratio",
        ],
    )

    write_csv(
        TOP_SIMILAR_PAIRS_CSV,
        top_pair_rows,
        [
            "rank",
            "seed_id",
            "impl_a",
            "impl_b",
            "file_a",
            "file_b",
            "cosine_similarity",
            "jaccard_similarity",
            "loc_a",
            "loc_b",
            "token_count_a",
            "token_count_b",
        ],
    )

    write_csv(
        EXACT_DUPLICATE_PAIRS_CSV,
        exact_duplicate_rows,
        [
            "seed_a",
            "impl_a",
            "file_a",
            "seed_b",
            "impl_b",
            "file_b",
            "same_seed",
            "hash",
        ],
    )

    write_csv(
        NORMALIZED_DUPLICATE_PAIRS_CSV,
        normalized_duplicate_rows,
        [
            "seed_a",
            "impl_a",
            "file_a",
            "seed_b",
            "impl_b",
            "file_b",
            "same_seed",
            "hash",
        ],
    )

    print("=" * 90)
    print("D9 Duplicate / Template-Bias Audit finished.")
    print(f"Input view:                    Natural Source_Clean")
    print(f"Input directory:               {SOURCE_CLEAN_DIR}")
    print(f"Files checked:                 {len(records)}")
    print(f"Seeds observed:                {len(seed_ids)}")
    print(f"Exact duplicate pairs:         {len(exact_duplicate_rows)}")
    print(f"Normalized duplicate pairs:    {len(normalized_duplicate_rows)}")
    print(f"Within-seed pairs:             {overall['num_within_seed_pairs']}")
    print(f"Mean normalized-token cosine:  {overall['cos_mean']:.6f}")
    print(f"Median normalized-token cosine:{overall['cos_median']:.6f}")
    print(f"Max normalized-token cosine:   {overall['cos_max']:.6f}")
    print(f"High-sim threshold:            {HIGH_SIMILARITY_THRESHOLD}")
    print(f"High-sim pairs:                {overall['high_similarity_pairs']}")
    print("-" * 90)
    print(f"Summary JSON:                  {SUMMARY_JSON}")
    print(f"Paper-friendly overall CSV:    {OVERALL_CSV}")
    print(f"Per-seed summary CSV:          {PER_SEED_SUMMARY_CSV}")
    print(f"Top similar pairs CSV:         {TOP_SIMILAR_PAIRS_CSV}")
    print(f"Exact duplicate CSV:           {EXACT_DUPLICATE_PAIRS_CSV}")
    print(f"Normalized duplicate CSV:      {NORMALIZED_DUPLICATE_PAIRS_CSV}")
    print("=" * 90)


if __name__ == "__main__":
    main()
