#!/usr/bin/env python3
# -*- coding: utf-8 -*-

"""
IR divergence analysis for LGL-DynT4.

Goal
-----
Analyze whether clone detection remains difficult in LLVM IR, and compare
source-level vs. IR-level shallow structural separability.

Design
------
- Read Source_Clean and LLVM_IR_Clean recursively from:
    ../Data/Natural/Source_Clean
    ../Data/Natural/LLVM_IR_Clean
    ../Data/Obfuscated/Source_Clean
    ../Data/Obfuscated/LLVM_IR_Clean
- Recover sample IDs from F/A naming convention.
- Generate positive pairs within the same F, and sampled negative pairs across F.
- Extract lightweight source structural features and LLVM IR opcode / control features.
- Compute pairwise similarities and summarize AUC / overlap statistics.

Outputs
-------
For each job (natural / obfuscated):
- *_sample_index.csv
- *_generated_pairs.csv
- *_source_sample_features.csv
- *_ir_sample_features.csv
- *_pair_metrics.csv
- *_source_metric_separability.csv
- *_ir_metric_separability.csv
- *_representation_summary.csv
- plots/*.png

Notes
-----
- This script uses lightweight regex-based parsing instead of full compiler tooling.
- It is intended for dataset difficulty analysis, not semantic verification.
"""

from __future__ import annotations

import json
import math
import os
import random
import re
from pathlib import Path
from typing import Dict, List, Optional, Sequence, Tuple

import matplotlib.pyplot as plt
import numpy as np
import pandas as pd
from sklearn.metrics import roc_auc_score


CONFIG = {
    "jobs": [
        {
            "name": "natural",
            "enabled": True,
            "source_root": r"../Data/Natural/Source_Clean",
            "ir_root": r"../Data/Natural/LLVM_IR_Clean",
        },
        {
            "name": "obfuscated",
            "enabled": True,
            "source_root": r"../Data/Obfuscated/Source_Clean",
            "ir_root": r"../Data/Obfuscated/LLVM_IR_Clean",
        },
    ],
    "output_root": r"../script_OUTPUTS/ir_divergence",
    "source_view": "body_only",   # "body_only" or "full_function"
    "negative_ratio": 1.0,
    "random_seed": 42,
    "plot_bins": 50,
}


# -----------------------------------------------------------------------------
# Regexes
# -----------------------------------------------------------------------------
RE_F_DIR = re.compile(r"^(F\d+)_")
RE_A_FILE = re.compile(r"^(A\d+)_")
RE_FUNC = re.compile(
    r"""
    ([_A-Za-z]\w*[\s\*]+)+      # return type-ish
    ([_A-Za-z]\w*)              # function name
    \s*
    \((.*?)\)
    \s*
    \{
    """,
    re.DOTALL | re.VERBOSE,
)
RE_COMMENT = re.compile(r"//.*?$|/\*.*?\*/", re.DOTALL | re.MULTILINE)
RE_STRING = re.compile(r'"([^"\\]|\\.)*"')
RE_CHAR = re.compile(r"'([^'\\]|\\.)*'")
RE_IDENT = re.compile(r"\b[_A-Za-z][_A-Za-z0-9]*\b")
RE_NUMBER = re.compile(r"\b(?:0x[0-9A-Fa-f]+|\d+(?:\.\d+)?)\b")

C_KEYWORDS = {
    "auto", "break", "case", "char", "const", "continue", "default", "do",
    "double", "else", "enum", "extern", "float", "for", "goto", "if", "inline",
    "int", "long", "register", "restrict", "return", "short", "signed",
    "sizeof", "static", "struct", "switch", "typedef", "union", "unsigned",
    "void", "volatile", "while", "_Bool", "_Complex", "_Imaginary"
}

LLVM_OPS = [
    "alloca", "load", "store", "call", "ret", "br", "switch",
    "icmp", "fcmp", "phi", "select", "getelementptr",
    "add", "sub", "mul", "udiv", "sdiv", "fdiv", "urem", "srem",
    "and", "or", "xor", "shl", "lshr", "ashr",
    "trunc", "zext", "sext", "fptrunc", "fpext", "fptoui", "fptosi",
    "uitofp", "sitofp", "ptrtoint", "inttoptr", "bitcast", "addrspacecast",
]

LLVM_OP_SET = set(LLVM_OPS)


# -----------------------------------------------------------------------------
# Utilities
# -----------------------------------------------------------------------------
def ensure_dir(path: Path) -> None:
    path.mkdir(parents=True, exist_ok=True)


def normalize_text(s: str) -> str:
    s = RE_COMMENT.sub(" ", s)
    s = RE_STRING.sub(" STR_LITERAL ", s)
    s = RE_CHAR.sub(" CHAR_LITERAL ", s)
    s = RE_NUMBER.sub(" NUM_LITERAL ", s)
    return s


def cosine_similarity(a: np.ndarray, b: np.ndarray) -> float:
    na = np.linalg.norm(a)
    nb = np.linalg.norm(b)
    if na == 0.0 and nb == 0.0:
        return 1.0
    if na == 0.0 or nb == 0.0:
        return 0.0
    return float(np.dot(a, b) / (na * nb))


def l1_similarity(a: np.ndarray, b: np.ndarray) -> float:
    denom = np.sum(np.abs(a)) + np.sum(np.abs(b))
    if denom == 0:
        return 1.0
    return float(1.0 - np.sum(np.abs(a - b)) / denom)


def ratio_similarity(x: float, y: float) -> float:
    if x == 0 and y == 0:
        return 1.0
    if x == 0 or y == 0:
        return 0.0
    return float(min(x, y) / max(x, y))


def distribution_overlap(pos: np.ndarray, neg: np.ndarray, bins: int = 50) -> float:
    if len(pos) == 0 or len(neg) == 0:
        return float("nan")
    values = np.concatenate([pos, neg])
    lo, hi = np.min(values), np.max(values)
    if math.isclose(lo, hi):
        return 1.0
    hist_pos, edges = np.histogram(pos, bins=bins, range=(lo, hi), density=True)
    hist_neg, _ = np.histogram(neg, bins=bins, range=(lo, hi), density=True)
    widths = np.diff(edges)
    overlap = np.sum(np.minimum(hist_pos, hist_neg) * widths)
    return float(overlap)


def cliffs_delta(x: np.ndarray, y: np.ndarray) -> float:
    if len(x) == 0 or len(y) == 0:
        return float("nan")
    gt = 0
    lt = 0
    for xi in x:
        gt += np.sum(xi > y)
        lt += np.sum(xi < y)
    return (gt - lt) / (len(x) * len(y))


def plot_metric(df: pd.DataFrame, metric: str, out_path: Path, title: str, bins: int = 50) -> None:
    pos = df[df["label"] == 1][metric].dropna().to_numpy()
    neg = df[df["label"] == 0][metric].dropna().to_numpy()

    plt.figure(figsize=(7, 5))
    plt.hist(pos, bins=bins, alpha=0.55, density=True, label="Positive pairs")
    plt.hist(neg, bins=bins, alpha=0.55, density=True, label="Negative pairs")
    plt.xlabel(metric)
    plt.ylabel("Density")
    plt.title(title)
    plt.legend()
    plt.tight_layout()
    plt.savefig(out_path, dpi=200)
    plt.close()


# -----------------------------------------------------------------------------
# Sample discovery
# -----------------------------------------------------------------------------
def infer_version_from_path(path: Path) -> str:
    s = str(path).replace("\\", "/").lower()
    if "/natural/" in s:
        return "Natural"
    if "/obfuscated/" in s:
        return "Obfuscated"
    return "Unknown"


def infer_modality_from_path(path: Path) -> str:
    parts = [p for p in path.parts]
    for p in parts[::-1]:
        if p in {"Source_Clean", "Source_Raw", "LLVM_IR_Clean", "LLVM_IR_Raw", "Trace"}:
            return p
    return "Unknown"


def build_sample_index(source_root: Path, ir_root: Path) -> pd.DataFrame:
    source_root = source_root.resolve()
    ir_root = ir_root.resolve()

    rows = []
    ir_map = {}
    for ll_path in ir_root.rglob("*.ll"):
        ir_map[ll_path.stem] = ll_path

    version = infer_version_from_path(source_root)
    source_modality = infer_modality_from_path(source_root)
    ir_modality = infer_modality_from_path(ir_root)

    for c_path in source_root.rglob("*.c"):
        stem = c_path.stem
        parent_dir = c_path.parent.name

        f_match = RE_F_DIR.match(parent_dir)
        a_match = RE_A_FILE.match(stem)

        if not f_match or not a_match:
            continue

        f_id = f_match.group(1)
        a_id = a_match.group(1)
        ir_path = ir_map.get(stem)

        if ir_path is None:
            continue

        rows.append({
            "job_name": "",
            "version": version,
            "source_modality": source_modality,
            "ir_modality": ir_modality,
            "F_id": f_id,
            "A_id": a_id,
            "sample_key": stem,
            "source_path": str(c_path),
            "ir_path": str(ir_path),
        })

    df = pd.DataFrame(rows).sort_values(["F_id", "A_id"]).reset_index(drop=True)
    return df


# -----------------------------------------------------------------------------
# Pair generation
# -----------------------------------------------------------------------------
def generate_pairs(sample_df: pd.DataFrame, negative_ratio: float, seed: int) -> pd.DataFrame:
    rng = random.Random(seed)
    by_f = {f: sub.copy() for f, sub in sample_df.groupby("F_id")}
    f_ids = sorted(by_f.keys())

    pos_rows = []
    for f_id, sub in by_f.items():
        recs = sub.to_dict("records")
        for i in range(len(recs)):
            for j in range(i + 1, len(recs)):
                left = recs[i]
                right = recs[j]
                pos_rows.append({
                    "job_name": left["job_name"],
                    "version": left["version"],
                    "left_key": left["sample_key"],
                    "right_key": right["sample_key"],
                    "left_F_id": left["F_id"],
                    "right_F_id": right["F_id"],
                    "left_A_id": left["A_id"],
                    "right_A_id": right["A_id"],
                    "label": 1,
                })

    pos_count = len(pos_rows)
    target_neg = int(round(pos_count * negative_ratio))

    all_keys_by_f = {f: sub["sample_key"].tolist() for f, sub in by_f.items()}

    neg_rows = []
    used = set()
    attempts = 0
    max_attempts = max(target_neg * 20, 10000)

    while len(neg_rows) < target_neg and attempts < max_attempts:
        attempts += 1
        f1, f2 = rng.sample(f_ids, 2)
        k1 = rng.choice(all_keys_by_f[f1])
        k2 = rng.choice(all_keys_by_f[f2])

        if k1 < k2:
            pair_key = (k1, k2)
            lf, rf = f1, f2
        else:
            pair_key = (k2, k1)
            lf, rf = f2, f1

        if pair_key in used:
            continue
        used.add(pair_key)

        row1 = sample_df[sample_df["sample_key"] == pair_key[0]].iloc[0]
        row2 = sample_df[sample_df["sample_key"] == pair_key[1]].iloc[0]

        neg_rows.append({
            "job_name": row1["job_name"],
            "version": row1["version"],
            "left_key": pair_key[0],
            "right_key": pair_key[1],
            "left_F_id": row1["F_id"],
            "right_F_id": row2["F_id"],
            "left_A_id": row1["A_id"],
            "right_A_id": row2["A_id"],
            "label": 0,
        })

    pair_df = pd.DataFrame(pos_rows + neg_rows)
    pair_df = pair_df.sample(frac=1.0, random_state=seed).reset_index(drop=True)
    return pair_df


# -----------------------------------------------------------------------------
# Source feature extraction
# -----------------------------------------------------------------------------
def extract_function_body(code: str) -> str:
    code = normalize_text(code)
    m = RE_FUNC.search(code)
    if not m:
        return code

    start_brace = m.end() - 1
    depth = 0
    for i in range(start_brace, len(code)):
        ch = code[i]
        if ch == "{":
            depth += 1
        elif ch == "}":
            depth -= 1
            if depth == 0:
                return code[start_brace + 1:i]
    return code[start_brace + 1:]


def read_source_text(path: str, source_view: str) -> str:
    text = Path(path).read_text(encoding="utf-8", errors="ignore")
    if source_view == "body_only":
        return extract_function_body(text)
    return normalize_text(text)


def count_keyword(text: str, kw: str) -> int:
    return len(re.findall(rf"\b{re.escape(kw)}\b", text))


def count_calls(text: str) -> int:
    matches = re.findall(r"\b([_A-Za-z]\w*)\s*\(", text)
    return sum(1 for m in matches if m not in C_KEYWORDS and m not in {"if", "for", "while", "switch", "return", "sizeof"})


def count_assignments(text: str) -> int:
    return len(re.findall(r"(?<![=!<>])=(?!=)", text))


def count_comparisons(text: str) -> int:
    return len(re.findall(r"==|!=|<=|>=|<|>", text))


def count_arith(text: str) -> int:
    return len(re.findall(r"\+|-|\*|/|%|\+\+|--|\+=|-=|\*=|/=|%=", text))


def max_brace_depth(text: str) -> int:
    depth = 0
    best = 0
    for ch in text:
        if ch == "{":
            depth += 1
            best = max(best, depth)
        elif ch == "}":
            depth = max(depth - 1, 0)
    return best


def approx_control_depth(text: str) -> int:
    lines = text.splitlines()
    depth = 0
    best = 0
    pending_control = 0

    for line in lines:
        stripped = line.strip()
        if not stripped:
            continue

        if re.search(r"\b(if|for|while|switch)\b", stripped):
            pending_control += 1

        opens = stripped.count("{")
        closes = stripped.count("}")

        if opens > 0 and pending_control > 0:
            take = min(opens, pending_control)
            depth += take
            pending_control -= take
            best = max(best, depth)
            if opens > take:
                best = max(best, depth + (opens - take))

        depth += max(0, opens - min(opens, pending_control + opens))
        best = max(best, depth)
        depth -= closes
        depth = max(depth, 0)

    return best


def extract_source_features(code_text: str) -> Dict[str, float]:
    text = normalize_text(code_text)
    loc = sum(1 for line in text.splitlines() if line.strip())
    token_count = len(RE_IDENT.findall(text))

    if_count = count_keyword(text, "if")
    switch_count = count_keyword(text, "switch")
    case_count = count_keyword(text, "case")
    for_count = count_keyword(text, "for")
    while_count = count_keyword(text, "while")
    do_count = count_keyword(text, "do")
    return_count = count_keyword(text, "return")
    break_count = count_keyword(text, "break")
    continue_count = count_keyword(text, "continue")

    loop_count = for_count + while_count + do_count
    branch_count = if_count + switch_count + case_count
    statement_count = text.count(";")
    call_count = count_calls(text)
    assign_count = count_assignments(text)
    cmp_ops = count_comparisons(text)
    arith_ops = count_arith(text)
    brace_depth = max_brace_depth(text)
    control_depth = approx_control_depth(text)
    unique_identifiers = len({
        x for x in RE_IDENT.findall(text)
        if x not in C_KEYWORDS
    })

    cyclomatic = 1 + if_count + for_count + while_count + case_count + switch_count

    denom = max(statement_count, 1)
    features = {
        "loc": float(loc),
        "token_count": float(token_count),
        "statement_count": float(statement_count),
        "if_count": float(if_count),
        "switch_count": float(switch_count),
        "case_count": float(case_count),
        "for_count": float(for_count),
        "while_count": float(while_count),
        "do_count": float(do_count),
        "loop_count": float(loop_count),
        "branch_count": float(branch_count),
        "return_count": float(return_count),
        "break_count": float(break_count),
        "continue_count": float(continue_count),
        "call_count": float(call_count),
        "assign_count": float(assign_count),
        "cmp_ops": float(cmp_ops),
        "arith_ops": float(arith_ops),
        "cyclomatic": float(cyclomatic),
        "max_control_depth": float(control_depth),
        "max_brace_depth": float(brace_depth),
        "unique_identifiers": float(unique_identifiers),
        "profile_stmt_if": if_count / denom,
        "profile_stmt_switch": switch_count / denom,
        "profile_stmt_case": case_count / denom,
        "profile_stmt_for": for_count / denom,
        "profile_stmt_while": while_count / denom,
        "profile_stmt_do": do_count / denom,
        "profile_stmt_return": return_count / denom,
        "profile_stmt_break": break_count / denom,
        "profile_stmt_continue": continue_count / denom,
        "profile_stmt_assign": assign_count / denom,
        "profile_stmt_call": call_count / denom,
    }
    return features


SOURCE_MAIN_FEATURES = [
    "loc", "statement_count", "if_count", "switch_count", "case_count",
    "for_count", "while_count", "do_count", "loop_count", "branch_count",
    "return_count", "break_count", "continue_count", "call_count",
    "assign_count", "cmp_ops", "arith_ops", "cyclomatic",
    "max_control_depth", "max_brace_depth", "unique_identifiers",
]
SOURCE_PROFILE_FEATURES = [
    "profile_stmt_if", "profile_stmt_switch", "profile_stmt_case",
    "profile_stmt_for", "profile_stmt_while", "profile_stmt_do",
    "profile_stmt_return", "profile_stmt_break", "profile_stmt_continue",
    "profile_stmt_assign", "profile_stmt_call",
]


# -----------------------------------------------------------------------------
# IR feature extraction
# -----------------------------------------------------------------------------
def read_ir_text(path: str) -> str:
    return Path(path).read_text(encoding="utf-8", errors="ignore")


def extract_ir_features(ir_text: str) -> Dict[str, float]:
    lines = [line.strip() for line in ir_text.splitlines() if line.strip()]
    body_lines = [
        line for line in lines
        if not line.startswith(";")
        and not line.startswith("declare ")
        and not line.startswith("source_filename")
        and not line.startswith("target ")
    ]

    instruction_count = 0
    basic_block_count = 0
    label_count = 0

    op_counts = {op: 0 for op in LLVM_OPS}

    for line in body_lines:
        if line.endswith(":"):
            basic_block_count += 1
            label_count += 1
            continue

        if line.startswith("define "):
            continue
        if line == "}":
            continue

        instruction_count += 1

        m = re.match(r"(?:[%@][\w\.\-]+(?:\s*=\s*))?([a-zA-Z][a-zA-Z0-9_]*)\b", line)
        if m:
            op = m.group(1)
            if op in LLVM_OP_SET:
                op_counts[op] += 1

    memory_ops = op_counts["alloca"] + op_counts["load"] + op_counts["store"] + op_counts["getelementptr"]
    control_ops = op_counts["br"] + op_counts["switch"] + op_counts["ret"]
    compare_ops = op_counts["icmp"] + op_counts["fcmp"]
    arithmetic_ops = op_counts["add"] + op_counts["sub"] + op_counts["mul"] + op_counts["udiv"] + op_counts["sdiv"] + op_counts["fdiv"] + op_counts["urem"] + op_counts["srem"]
    bitwise_ops = op_counts["and"] + op_counts["or"] + op_counts["xor"] + op_counts["shl"] + op_counts["lshr"] + op_counts["ashr"]
    cast_ops = (
        op_counts["trunc"] + op_counts["zext"] + op_counts["sext"] + op_counts["fptrunc"] +
        op_counts["fpext"] + op_counts["fptoui"] + op_counts["fptosi"] + op_counts["uitofp"] +
        op_counts["sitofp"] + op_counts["ptrtoint"] + op_counts["inttoptr"] + op_counts["bitcast"] +
        op_counts["addrspacecast"]
    )

    edge_proxy = op_counts["br"] + op_counts["switch"]
    denom = max(instruction_count, 1)

    feats = {
        "instruction_count": float(instruction_count),
        "basic_block_count": float(basic_block_count),
        "label_count": float(label_count),
        "edge_proxy": float(edge_proxy),
        "alloca_count": float(op_counts["alloca"]),
        "load_count": float(op_counts["load"]),
        "store_count": float(op_counts["store"]),
        "call_count": float(op_counts["call"]),
        "ret_count": float(op_counts["ret"]),
        "br_count": float(op_counts["br"]),
        "switch_count": float(op_counts["switch"]),
        "icmp_count": float(op_counts["icmp"]),
        "fcmp_count": float(op_counts["fcmp"]),
        "phi_count": float(op_counts["phi"]),
        "select_count": float(op_counts["select"]),
        "gep_count": float(op_counts["getelementptr"]),
        "memory_ops": float(memory_ops),
        "control_ops": float(control_ops),
        "compare_ops": float(compare_ops),
        "arithmetic_ops": float(arithmetic_ops),
        "bitwise_ops": float(bitwise_ops),
        "cast_ops": float(cast_ops),
    }

    for op in LLVM_OPS:
        feats[f"profile_op_{op}"] = op_counts[op] / denom

    return feats


IR_MAIN_FEATURES = [
    "instruction_count", "basic_block_count", "label_count", "edge_proxy",
    "alloca_count", "load_count", "store_count", "call_count", "ret_count",
    "br_count", "switch_count", "icmp_count", "fcmp_count", "phi_count",
    "select_count", "gep_count", "memory_ops", "control_ops", "compare_ops",
    "arithmetic_ops", "bitwise_ops", "cast_ops",
]
IR_PROFILE_FEATURES = [f"profile_op_{op}" for op in LLVM_OPS]


# -----------------------------------------------------------------------------
# Pair metrics
# -----------------------------------------------------------------------------
def compute_representation_pair_metrics(
    pair_df: pd.DataFrame,
    feature_df: pd.DataFrame,
    main_features: List[str],
    profile_features: List[str],
    prefix: str,
) -> pd.DataFrame:
    feat_map = feature_df.set_index("sample_key").to_dict("index")

    rows = []
    for _, row in pair_df.iterrows():
        left = feat_map[row["left_key"]]
        right = feat_map[row["right_key"]]

        v1 = np.array([left[f] for f in main_features], dtype=float)
        v2 = np.array([right[f] for f in main_features], dtype=float)

        p1 = np.array([left[f] for f in profile_features], dtype=float)
        p2 = np.array([right[f] for f in profile_features], dtype=float)

        out = {
            "job_name": row["job_name"],
            "version": row["version"],
            "left_key": row["left_key"],
            "right_key": row["right_key"],
            "left_F_id": row["left_F_id"],
            "right_F_id": row["right_F_id"],
            "left_A_id": row["left_A_id"],
            "right_A_id": row["right_A_id"],
            "label": row["label"],
            f"{prefix}_feature_l1_similarity": l1_similarity(v1, v2),
            f"{prefix}_profile_cosine": cosine_similarity(p1, p2),
            f"{prefix}_profile_l1_similarity": l1_similarity(p1, p2),
        }

        # Selected scalar similarities
        scalar_pairs = []
        if prefix == "source":
            scalar_pairs = [
                ("size_similarity", "loc"),
                ("cyclomatic_similarity", "cyclomatic"),
                ("nesting_similarity", "max_control_depth"),
                ("loop_similarity", "loop_count"),
                ("branch_similarity", "branch_count"),
                ("call_similarity", "call_count"),
            ]
        elif prefix == "ir":
            scalar_pairs = [
                ("size_similarity", "instruction_count"),
                ("block_similarity", "basic_block_count"),
                ("edge_similarity", "edge_proxy"),
                ("memory_similarity", "memory_ops"),
                ("control_similarity", "control_ops"),
                ("call_similarity", "call_count"),
            ]

        for out_name, feat_name in scalar_pairs:
            out[f"{prefix}_{out_name}"] = ratio_similarity(left[feat_name], right[feat_name])

        rows.append(out)

    return pd.DataFrame(rows)


def summarize_separability(df: pd.DataFrame, metric_cols: List[str], bins: int) -> pd.DataFrame:
    pos = df[df["label"] == 1]
    neg = df[df["label"] == 0]

    rows = []
    for m in metric_cols:
        x = pos[m].dropna().to_numpy()
        y = neg[m].dropna().to_numpy()

        valid = df[["label", m]].dropna()
        auc = roc_auc_score(valid["label"], valid[m]) if valid["label"].nunique() == 2 else np.nan
        overlap = distribution_overlap(x, y, bins=bins)
        delta = cliffs_delta(x, y)

        rows.append({
            "metric": m,
            "positive_mean": float(np.mean(x)) if len(x) else np.nan,
            "negative_mean": float(np.mean(y)) if len(y) else np.nan,
            "mean_gap_pos_minus_neg": float(np.mean(x) - np.mean(y)) if len(x) and len(y) else np.nan,
            "auc": float(auc) if not pd.isna(auc) else np.nan,
            "distribution_overlap": overlap,
            "cliffs_delta_pos_vs_neg": delta,
        })

    return pd.DataFrame(rows).sort_values(["auc", "distribution_overlap"], ascending=[False, True]).reset_index(drop=True)


# -----------------------------------------------------------------------------
# Main per-job analysis
# -----------------------------------------------------------------------------
def run_job(job_cfg: Dict, config: Dict) -> None:
    job_name = job_cfg["name"]
    source_root = Path(job_cfg["source_root"]).resolve()
    ir_root = Path(job_cfg["ir_root"]).resolve()
    out_root = Path(config["output_root"]).resolve()
    ensure_dir(out_root)
    plot_dir = out_root / "plots"
    ensure_dir(plot_dir)

    sample_df = build_sample_index(source_root, ir_root)
    if sample_df.empty:
        raise RuntimeError(f"No matched source/IR samples found for job '{job_name}'.")

    sample_df["job_name"] = job_name
    version = sample_df["version"].iloc[0]
    if version == "Unknown":
        version = "Natural" if "natural" in job_name.lower() else ("Obfuscated" if "obfus" in job_name.lower() else "Unknown")
        sample_df["version"] = version

    pair_df = generate_pairs(sample_df, config["negative_ratio"], config["random_seed"])

    # Source features
    source_rows = []
    for _, row in sample_df.iterrows():
        code_text = read_source_text(row["source_path"], config["source_view"])
        feats = extract_source_features(code_text)
        feats.update({
            "job_name": row["job_name"],
            "version": row["version"],
            "sample_key": row["sample_key"],
            "F_id": row["F_id"],
            "A_id": row["A_id"],
        })
        source_rows.append(feats)
    source_feat_df = pd.DataFrame(source_rows)

    # IR features
    ir_rows = []
    for _, row in sample_df.iterrows():
        ir_text = read_ir_text(row["ir_path"])
        feats = extract_ir_features(ir_text)
        feats.update({
            "job_name": row["job_name"],
            "version": row["version"],
            "sample_key": row["sample_key"],
            "F_id": row["F_id"],
            "A_id": row["A_id"],
        })
        ir_rows.append(feats)
    ir_feat_df = pd.DataFrame(ir_rows)

    # Pair metrics
    source_pair_df = compute_representation_pair_metrics(
        pair_df, source_feat_df, SOURCE_MAIN_FEATURES, SOURCE_PROFILE_FEATURES, "source"
    )
    ir_pair_df = compute_representation_pair_metrics(
        pair_df, ir_feat_df, IR_MAIN_FEATURES, IR_PROFILE_FEATURES, "ir"
    )

    pair_metrics_df = pair_df.merge(
        source_pair_df.drop(columns=["job_name", "version", "left_F_id", "right_F_id", "left_A_id", "right_A_id", "label"]),
        on=["left_key", "right_key"],
        how="left"
    ).merge(
        ir_pair_df.drop(columns=["job_name", "version", "left_F_id", "right_F_id", "left_A_id", "right_A_id", "label"]),
        on=["left_key", "right_key"],
        how="left"
    )

    # Metric lists
    source_metric_cols = [
        "source_feature_l1_similarity",
        "source_profile_cosine",
        "source_profile_l1_similarity",
        "source_size_similarity",
        "source_cyclomatic_similarity",
        "source_nesting_similarity",
        "source_loop_similarity",
        "source_branch_similarity",
        "source_call_similarity",
    ]
    ir_metric_cols = [
        "ir_feature_l1_similarity",
        "ir_profile_cosine",
        "ir_profile_l1_similarity",
        "ir_size_similarity",
        "ir_block_similarity",
        "ir_edge_similarity",
        "ir_memory_similarity",
        "ir_control_similarity",
        "ir_call_similarity",
    ]

    source_sep = summarize_separability(pair_metrics_df, source_metric_cols, config["plot_bins"])
    ir_sep = summarize_separability(pair_metrics_df, ir_metric_cols, config["plot_bins"])

    rep_summary = pd.DataFrame([
        {
            "job_name": job_name,
            "version": version,
            "representation": "Source",
            "best_metric": source_sep.iloc[0]["metric"],
            "best_auc": source_sep.iloc[0]["auc"],
            "best_overlap": source_sep.iloc[0]["distribution_overlap"],
            "mean_auc": float(source_sep["auc"].mean()),
            "mean_overlap": float(source_sep["distribution_overlap"].mean()),
        },
        {
            "job_name": job_name,
            "version": version,
            "representation": "LLVM_IR",
            "best_metric": ir_sep.iloc[0]["metric"],
            "best_auc": ir_sep.iloc[0]["auc"],
            "best_overlap": ir_sep.iloc[0]["distribution_overlap"],
            "mean_auc": float(ir_sep["auc"].mean()),
            "mean_overlap": float(ir_sep["distribution_overlap"].mean()),
        },
    ])

    # Save outputs
    prefix = job_name
    sample_df.to_csv(out_root / f"{prefix}_sample_index.csv", index=False)
    pair_df.to_csv(out_root / f"{prefix}_generated_pairs.csv", index=False)
    source_feat_df.to_csv(out_root / f"{prefix}_source_sample_features.csv", index=False)
    ir_feat_df.to_csv(out_root / f"{prefix}_ir_sample_features.csv", index=False)
    pair_metrics_df.to_csv(out_root / f"{prefix}_pair_metrics.csv", index=False)
    source_sep.to_csv(out_root / f"{prefix}_source_metric_separability.csv", index=False)
    ir_sep.to_csv(out_root / f"{prefix}_ir_metric_separability.csv", index=False)
    rep_summary.to_csv(out_root / f"{prefix}_representation_summary.csv", index=False)

    run_info = {
        "job_name": job_name,
        "version": version,
        "source_root": str(source_root),
        "ir_root": str(ir_root),
        "source_view": config["source_view"],
        "sample_count": int(len(sample_df)),
        "pair_count": int(len(pair_df)),
        "negative_ratio": config["negative_ratio"],
        "random_seed": config["random_seed"],
    }
    with open(out_root / f"{prefix}_run_info.json", "w", encoding="utf-8") as f:
        json.dump(run_info, f, indent=2, ensure_ascii=False)

    # Plots
    plot_metric(
        pair_metrics_df,
        "source_feature_l1_similarity",
        plot_dir / f"{prefix}_source_feature_l1_similarity.png",
        f"{job_name}: source_feature_l1_similarity",
        bins=config["plot_bins"]
    )
    plot_metric(
        pair_metrics_df,
        "source_profile_cosine",
        plot_dir / f"{prefix}_source_profile_cosine.png",
        f"{job_name}: source_profile_cosine",
        bins=config["plot_bins"]
    )
    plot_metric(
        pair_metrics_df,
        "ir_feature_l1_similarity",
        plot_dir / f"{prefix}_ir_feature_l1_similarity.png",
        f"{job_name}: ir_feature_l1_similarity",
        bins=config["plot_bins"]
    )
    plot_metric(
        pair_metrics_df,
        "ir_profile_cosine",
        plot_dir / f"{prefix}_ir_profile_cosine.png",
        f"{job_name}: ir_profile_cosine",
        bins=config["plot_bins"]
    )

    print("=" * 90)
    print(f"Job finished: {job_name}")
    print(f"Version: {version} | Source View: {config['source_view']}")
    print(f"Files: {len(sample_df)} | Pairs: {len(pair_df)}")
    print(f"Output dir: {out_root}")
    print("Top source separability metrics:")
    print(source_sep.head(6).to_string(index=False))
    print("Top IR separability metrics:")
    print(ir_sep.head(6).to_string(index=False))
    print("=" * 90)


# -----------------------------------------------------------------------------
# Main
# -----------------------------------------------------------------------------
def main() -> None:
    random.seed(CONFIG["random_seed"])
    np.random.seed(CONFIG["random_seed"])

    enabled_jobs = [job for job in CONFIG["jobs"] if job.get("enabled", True)]
    if not enabled_jobs:
        raise RuntimeError("No enabled jobs in CONFIG.")

    for job in enabled_jobs:
        run_job(job, CONFIG)


if __name__ == "__main__":
    main()