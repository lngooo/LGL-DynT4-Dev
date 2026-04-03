#!/usr/bin/env python3
# -*- coding: utf-8 -*-

"""
Structural diversity analysis for LGL-DynT4.

What it does
------------
For each configured code root (e.g., Natural/Source_Clean or Obf/Source_Clean),
the script:
1. Recursively reads all C files organized by F/A folders.
2. Extracts lightweight static structural features from each function.
3. Builds positive pairs within the same F and sampled negative pairs across
   different F values.
4. Computes pair-level structural similarity metrics.
5. Writes prefixed CSV files and plots for direct paper use.

Design goal
-----------
This script is intentionally model-free. It measures whether positive clone
pairs remain structurally diverse even when they are semantically equivalent.

Outputs (per job)
-----------------
- <job>_sample_index.csv
- <job>_sample_features.csv
- <job>_generated_pairs.csv
- <job>_pair_metrics.csv
- <job>_summary_by_label.csv
- <job>_metric_separability.csv
- <job>_positive_diversity_by_F.csv
- <job>_run_info.json
- plots/<job>_*.png

Only short identifiers are stored in main CSVs. Long paths remain in run_info.
"""

from __future__ import annotations

import json
import math
import random
import re
import statistics
from collections import Counter, defaultdict
from dataclasses import dataclass
from pathlib import Path
from typing import Dict, Iterable, List, Optional, Sequence, Tuple

import matplotlib.pyplot as plt
import numpy as np
import pandas as pd


# ============================================================
# CONFIG: edit paths here and run directly
# ============================================================
CONFIG = {
    "jobs": [
        {
            "name": "natural",
            "enabled": True,
            "code_root": r"../Data/Natural/Source_Clean",
        },
        {
            "name": "obf",
            "enabled": True,
            "code_root": r"../Data/Obfuscated/Source_Clean",
        },
    ],
    "output_root": r"../script_OUTPUTS//structural_diversity",
    "analysis_view": "body_only",          # one of: full_function, body_only
    "negative_ratio": 1.0,                  # negatives sampled relative to positives
    "random_seed": 42,
    "max_files_per_job": None,              # e.g., 200 for debugging
    "max_pairs_per_job": None,              # e.g., 5000 for debugging
    "hist_bins": 50,
    "save_plots": True,
}


C_KEYWORDS = {
    "auto", "break", "case", "char", "const", "continue", "default", "do",
    "double", "else", "enum", "extern", "float", "for", "goto", "if", "inline",
    "int", "long", "register", "restrict", "return", "short", "signed",
    "sizeof", "static", "struct", "switch", "typedef", "union", "unsigned",
    "void", "volatile", "while", "_Bool", "_Complex", "_Imaginary"
}
CONTROL_KEYWORDS = {"if", "else", "switch", "case", "for", "while", "do", "break", "continue", "return"}
CALL_EXCLUDE = C_KEYWORDS | {"main"}

COMMENT_RE = re.compile(r"//.*?$|/\*.*?\*/", re.DOTALL | re.MULTILINE)
STRING_RE = re.compile(r'"([^"\\]|\\.)*"')
CHAR_RE = re.compile(r"'([^'\\]|\\.)*'")
NUMBER_RE = re.compile(r"\b(?:0x[0-9A-Fa-f]+|\d+(?:\.\d+)?)\b")
IDENT_RE = re.compile(r"\b[_A-Za-z][_A-Za-z0-9]*\b")
CALL_RE = re.compile(r"\b([_A-Za-z][_A-Za-z0-9]*)\s*\(")

TOKEN_RE = re.compile(
    r"\bif\b|\belse\b|\bswitch\b|\bcase\b|\bfor\b|\bwhile\b|\bdo\b|\bbreak\b|\bcontinue\b|\breturn\b|"
    r"\{|\}|\(|\)|;|\?|&&|\|\|"
)

A_FILE_RE = re.compile(r"^(A\d+)_?(F\d+)?_?(.*)\.c$", re.IGNORECASE)
F_DIR_RE = re.compile(r"^(F\d+)_?(.*)$", re.IGNORECASE)


@dataclass
class Sample:
    job_name: str
    version: str
    modality: str
    f_id: str
    a_id: str
    file_name: str
    path: Path
    code: str
    text_for_analysis: str
    features: Dict[str, float]


# ============================================================
# Basic utilities
# ============================================================
def ensure_dir(path: Path) -> None:
    path.mkdir(parents=True, exist_ok=True)


def normalize_version(name: str) -> str:
    low = name.strip().lower()
    if low == "natural":
        return "Natural"
    if low == "obf":
        return "Obf"
    return name


def infer_version_and_modality(code_root: Path) -> Tuple[str, str]:
    parts = [p.lower() for p in code_root.parts]
    version = "Unknown"
    modality = code_root.name
    for part in parts:
        if part == "natural":
            version = "Natural"
        elif part == "obf":
            version = "Obf"
    return version, modality


def strip_comments_literals_numbers(code: str) -> str:
    code = COMMENT_RE.sub(" ", code)
    code = STRING_RE.sub(" STR_LITERAL ", code)
    code = CHAR_RE.sub(" CHAR_LITERAL ", code)
    code = NUMBER_RE.sub(" NUM_LITERAL ", code)
    return code


def count_nonempty_lines(text: str) -> int:
    return sum(1 for line in text.splitlines() if line.strip())


def safe_div(a: float, b: float, default: float = 0.0) -> float:
    return a / b if b else default


def distribution_overlap(x: np.ndarray, y: np.ndarray, bins: int = 50) -> float:
    if len(x) == 0 or len(y) == 0:
        return float("nan")
    values = np.concatenate([x, y])
    lo, hi = float(np.min(values)), float(np.max(values))
    if math.isclose(lo, hi):
        return 1.0
    hist_x, edges = np.histogram(x, bins=bins, range=(lo, hi), density=True)
    hist_y, _ = np.histogram(y, bins=bins, range=(lo, hi), density=True)
    widths = np.diff(edges)
    return float(np.sum(np.minimum(hist_x, hist_y) * widths))


def cliffs_delta(x: np.ndarray, y: np.ndarray) -> float:
    if len(x) == 0 or len(y) == 0:
        return float("nan")
    gt = 0
    lt = 0
    for xi in x:
        gt += int(np.sum(xi > y))
        lt += int(np.sum(xi < y))
    return (gt - lt) / (len(x) * len(y))


def roc_auc_binary(y_true: Sequence[int], scores: Sequence[float]) -> float:
    """AUC via rank-sum; no sklearn dependency."""
    pairs = [(float(s), int(y)) for s, y in zip(scores, y_true) if not (pd.isna(s) or pd.isna(y))]
    if not pairs:
        return float("nan")
    ys = [y for _, y in pairs]
    pos = sum(ys)
    neg = len(ys) - pos
    if pos == 0 or neg == 0:
        return float("nan")

    # average ranks for ties
    sorted_pairs = sorted(enumerate(pairs), key=lambda t: t[1][0])
    ranks = [0.0] * len(sorted_pairs)
    i = 0
    while i < len(sorted_pairs):
        j = i
        score_i = sorted_pairs[i][1][0]
        while j < len(sorted_pairs) and sorted_pairs[j][1][0] == score_i:
            j += 1
        avg_rank = (i + 1 + j) / 2.0
        for k in range(i, j):
            ranks[k] = avg_rank
        i = j

    sum_pos_ranks = 0.0
    for rank, (_, (_, y)) in zip(ranks, sorted_pairs):
        if y == 1:
            sum_pos_ranks += rank
    auc = (sum_pos_ranks - pos * (pos + 1) / 2.0) / (pos * neg)
    return float(auc)


# ============================================================
# Code extraction
# ============================================================
def extract_function_body(code: str) -> str:
    """Return text inside outermost function braces. Fallback: original code."""
    first = code.find("{")
    if first == -1:
        return code
    depth = 0
    start = None
    for idx in range(first, len(code)):
        ch = code[idx]
        if ch == "{":
            depth += 1
            if start is None:
                start = idx + 1
        elif ch == "}":
            depth -= 1
            if depth == 0 and start is not None:
                return code[start:idx]
    return code


def load_code_for_view(path: Path, analysis_view: str) -> Tuple[str, str]:
    raw = path.read_text(encoding="utf-8", errors="ignore")
    raw = COMMENT_RE.sub(" ", raw)
    if analysis_view == "body_only":
        return raw, extract_function_body(raw)
    return raw, raw


# ============================================================
# Feature extraction
# ============================================================
def token_stream_for_structure(text: str) -> List[str]:
    return TOKEN_RE.findall(text)


def max_brace_depth(text: str) -> int:
    depth = 0
    max_depth = 0
    for ch in text:
        if ch == "{":
            depth += 1
            max_depth = max(max_depth, depth)
        elif ch == "}":
            depth = max(0, depth - 1)
    return max_depth


def max_control_nesting(text: str) -> int:
    """Approximate control nesting based on control keyword followed by brace blocks."""
    tokens = token_stream_for_structure(text)
    pending_controls = 0
    current_depth = 0
    max_depth = 0
    stack: List[str] = []

    for tok in tokens:
        if tok in {"if", "else", "switch", "for", "while", "do"}:
            pending_controls += 1
        elif tok == "{":
            if pending_controls > 0:
                current_depth += 1
                max_depth = max(max_depth, current_depth)
                stack.append("CONTROL")
                pending_controls -= 1
            else:
                stack.append("BLOCK")
        elif tok == "}":
            if stack:
                marker = stack.pop()
                if marker == "CONTROL":
                    current_depth = max(0, current_depth - 1)
        elif tok == ";":
            pending_controls = 0
    return max_depth


def statement_histogram(text: str) -> Dict[str, float]:
    text = strip_comments_literals_numbers(text)
    counts = {
        "stmt_if": len(re.findall(r"\bif\b", text)),
        "stmt_switch": len(re.findall(r"\bswitch\b", text)),
        "stmt_case": len(re.findall(r"\bcase\b", text)),
        "stmt_for": len(re.findall(r"\bfor\b", text)),
        "stmt_while": len(re.findall(r"\bwhile\b", text)),
        "stmt_do": len(re.findall(r"\bdo\b", text)),
        "stmt_return": len(re.findall(r"\breturn\b", text)),
        "stmt_break": len(re.findall(r"\bbreak\b", text)),
        "stmt_continue": len(re.findall(r"\bcontinue\b", text)),
        "stmt_decl": len(re.findall(r"\b(?:int|long|short|double|float|char|void|unsigned|signed)\b", text)),
        "stmt_assign": len(re.findall(r"(?<![=!<>])=(?!=)", text)),
        "stmt_call": 0,
    }
    calls = []
    for m in CALL_RE.finditer(text):
        name = m.group(1)
        if name not in CALL_EXCLUDE:
            calls.append(name)
    counts["stmt_call"] = len(calls)
    return counts


def operator_counts(text: str) -> Dict[str, int]:
    return {
        "logical_and": text.count("&&"),
        "logical_or": text.count("||"),
        "ternary": text.count("?"),
        "cmp_ops": len(re.findall(r"==|!=|<=|>=|(?<!<)<(?!<)|(?<!>)>(?!>)", text)),
        "arith_ops": len(re.findall(r"\+\+|--|\+=|-=|\*=|/=|%=|(?<!\+)\+(?!\+)|(?<!-)\-(?!-)|\*|/|%", text)),
    }


def extract_structural_features(text: str) -> Dict[str, float]:
    cleaned = strip_comments_literals_numbers(text)
    hist = statement_histogram(cleaned)
    ops = operator_counts(cleaned)
    identifiers = [m.group(0) for m in IDENT_RE.finditer(cleaned) if m.group(0) not in C_KEYWORDS]

    nonempty_loc = count_nonempty_lines(text)
    token_count = len(re.findall(r"\b[_A-Za-z][_A-Za-z0-9]*\b|==|!=|<=|>=|\+\+|--|\+=|-=|\*=|/=|%=|&&|\|\||[{}();,=<>+\-*/%?:]", cleaned))
    statement_count = text.count(";")
    loop_count = hist["stmt_for"] + hist["stmt_while"] + hist["stmt_do"]
    branch_count = hist["stmt_if"] + hist["stmt_switch"] + hist["stmt_case"]
    jump_count = hist["stmt_break"] + hist["stmt_continue"] + hist["stmt_return"]
    cyclomatic = 1 + hist["stmt_if"] + hist["stmt_for"] + hist["stmt_while"] + hist["stmt_case"] + ops["logical_and"] + ops["logical_or"] + ops["ternary"]
    control_depth = max_control_nesting(text)
    brace_depth = max_brace_depth(text)
    unique_identifiers = len(set(identifiers))

    features = {
        "loc": float(nonempty_loc),
        "token_count": float(token_count),
        "statement_count": float(statement_count),
        "if_count": float(hist["stmt_if"]),
        "switch_count": float(hist["stmt_switch"]),
        "case_count": float(hist["stmt_case"]),
        "for_count": float(hist["stmt_for"]),
        "while_count": float(hist["stmt_while"]),
        "do_count": float(hist["stmt_do"]),
        "loop_count": float(loop_count),
        "branch_count": float(branch_count),
        "return_count": float(hist["stmt_return"]),
        "break_count": float(hist["stmt_break"]),
        "continue_count": float(hist["stmt_continue"]),
        "call_count": float(hist["stmt_call"]),
        "decl_count": float(hist["stmt_decl"]),
        "assign_count": float(hist["stmt_assign"]),
        "cmp_ops": float(ops["cmp_ops"]),
        "arith_ops": float(ops["arith_ops"]),
        "cyclomatic": float(cyclomatic),
        "max_control_depth": float(control_depth),
        "max_brace_depth": float(brace_depth),
        "unique_identifiers": float(unique_identifiers),
    }

    total_stmt = max(1.0, float(statement_count))
    # Normalized statement profile for pair comparison
    profile_keys = [
        "stmt_if", "stmt_switch", "stmt_case", "stmt_for", "stmt_while", "stmt_do",
        "stmt_return", "stmt_break", "stmt_continue", "stmt_decl", "stmt_assign", "stmt_call"
    ]
    for key in profile_keys:
        features[f"profile_{key}"] = hist[key] / total_stmt

    features["present_if"] = 1.0 if hist["stmt_if"] > 0 else 0.0
    features["present_switch"] = 1.0 if hist["stmt_switch"] > 0 else 0.0
    features["present_for"] = 1.0 if hist["stmt_for"] > 0 else 0.0
    features["present_while"] = 1.0 if hist["stmt_while"] > 0 else 0.0
    features["present_do"] = 1.0 if hist["stmt_do"] > 0 else 0.0
    features["present_break"] = 1.0 if hist["stmt_break"] > 0 else 0.0
    features["present_continue"] = 1.0 if hist["stmt_continue"] > 0 else 0.0
    features["present_return"] = 1.0 if hist["stmt_return"] > 0 else 0.0
    return features


FEATURE_VECTOR_KEYS = [
    "loc", "token_count", "statement_count", "if_count", "switch_count", "case_count",
    "for_count", "while_count", "do_count", "loop_count", "branch_count", "return_count",
    "break_count", "continue_count", "call_count", "decl_count", "assign_count",
    "cmp_ops", "arith_ops", "cyclomatic", "max_control_depth", "max_brace_depth",
    "unique_identifiers"
]

PROFILE_KEYS = [
    "profile_stmt_if", "profile_stmt_switch", "profile_stmt_case", "profile_stmt_for",
    "profile_stmt_while", "profile_stmt_do", "profile_stmt_return", "profile_stmt_break",
    "profile_stmt_continue", "profile_stmt_decl", "profile_stmt_assign", "profile_stmt_call"
]

PRESENT_KEYS = [
    "present_if", "present_switch", "present_for", "present_while", "present_do",
    "present_break", "present_continue", "present_return"
]


# ============================================================
# Reading samples
# ============================================================
def parse_ids(path: Path) -> Tuple[str, str]:
    a_match = A_FILE_RE.match(path.name)
    a_id = a_match.group(1).upper() if a_match else path.stem.split("_")[0].upper()
    f_id = "UNKNOWN"
    for part in path.parts[::-1]:
        m = F_DIR_RE.match(part)
        if m:
            f_id = m.group(1).upper()
            break
    if f_id == "UNKNOWN" and a_match and a_match.group(2):
        f_id = a_match.group(2).upper()
    return f_id, a_id


def read_samples(job_name: str, code_root: Path, analysis_view: str, max_files: Optional[int]) -> Tuple[List[Sample], Dict[str, str]]:
    version, modality = infer_version_and_modality(code_root)
    samples: List[Sample] = []

    files = sorted(code_root.rglob("*.c"))
    if max_files is not None:
        files = files[:max_files]

    for path in files:
        f_id, a_id = parse_ids(path)
        raw_code, view_code = load_code_for_view(path, analysis_view)
        features = extract_structural_features(view_code)
        samples.append(
            Sample(
                job_name=job_name,
                version=version,
                modality=modality,
                f_id=f_id,
                a_id=a_id,
                file_name=path.name,
                path=path,
                code=raw_code,
                text_for_analysis=view_code,
                features=features,
            )
        )

    info = {
        "job_name": job_name,
        "version": version,
        "modality": modality,
        "code_root": str(code_root),
        "analysis_view": analysis_view,
        "file_count": str(len(samples)),
    }
    return samples, info


# ============================================================
# Pair generation
# ============================================================
def generate_pairs(samples: List[Sample], negative_ratio: float, seed: int, max_pairs: Optional[int]) -> List[Tuple[int, int, int]]:
    rng = random.Random(seed)
    by_f: Dict[str, List[int]] = defaultdict(list)
    for idx, s in enumerate(samples):
        by_f[s.f_id].append(idx)

    positive_pairs: List[Tuple[int, int, int]] = []
    for f_id, idxs in by_f.items():
        idxs = sorted(idxs)
        for i in range(len(idxs)):
            for j in range(i + 1, len(idxs)):
                positive_pairs.append((idxs[i], idxs[j], 1))

    target_neg = int(round(len(positive_pairs) * negative_ratio))

    all_f = sorted(by_f.keys())
    negative_pairs_set = set()
    attempts = 0
    max_attempts = max(10000, target_neg * 20)
    while len(negative_pairs_set) < target_neg and attempts < max_attempts:
        f1, f2 = rng.sample(all_f, 2)
        i = rng.choice(by_f[f1])
        j = rng.choice(by_f[f2])
        pair = (min(i, j), max(i, j), 0)
        negative_pairs_set.add(pair)
        attempts += 1

    negative_pairs = sorted(negative_pairs_set)
    all_pairs = positive_pairs + negative_pairs
    rng.shuffle(all_pairs)

    if max_pairs is not None:
        all_pairs = all_pairs[:max_pairs]
    return all_pairs


# ============================================================
# Pair metrics
# ============================================================
def vec(sample: Sample, keys: Sequence[str]) -> np.ndarray:
    return np.array([float(sample.features[k]) for k in keys], dtype=float)


def cosine_similarity(a: np.ndarray, b: np.ndarray) -> float:
    na = float(np.linalg.norm(a))
    nb = float(np.linalg.norm(b))
    if na == 0.0 and nb == 0.0:
        return 1.0
    if na == 0.0 or nb == 0.0:
        return 0.0
    return float(np.dot(a, b) / (na * nb))


def l1_similarity(a: np.ndarray, b: np.ndarray) -> float:
    scale = np.maximum(np.maximum(np.abs(a), np.abs(b)), 1.0)
    dist = float(np.mean(np.abs(a - b) / scale))
    return 1.0 / (1.0 + dist)


def ratio_similarity(x: float, y: float) -> float:
    if x == 0.0 and y == 0.0:
        return 1.0
    if x == 0.0 or y == 0.0:
        return 0.0
    return min(x, y) / max(x, y)


def set_jaccard_from_presence(s1: Sample, s2: Sample) -> float:
    a = {k for k in PRESENT_KEYS if s1.features.get(k, 0.0) > 0.0}
    b = {k for k in PRESENT_KEYS if s2.features.get(k, 0.0) > 0.0}
    if not a and not b:
        return 1.0
    if not a or not b:
        return 0.0
    return len(a & b) / len(a | b)


def compute_pair_metrics(s1: Sample, s2: Sample) -> Dict[str, float]:
    main_a = vec(s1, FEATURE_VECTOR_KEYS)
    main_b = vec(s2, FEATURE_VECTOR_KEYS)
    prof_a = vec(s1, PROFILE_KEYS)
    prof_b = vec(s2, PROFILE_KEYS)

    out = {
        "structural_cosine": cosine_similarity(main_a, main_b),
        "feature_l1_similarity": l1_similarity(main_a, main_b),
        "profile_cosine": cosine_similarity(prof_a, prof_b),
        "profile_l1_similarity": l1_similarity(prof_a, prof_b),
        "control_jaccard": set_jaccard_from_presence(s1, s2),
        "size_similarity": ratio_similarity(s1.features["loc"], s2.features["loc"]),
        "cyclomatic_similarity": ratio_similarity(s1.features["cyclomatic"], s2.features["cyclomatic"]),
        "nesting_similarity": ratio_similarity(s1.features["max_control_depth"], s2.features["max_control_depth"]),
        "loop_similarity": ratio_similarity(s1.features["loop_count"], s2.features["loop_count"]),
        "branch_similarity": ratio_similarity(s1.features["branch_count"], s2.features["branch_count"]),
        "call_similarity": ratio_similarity(s1.features["call_count"], s2.features["call_count"]),
    }
    # Diversity-style derived values for positive-pair analysis
    out["structural_diversity"] = 1.0 - out["structural_cosine"]
    out["profile_diversity"] = 1.0 - out["profile_cosine"]
    return out


# ============================================================
# Summaries / plots
# ============================================================
def summarize_by_label(df: pd.DataFrame, bins: int) -> Tuple[pd.DataFrame, pd.DataFrame]:
    metric_cols = [
        "structural_cosine", "feature_l1_similarity", "profile_cosine",
        "profile_l1_similarity", "control_jaccard", "size_similarity",
        "cyclomatic_similarity", "nesting_similarity", "loop_similarity",
        "branch_similarity", "call_similarity"
    ]
    rows = []
    for label_value, sub in df.groupby("label"):
        for m in metric_cols:
            vals = sub[m].dropna().to_numpy()
            rows.append({
                "label": int(label_value),
                "metric": m,
                "count": len(vals),
                "mean": float(np.mean(vals)) if len(vals) else np.nan,
                "median": float(np.median(vals)) if len(vals) else np.nan,
                "std": float(np.std(vals)) if len(vals) else np.nan,
                "q25": float(np.quantile(vals, 0.25)) if len(vals) else np.nan,
                "q75": float(np.quantile(vals, 0.75)) if len(vals) else np.nan,
            })
    summary = pd.DataFrame(rows)

    pos = df[df["label"] == 1]
    neg = df[df["label"] == 0]
    sep_rows = []
    for m in metric_cols:
        x = pos[m].dropna().to_numpy()
        y = neg[m].dropna().to_numpy()
        auc = roc_auc_binary(df["label"].tolist(), df[m].tolist())
        overlap = distribution_overlap(x, y, bins=bins)
        delta = cliffs_delta(x, y)
        sep_rows.append({
            "metric": m,
            "positive_mean": float(np.mean(x)) if len(x) else np.nan,
            "negative_mean": float(np.mean(y)) if len(y) else np.nan,
            "mean_gap_pos_minus_neg": float(np.mean(x) - np.mean(y)) if len(x) and len(y) else np.nan,
            "auc": auc,
            "distribution_overlap": overlap,
            "cliffs_delta_pos_vs_neg": delta,
        })
    separability = pd.DataFrame(sep_rows)
    return summary, separability


def positive_diversity_by_f(df: pd.DataFrame) -> pd.DataFrame:
    pos = df[df["label"] == 1].copy()
    if pos.empty:
        return pd.DataFrame(columns=["f_id", "pair_count", "structural_cosine_mean", "structural_diversity_mean", "profile_cosine_mean", "cyclomatic_similarity_mean"])
    rows = []
    for f_id, sub in pos.groupby("left_f_id"):
        rows.append({
            "f_id": f_id,
            "pair_count": int(len(sub)),
            "structural_cosine_mean": float(sub["structural_cosine"].mean()),
            "structural_diversity_mean": float(sub["structural_diversity"].mean()),
            "profile_cosine_mean": float(sub["profile_cosine"].mean()),
            "cyclomatic_similarity_mean": float(sub["cyclomatic_similarity"].mean()),
            "size_similarity_mean": float(sub["size_similarity"].mean()),
            "nesting_similarity_mean": float(sub["nesting_similarity"].mean()),
        })
    return pd.DataFrame(rows).sort_values(["structural_diversity_mean", "pair_count"], ascending=[False, False])


def plot_metric(df: pd.DataFrame, metric: str, out_path: Path, bins: int) -> None:
    pos = df[df["label"] == 1][metric].dropna().to_numpy()
    neg = df[df["label"] == 0][metric].dropna().to_numpy()
    if len(pos) == 0 or len(neg) == 0:
        return
    plt.figure(figsize=(7, 5))
    plt.hist(pos, bins=bins, alpha=0.55, density=True, label="Positive pairs")
    plt.hist(neg, bins=bins, alpha=0.55, density=True, label="Negative pairs")
    plt.xlabel(metric)
    plt.ylabel("Density")
    plt.title(f"Distribution of {metric}")
    plt.legend()
    plt.tight_layout()
    plt.savefig(out_path, dpi=200)
    plt.close()


# ============================================================
# Main job runner
# ============================================================
def run_job(job_cfg: Dict[str, object], config: Dict[str, object]) -> None:
    job_name = str(job_cfg["name"])
    code_root = Path(str(job_cfg["code_root"])).resolve()
    output_root = Path(str(config["output_root"])).resolve()
    analysis_view = str(config["analysis_view"])
    negative_ratio = float(config["negative_ratio"])
    seed = int(config["random_seed"])
    max_files = config.get("max_files_per_job")
    max_pairs = config.get("max_pairs_per_job")
    bins = int(config["hist_bins"])
    save_plots = bool(config["save_plots"])

    if not code_root.exists():
        raise FileNotFoundError(f"code_root does not exist: {code_root}")

    ensure_dir(output_root)
    plots_dir = output_root / "plots"
    ensure_dir(plots_dir)

    samples, info = read_samples(job_name, code_root, analysis_view, max_files)
    if not samples:
        raise RuntimeError(f"No .c files found under {code_root}")

    pairs = generate_pairs(samples, negative_ratio=negative_ratio, seed=seed, max_pairs=max_pairs)
    if not pairs:
        raise RuntimeError(f"No pairs generated for {job_name}")

    sample_index_rows = []
    sample_feature_rows = []
    for idx, s in enumerate(samples):
        sample_index_rows.append({
            "job_name": s.job_name,
            "version": s.version,
            "modality": s.modality,
            "analysis_view": analysis_view,
            "sample_idx": idx,
            "f_id": s.f_id,
            "a_id": s.a_id,
            "file_name": s.file_name,
        })
        feat_row = {
            "job_name": s.job_name,
            "version": s.version,
            "modality": s.modality,
            "analysis_view": analysis_view,
            "sample_idx": idx,
            "f_id": s.f_id,
            "a_id": s.a_id,
            "file_name": s.file_name,
        }
        feat_row.update(s.features)
        sample_feature_rows.append(feat_row)

    sample_index_df = pd.DataFrame(sample_index_rows)
    sample_features_df = pd.DataFrame(sample_feature_rows)

    pair_rows = []
    pair_metric_rows = []
    for left_idx, right_idx, label in pairs:
        s1 = samples[left_idx]
        s2 = samples[right_idx]
        metric_row = compute_pair_metrics(s1, s2)
        pair_rows.append({
            "job_name": job_name,
            "version": s1.version,
            "modality": s1.modality,
            "analysis_view": analysis_view,
            "left_sample_idx": left_idx,
            "right_sample_idx": right_idx,
            "left_f_id": s1.f_id,
            "right_f_id": s2.f_id,
            "left_a_id": s1.a_id,
            "right_a_id": s2.a_id,
            "label": label,
            "pair_type": "pos" if label == 1 else "neg",
        })
        pair_metric_entry = dict(pair_rows[-1])
        pair_metric_entry.update(metric_row)
        pair_metric_rows.append(pair_metric_entry)

    generated_pairs_df = pd.DataFrame(pair_rows)
    pair_metrics_df = pd.DataFrame(pair_metric_rows)
    summary_df, sep_df = summarize_by_label(pair_metrics_df, bins=bins)
    pos_div_df = positive_diversity_by_f(pair_metrics_df)

    prefix = f"{job_name}_"
    sample_index_df.to_csv(output_root / f"{prefix}sample_index.csv", index=False)
    sample_features_df.to_csv(output_root / f"{prefix}sample_features.csv", index=False)
    generated_pairs_df.to_csv(output_root / f"{prefix}generated_pairs.csv", index=False)
    pair_metrics_df.to_csv(output_root / f"{prefix}pair_metrics.csv", index=False)
    summary_df.to_csv(output_root / f"{prefix}summary_by_label.csv", index=False)
    sep_df.to_csv(output_root / f"{prefix}metric_separability.csv", index=False)
    pos_div_df.to_csv(output_root / f"{prefix}positive_diversity_by_F.csv", index=False)

    info.update({
        "pair_count": len(pair_metrics_df),
        "positive_pair_count": int((pair_metrics_df["label"] == 1).sum()),
        "negative_pair_count": int((pair_metrics_df["label"] == 0).sum()),
        "random_seed": seed,
        "negative_ratio": negative_ratio,
        "sample_paths": {str(i): str(s.path) for i, s in enumerate(samples)},
    })
    with open(output_root / f"{prefix}run_info.json", "w", encoding="utf-8") as f:
        json.dump(info, f, indent=2, ensure_ascii=False)

    if save_plots:
        for metric in [
            "structural_cosine", "feature_l1_similarity", "profile_cosine",
            "cyclomatic_similarity", "control_jaccard"
        ]:
            plot_metric(pair_metrics_df, metric, plots_dir / f"{prefix}{metric}.png", bins=bins)

    print("=" * 90)
    print(f"Job finished: {job_name}")
    print(f"Version: {samples[0].version} | Modality: {samples[0].modality} | View: {analysis_view}")
    print(f"Files: {len(samples)} | Pairs: {len(pair_metrics_df)}")
    print(f"Output dir: {output_root}")
    print("Top structural separability metrics:")
    show = sep_df.sort_values(["auc", "distribution_overlap"], ascending=[False, True]).head(8)
    with pd.option_context("display.max_columns", None, "display.width", 180):
        print(show.to_string(index=False))
    print("=" * 90)


# ============================================================
# Entry point
# ============================================================
def main() -> None:
    random.seed(int(CONFIG["random_seed"]))
    np.random.seed(int(CONFIG["random_seed"]))
    enabled_jobs = [j for j in CONFIG["jobs"] if j.get("enabled", False)]
    if not enabled_jobs:
        raise RuntimeError("No enabled jobs in CONFIG['jobs'].")
    for job_cfg in enabled_jobs:
        run_job(job_cfg, CONFIG)


if __name__ == "__main__":
    main()
