#!/usr/bin/env python
# -*- coding: utf-8 -*-

"""
AST similarity split analysis for LGL-DynT4.

Purpose:
    Compute AST/block-level similarity for the predefined Train/Val/Test pairs.
    This script is intended to diagnose whether positive pairs are structurally
    more similar than negative pairs, and to identify high-similarity negative
    pairs as AST-hard-negative candidates.

Placement:
    Scripts_ext/analysis/ast_similarity_split/analyze_ast_similarity_split.py

Output:
    script_OUTPUTS/ast_similarity_split_<view>/
        ast_pair_similarity_train.csv
        ast_pair_similarity_val.csv
        ast_pair_similarity_test.csv
        ast_pair_similarity_all_splits.csv
        ast_similarity_summary.csv
        ast_hard_negative_candidates.csv
        program_parse_status.csv
        unresolved_pairs_all_splits.csv
        ast_similarity_report.json
"""

import json
import math
import os
import re
from collections import Counter
from pathlib import Path

import numpy as np
import pandas as pd
from tqdm import tqdm

try:
    from pycparser import c_ast, c_parser
except Exception:
    c_ast = None
    c_parser = None


# =============================================================================
# Configuration
# =============================================================================

# Select "Natural" or "Obfuscated".
DATA_VIEW = "Natural"

PROJECT_ROOT = Path(__file__).resolve().parents[3]

# Input paths. These are resolved after PROJECT_ROOT is determined.
SOURCE_CLEAN_RELATIVE_DIR = f"Data/{DATA_VIEW}/Source_Clean"
MANIFEST_RELATIVE_DIR = "Manifest"

# Output path.
OUTPUT_ROOT_RELATIVE_DIR = "script_OUTPUTS"
OUTPUT_SUBDIR = f"ast_similarity_split_{DATA_VIEW.lower()}"

# Split files.
SPLIT_FILES = {
    "train": "Train_Split.csv",
    "val": "Val_Split.csv",
    "test": "Test_Split.csv",
}

# Main metric used for summary rows and hard-negative ranking.
# Recommended: "ast_3gram_cosine".
MAIN_METRIC = "ast_3gram_cosine"

# Top ratio of negative pairs saved as AST-hard-negative candidates.
HARD_TOP_RATIO = 0.10

# Whether to run each split.
RUN_TRAIN = True
RUN_VAL = True
RUN_TEST = True

# Parser behavior.
USE_PYCPARSER = True
FALLBACK_TO_TOKEN_ANALYSIS = True

# CSV encoding.
CSV_ENCODING = "utf-8-sig"

# Error text length in output files.
MAX_PARSE_ERROR_CHARS = 500

# Print a compact summary at the end.
PRINT_SUMMARY = True


# =============================================================================
# Utility functions
# =============================================================================

C_KEYWORDS = {
    "auto", "break", "case", "char", "const", "continue", "default", "do",
    "double", "else", "enum", "extern", "float", "for", "goto", "if", "inline",
    "int", "long", "register", "restrict", "return", "short", "signed",
    "sizeof", "static", "struct", "switch", "typedef", "union", "unsigned",
    "void", "volatile", "while", "_Bool", "_Complex", "_Imaginary"
}

STRUCTURAL_KEYWORDS = {
    "if", "else", "for", "while", "do", "switch", "case", "default", "return",
    "break", "continue", "goto", "struct", "enum", "typedef", "sizeof"
}

C_TYPE_NAMES = {
    "int8_t", "int16_t", "int32_t", "int64_t",
    "uint8_t", "uint16_t", "uint32_t", "uint64_t",
    "size_t", "bool"
}

FAKE_TYPEDEFS = """
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef unsigned long size_t;
typedef int bool;
"""


def detect_project_root() -> Path:
    if PROJECT_ROOT is not None:
        return Path(PROJECT_ROOT).resolve()

    here = Path(__file__).resolve()
    for candidate in [here.parent] + list(here.parents):
        if (candidate / "Manifest").exists() and (candidate / "Data").exists():
            return candidate

    return Path.cwd().resolve()


def remove_comments_and_preprocessor(code: str) -> str:
    code = re.sub(r"/\*.*?\*/", " ", code, flags=re.S)
    code = re.sub(r"//.*", " ", code)
    code = "\n".join(
        line for line in code.splitlines()
        if not line.lstrip().startswith("#")
    )
    return code


def normalize_constants_for_parse(code: str) -> str:
    replacements = {
        r"\btrue\b": "1",
        r"\bfalse\b": "0",
        r"\bNULL\b": "0",
        r"\bINT_MAX\b": "2147483647",
        r"\bINT_MIN\b": "(-2147483647-1)",
        r"\bUINT_MAX\b": "4294967295U",
        r"\bLLONG_MAX\b": "9223372036854775807LL",
        r"\bLLONG_MIN\b": "(-9223372036854775807LL-1)",
        r"\bULLONG_MAX\b": "18446744073709551615ULL",
    }
    for pattern, repl in replacements.items():
        code = re.sub(pattern, repl, code)
    return code


def preprocess_for_pycparser(code: str) -> str:
    code = remove_comments_and_preprocessor(code)
    code = normalize_constants_for_parse(code)
    return FAKE_TYPEDEFS + "\n" + code


def flatten_pycparser_ast(root):
    node_types = []
    syntax_tokens = []
    stmt_tokens = []

    stmt_classes = {
        "Compound", "If", "For", "While", "DoWhile", "Switch", "Case",
        "Default", "Return", "Break", "Continue", "Goto", "Label", "Decl",
        "Assignment", "FuncCall", "BinaryOp", "UnaryOp", "TernaryOp"
    }

    def visit(node):
        if node is None:
            return

        cls = node.__class__.__name__
        node_types.append(cls)
        syntax_tokens.append(cls)

        if cls in stmt_classes:
            stmt_tokens.append(cls)

        if isinstance(node, c_ast.BinaryOp):
            syntax_tokens.append("op:" + str(node.op))
            stmt_tokens.append("op:" + str(node.op))
        elif isinstance(node, c_ast.UnaryOp):
            syntax_tokens.append("uop:" + str(node.op))
            stmt_tokens.append("uop:" + str(node.op))
        elif isinstance(node, c_ast.Assignment):
            syntax_tokens.append("assign:" + str(node.op))
            stmt_tokens.append("assign:" + str(node.op))
        elif isinstance(node, c_ast.IdentifierType):
            for name in node.names:
                syntax_tokens.append("itype:" + str(name))
        elif isinstance(node, c_ast.Constant):
            syntax_tokens.append("CONST")
        elif isinstance(node, c_ast.ID):
            syntax_tokens.append("ID")
        elif isinstance(node, c_ast.FuncCall):
            syntax_tokens.append("CALL")
        elif isinstance(node, c_ast.Decl):
            syntax_tokens.append("DECL")
        elif isinstance(node, c_ast.Struct):
            syntax_tokens.append("STRUCT")

        for _, child in node.children():
            visit(child)

    visit(root)
    return node_types, syntax_tokens, stmt_tokens


def fallback_tokens(code: str):
    code = remove_comments_and_preprocessor(code)
    string_pat = r'"(?:\\.|[^"\\])*"|\'(?:\\.|[^\'\\])*\''
    code = re.sub(string_pat, " CONST ", code)

    tokens = re.findall(
        r"[A-Za-z_]\w*|==|!=|<=|>=|\+\+|--|&&|\|\||<<|>>|->|"
        r"[{}()\[\];,?:+\-*/%<>=!&|^~.]|\d+\.\d+|\d+",
        code
    )

    node_types = []
    syntax_tokens = []
    stmt_tokens = []

    for tok in tokens:
        if tok in STRUCTURAL_KEYWORDS:
            node_types.append(tok.upper())
            syntax_tokens.append(tok.upper())
            stmt_tokens.append(tok.upper())
        elif tok in {"{", "}", "(", ")", "[", "]", ";", ","}:
            syntax_tokens.append("PUNC:" + tok)
        elif tok in {
            "==", "!=", "<=", ">=", "++", "--", "&&", "||", "<<", ">>",
            "+", "-", "*", "/", "%", "<", ">", "=", "!", "&", "|", "^",
            "~", "?", ":"
        }:
            syntax_tokens.append("OP:" + tok)
            stmt_tokens.append("OP:" + tok)
        elif re.match(r"^\d", tok):
            syntax_tokens.append("CONST")
        elif tok in C_KEYWORDS or tok in C_TYPE_NAMES:
            syntax_tokens.append("KW:" + tok)
        else:
            syntax_tokens.append("ID")

    if not node_types:
        node_types = ["UNKNOWN"]
    if not stmt_tokens:
        stmt_tokens = node_types[:]

    return node_types, syntax_tokens, stmt_tokens


def make_ngrams(seq, n=3):
    if not seq:
        return []
    if len(seq) < n:
        return ["|".join(seq)]
    return ["|".join(seq[i:i + n]) for i in range(len(seq) - n + 1)]


def cosine_counter(a: Counter, b: Counter) -> float:
    if not a or not b:
        return 0.0

    dot = sum(a[k] * b[k] for k in (set(a) & set(b)))
    na = math.sqrt(sum(v * v for v in a.values()))
    nb = math.sqrt(sum(v * v for v in b.values()))

    if na == 0 or nb == 0:
        return 0.0

    return float(dot / (na * nb))


def jaccard_set(a_tokens, b_tokens) -> float:
    a = set(a_tokens)
    b = set(b_tokens)

    if not a and not b:
        return 1.0
    if not a or not b:
        return 0.0

    return float(len(a & b) / len(a | b))


def label_to_binary(label):
    try:
        v = int(label)
    except Exception:
        return label

    if v == 2:
        return 0
    if v in {0, 1}:
        return v
    return v


def build_source_index(source_dir: Path):
    index = {}
    duplicate_keys = []

    files = sorted(source_dir.rglob("*.c"))
    for path in files:
        rel = path.relative_to(source_dir)
        keys = {
            path.name,
            path.stem,
            str(rel).replace("\\", "/"),
            str(rel.with_suffix("")).replace("\\", "/"),
        }

        for key in keys:
            if key in index and index[key] != path:
                duplicate_keys.append({
                    "key": key,
                    "old_path": str(index[key]),
                    "new_path": str(path),
                })
            index[key] = path

    return index, files, duplicate_keys


def resolve_algo_path(algo_ref, source_dir: Path, source_index):
    raw = str(algo_ref).strip().replace("\\", "/")
    candidates = []

    candidates.append(raw)
    candidates.append(raw.replace(".c", ""))
    candidates.append(Path(raw).name)
    candidates.append(Path(raw).stem)

    parts = raw.split("/")
    for i in range(len(parts)):
        suffix = "/".join(parts[i:]).strip("/")
        candidates.append(suffix)
        candidates.append(suffix.replace(".c", ""))

    raw_path = Path(raw)
    if raw_path.exists():
        return raw_path

    direct = source_dir / raw
    if direct.exists():
        return direct
    if not str(direct).endswith(".c") and direct.with_suffix(".c").exists():
        return direct.with_suffix(".c")

    for cand in candidates:
        cand = cand.strip("/")
        if cand in source_index:
            return source_index[cand]
        if not cand.endswith(".c") and (cand + ".c") in source_index:
            return source_index[cand + ".c"]

    return None


def compute_program_features(file_path: Path):
    code = file_path.read_text(encoding="utf-8", errors="ignore")
    parse_status = "fallback"
    parse_error = ""

    if USE_PYCPARSER and c_parser is not None:
        try:
            parser = c_parser.CParser()
            tree = parser.parse(preprocess_for_pycparser(code), filename=str(file_path))
            node_types, syntax_tokens, stmt_tokens = flatten_pycparser_ast(tree)
            parse_status = "pycparser"
        except Exception as e:
            parse_error = str(e).replace("\n", " ")[:MAX_PARSE_ERROR_CHARS]
            if FALLBACK_TO_TOKEN_ANALYSIS:
                node_types, syntax_tokens, stmt_tokens = fallback_tokens(code)
            else:
                node_types, syntax_tokens, stmt_tokens = ["PARSE_ERROR"], ["PARSE_ERROR"], ["PARSE_ERROR"]
    else:
        parse_error = "pycparser_not_available_or_disabled"
        node_types, syntax_tokens, stmt_tokens = fallback_tokens(code)

    return {
        "file_path": str(file_path),
        "parse_status": parse_status,
        "parse_error": parse_error,
        "num_ast_nodes": len(node_types),
        "num_syntax_tokens": len(syntax_tokens),
        "num_stmt_tokens": len(stmt_tokens),
        "node_counter": Counter(node_types),
        "syntax_counter": Counter(syntax_tokens),
        "stmt_counter": Counter(stmt_tokens),
        "ngram3_counter": Counter(make_ngrams(node_types, 3)),
        "node_set": set(node_types),
        "syntax_set": set(syntax_tokens),
        "stmt_set": set(stmt_tokens),
    }


def pair_similarity(f1, f2):
    max_nodes = max(f1["num_ast_nodes"], f2["num_ast_nodes"])
    max_stmts = max(f1["num_stmt_tokens"], f2["num_stmt_tokens"])

    return {
        "ast_node_cosine": cosine_counter(f1["node_counter"], f2["node_counter"]),
        "ast_node_jaccard": jaccard_set(f1["node_set"], f2["node_set"]),
        "syntax_token_cosine": cosine_counter(f1["syntax_counter"], f2["syntax_counter"]),
        "syntax_token_jaccard": jaccard_set(f1["syntax_set"], f2["syntax_set"]),
        "stmt_token_cosine": cosine_counter(f1["stmt_counter"], f2["stmt_counter"]),
        "stmt_token_jaccard": jaccard_set(f1["stmt_set"], f2["stmt_set"]),
        "ast_3gram_cosine": cosine_counter(f1["ngram3_counter"], f2["ngram3_counter"]),
        "node_count_ratio": (
            min(f1["num_ast_nodes"], f2["num_ast_nodes"]) / max_nodes
            if max_nodes > 0 else 0.0
        ),
        "stmt_count_ratio": (
            min(f1["num_stmt_tokens"], f2["num_stmt_tokens"]) / max_stmts
            if max_stmts > 0 else 0.0
        ),
    }


def summarize_pairs(df: pd.DataFrame, split_name: str, main_metric: str):
    rows = []

    for label_value, pair_type in [(1, "positive"), (0, "negative")]:
        sub = df[df["label_bin"] == label_value]
        if len(sub) == 0:
            continue

        vals = sub[main_metric].dropna().astype(float).values
        rows.append({
            "split": split_name,
            "pair_type": pair_type,
            "metric": main_metric,
            "n": int(len(vals)),
            "mean": float(np.mean(vals)),
            "std": float(np.std(vals)),
            "min": float(np.min(vals)),
            "p10": float(np.percentile(vals, 10)),
            "p25": float(np.percentile(vals, 25)),
            "median": float(np.percentile(vals, 50)),
            "p75": float(np.percentile(vals, 75)),
            "p90": float(np.percentile(vals, 90)),
            "p95": float(np.percentile(vals, 95)),
            "max": float(np.max(vals)),
        })

    pos = df[df["label_bin"] == 1][main_metric].dropna().astype(float).values
    neg = df[df["label_bin"] == 0][main_metric].dropna().astype(float).values

    if len(pos) > 0 and len(neg) > 0:
        thresholds = {
            "negative_overlap_ge_pos_p25": float(np.percentile(pos, 25)),
            "negative_overlap_ge_pos_median": float(np.percentile(pos, 50)),
            "negative_overlap_ge_pos_p75": float(np.percentile(pos, 75)),
            "negative_overlap_ge_pos_p90": float(np.percentile(pos, 90)),
        }

        for pair_type, threshold in thresholds.items():
            rows.append({
                "split": split_name,
                "pair_type": pair_type,
                "metric": main_metric,
                "n": int(len(neg)),
                "mean": float(np.mean(neg >= threshold)),
                "std": "",
                "min": "",
                "p10": "",
                "p25": "",
                "median": "",
                "p75": "",
                "p90": "",
                "p95": "",
                "max": "",
                "threshold": threshold,
            })

    return rows


def process_split(split_name, manifest_path, source_dir, source_index, feature_cache, output_dir):
    df = pd.read_csv(manifest_path)
    required_columns = {"algorithm1", "algorithm2", "label"}
    missing = required_columns - set(df.columns)
    if missing:
        raise ValueError(f"{manifest_path} missing columns: {sorted(missing)}")

    rows = []
    unresolved_rows = []

    for idx, row in tqdm(df.iterrows(), total=len(df), desc=f"{DATA_VIEW} {split_name}"):
        algo1 = row["algorithm1"]
        algo2 = row["algorithm2"]

        path1 = resolve_algo_path(algo1, source_dir, source_index)
        path2 = resolve_algo_path(algo2, source_dir, source_index)

        if path1 is None or path2 is None:
            unresolved_rows.append({
                "split": split_name,
                "row_id": int(idx),
                "algorithm1": algo1,
                "algorithm2": algo2,
                "resolved1": "" if path1 is None else str(path1),
                "resolved2": "" if path2 is None else str(path2),
            })
            continue

        if path1 not in feature_cache:
            feature_cache[path1] = compute_program_features(path1)
        if path2 not in feature_cache:
            feature_cache[path2] = compute_program_features(path2)

        f1 = feature_cache[path1]
        f2 = feature_cache[path2]
        sims = pair_similarity(f1, f2)

        rows.append({
            "split": split_name,
            "row_id": int(idx),
            "algorithm1": algo1,
            "algorithm2": algo2,
            "file1": str(path1),
            "file2": str(path2),
            "label_original": row["label"],
            "label_bin": label_to_binary(row["label"]),
            "parse_status1": f1["parse_status"],
            "parse_status2": f2["parse_status"],
            "parse_error1": f1["parse_error"],
            "parse_error2": f2["parse_error"],
            "num_ast_nodes1": f1["num_ast_nodes"],
            "num_ast_nodes2": f2["num_ast_nodes"],
            "num_stmt_tokens1": f1["num_stmt_tokens"],
            "num_stmt_tokens2": f2["num_stmt_tokens"],
            **sims,
        })

    pair_df = pd.DataFrame(rows)
    unresolved_df = pd.DataFrame(unresolved_rows)

    pair_df.to_csv(output_dir / f"ast_pair_similarity_{split_name}.csv",
                   index=False, encoding=CSV_ENCODING)
    unresolved_df.to_csv(output_dir / f"unresolved_pairs_{split_name}.csv",
                         index=False, encoding=CSV_ENCODING)

    return pair_df, unresolved_df


def main():
    project_root = detect_project_root()

    source_dir = project_root / SOURCE_CLEAN_RELATIVE_DIR
    manifest_dir = project_root / MANIFEST_RELATIVE_DIR
    output_dir = project_root / OUTPUT_ROOT_RELATIVE_DIR / OUTPUT_SUBDIR
    output_dir.mkdir(parents=True, exist_ok=True)

    active_splits = []
    if RUN_TRAIN:
        active_splits.append("train")
    if RUN_VAL:
        active_splits.append("val")
    if RUN_TEST:
        active_splits.append("test")

    if not source_dir.exists():
        raise FileNotFoundError(f"Source directory not found: {source_dir}")
    if not manifest_dir.exists():
        raise FileNotFoundError(f"Manifest directory not found: {manifest_dir}")

    print("=" * 80)
    print("AST similarity split analysis")
    print("=" * 80)
    print(f"DATA_VIEW      : {DATA_VIEW}")
    print(f"PROJECT_ROOT   : {project_root}")
    print(f"SOURCE_DIR     : {source_dir}")
    print(f"MANIFEST_DIR   : {manifest_dir}")
    print(f"OUTPUT_DIR     : {output_dir}")
    print(f"MAIN_METRIC    : {MAIN_METRIC}")
    print(f"HARD_TOP_RATIO : {HARD_TOP_RATIO}")
    print(f"ACTIVE_SPLITS  : {active_splits}")
    print("=" * 80)

    source_index, source_files, duplicate_keys = build_source_index(source_dir)
    feature_cache = {}

    all_pair_frames = []
    all_unresolved_frames = []
    summary_rows = []

    for split_name in active_splits:
        manifest_path = manifest_dir / SPLIT_FILES[split_name]
        if not manifest_path.exists():
            raise FileNotFoundError(f"Manifest file not found: {manifest_path}")

        pair_df, unresolved_df = process_split(
            split_name=split_name,
            manifest_path=manifest_path,
            source_dir=source_dir,
            source_index=source_index,
            feature_cache=feature_cache,
            output_dir=output_dir,
        )

        all_pair_frames.append(pair_df)
        all_unresolved_frames.append(unresolved_df)

        if len(pair_df) > 0:
            summary_rows.extend(summarize_pairs(pair_df, split_name, MAIN_METRIC))

    all_pairs = pd.concat(all_pair_frames, ignore_index=True) if all_pair_frames else pd.DataFrame()
    all_unresolved = pd.concat(all_unresolved_frames, ignore_index=True) if all_unresolved_frames else pd.DataFrame()
    summary_df = pd.DataFrame(summary_rows)

    all_pairs.to_csv(output_dir / "ast_pair_similarity_all_splits.csv",
                     index=False, encoding=CSV_ENCODING)
    all_unresolved.to_csv(output_dir / "unresolved_pairs_all_splits.csv",
                          index=False, encoding=CSV_ENCODING)
    summary_df.to_csv(output_dir / "ast_similarity_summary.csv",
                      index=False, encoding=CSV_ENCODING)

    hard_frames = []
    for split_name in active_splits:
        sub = all_pairs[(all_pairs["split"] == split_name) & (all_pairs["label_bin"] == 0)].copy()
        if len(sub) == 0:
            continue
        k = max(1, int(math.ceil(len(sub) * HARD_TOP_RATIO)))
        sub = sub.sort_values(MAIN_METRIC, ascending=False).head(k).copy()
        sub.insert(0, "hard_rank", range(1, len(sub) + 1))
        hard_frames.append(sub)

    hard_df = pd.concat(hard_frames, ignore_index=True) if hard_frames else pd.DataFrame()
    hard_df.to_csv(output_dir / "ast_hard_negative_candidates.csv",
                   index=False, encoding=CSV_ENCODING)

    parse_records = []
    for path, feat in feature_cache.items():
        parse_records.append({
            "file_path": str(path),
            "parse_status": feat["parse_status"],
            "parse_error": feat["parse_error"],
            "num_ast_nodes": feat["num_ast_nodes"],
            "num_syntax_tokens": feat["num_syntax_tokens"],
            "num_stmt_tokens": feat["num_stmt_tokens"],
        })

    parse_df = pd.DataFrame(parse_records)
    parse_df.to_csv(output_dir / "program_parse_status.csv",
                    index=False, encoding=CSV_ENCODING)

    report = {
        "data_view": DATA_VIEW,
        "project_root": str(project_root),
        "source_dir": str(source_dir),
        "manifest_dir": str(manifest_dir),
        "output_dir": str(output_dir),
        "main_metric": MAIN_METRIC,
        "hard_top_ratio": HARD_TOP_RATIO,
        "active_splits": active_splits,
        "num_source_files": len(source_files),
        "num_source_index_duplicate_keys": len(duplicate_keys),
        "num_pairs_processed": int(len(all_pairs)),
        "num_unresolved_pairs": int(len(all_unresolved)),
        "num_programs_analyzed": int(len(feature_cache)),
        "parse_status_counts": (
            parse_df["parse_status"].value_counts().to_dict()
            if len(parse_df) > 0 else {}
        ),
        "outputs": [
            "ast_pair_similarity_train.csv",
            "ast_pair_similarity_val.csv",
            "ast_pair_similarity_test.csv",
            "ast_pair_similarity_all_splits.csv",
            "ast_similarity_summary.csv",
            "ast_hard_negative_candidates.csv",
            "program_parse_status.csv",
            "unresolved_pairs_all_splits.csv",
            "ast_similarity_report.json",
        ],
    }

    with open(output_dir / "ast_similarity_report.json", "w", encoding="utf-8") as f:
        json.dump(report, f, indent=2, ensure_ascii=False)

    if PRINT_SUMMARY:
        print("\nFinished.")
        print(f"Source files        : {len(source_files)}")
        print(f"Pairs processed     : {len(all_pairs)}")
        print(f"Unresolved pairs    : {len(all_unresolved)}")
        print(f"Programs analyzed   : {len(feature_cache)}")
        print(f"Parse status counts : {report['parse_status_counts']}")
        print(f"Output directory    : {output_dir}")

        if len(summary_df) > 0:
            display_cols = [
                "split", "pair_type", "metric", "n",
                "mean", "median", "p75", "p90", "max", "threshold"
            ]
            display_cols = [c for c in display_cols if c in summary_df.columns]
            print("\nSummary:")
            print(summary_df[display_cols].to_string(index=False))

    print("=" * 80)


if __name__ == "__main__":
    main()