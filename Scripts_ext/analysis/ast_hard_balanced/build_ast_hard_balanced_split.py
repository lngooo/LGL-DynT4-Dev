#!/usr/bin/env python
# -*- coding: utf-8 -*-

"""
Build AST-hard balanced test split for LGL-DynT4.

Purpose:
    Construct a balanced diagnostic test subset:
        - Positive: K positive pairs with the lowest AST similarity.
        - Negative: K negative pairs with the highest AST similarity.

Placement:
    Scripts_ext/analysis/ast_hard_balanced/build_ast_hard_balanced_split.py
"""

import json
from pathlib import Path

import pandas as pd


# =============================================================================
# Configuration
# =============================================================================

DATA_VIEW = "Natural"

PROJECT_ROOT = Path(__file__).resolve().parents[3]

AST_PAIR_SIMILARITY_RELATIVE_PATH = (
    f"script_OUTPUTS/ast_similarity_split_{DATA_VIEW.lower()}/ast_pair_similarity_test.csv"
)

OUTPUT_MANIFEST_RELATIVE_PATH = "Manifest/Test_Split_ASTHard_K105.csv"

OUTPUT_DIR_RELATIVE_PATH = f"script_OUTPUTS/ast_hard_balanced_{DATA_VIEW.lower()}"

K = 105

MAIN_METRIC = "ast_3gram_cosine"

SHUFFLE_OUTPUT = True
RANDOM_SEED = 42

# keep_original keeps the original Manifest labels, usually 1 and 2.
# binary writes labels as 1 and 0.
LABEL_MODE = "keep_original"


# =============================================================================
# Utility functions
# =============================================================================

def detect_project_root() -> Path:
    if PROJECT_ROOT is not None:
        return Path(PROJECT_ROOT).resolve()

    here = Path(__file__).resolve()
    for candidate in [here.parent] + list(here.parents):
        if (candidate / "Manifest").exists() and (candidate / "Data").exists():
            return candidate

    return Path.cwd().resolve()


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


def describe_metric(df, metric):
    vals = df[metric].astype(float)
    return {
        "n": int(len(vals)),
        "mean": float(vals.mean()),
        "min": float(vals.min()),
        "p25": float(vals.quantile(0.25)),
        "median": float(vals.quantile(0.50)),
        "p75": float(vals.quantile(0.75)),
        "max": float(vals.max()),
    }


def main():
    project_root = detect_project_root()

    input_path = project_root / AST_PAIR_SIMILARITY_RELATIVE_PATH
    output_manifest_path = project_root / OUTPUT_MANIFEST_RELATIVE_PATH
    output_dir = project_root / OUTPUT_DIR_RELATIVE_PATH

    output_manifest_path.parent.mkdir(parents=True, exist_ok=True)
    output_dir.mkdir(parents=True, exist_ok=True)

    if not input_path.exists():
        raise FileNotFoundError(f"Input file not found: {input_path}")

    df = pd.read_csv(input_path)

    required = {"algorithm1", "algorithm2", "label_original", "label_bin", MAIN_METRIC}
    missing = required - set(df.columns)
    if missing:
        raise ValueError(f"Input file missing columns: {sorted(missing)}")

    df["label_bin"] = df["label_bin"].apply(label_to_binary)

    pos_all = df[df["label_bin"] == 1].copy()
    neg_all = df[df["label_bin"] == 0].copy()

    if len(pos_all) < K:
        raise ValueError(f"Not enough positive pairs: required {K}, found {len(pos_all)}")
    if len(neg_all) < K:
        raise ValueError(f"Not enough negative pairs: required {K}, found {len(neg_all)}")

    hard_pos = pos_all.sort_values(MAIN_METRIC, ascending=True).head(K).copy()
    hard_neg = neg_all.sort_values(MAIN_METRIC, ascending=False).head(K).copy()

    hard_pos.insert(0, "hard_type", "low_similarity_positive")
    hard_pos.insert(1, "hard_rank_in_type", range(1, len(hard_pos) + 1))

    hard_neg.insert(0, "hard_type", "high_similarity_negative")
    hard_neg.insert(1, "hard_rank_in_type", range(1, len(hard_neg) + 1))

    hard_df = pd.concat([hard_pos, hard_neg], ignore_index=True)

    if SHUFFLE_OUTPUT:
        hard_df = hard_df.sample(frac=1, random_state=RANDOM_SEED).reset_index(drop=True)

    metadata_path = output_dir / f"Test_Split_ASTHard_K{K}_with_similarity.csv"
    hard_df.to_csv(metadata_path, index=False, encoding="utf-8-sig")

    manifest_df = hard_df[["algorithm1", "algorithm2", "label_original"]].copy()
    manifest_df.rename(columns={"label_original": "label"}, inplace=True)

    if LABEL_MODE == "binary":
        manifest_df["label"] = manifest_df["label"].apply(label_to_binary)
    elif LABEL_MODE != "keep_original":
        raise ValueError("LABEL_MODE must be either 'keep_original' or 'binary'")

    manifest_df.to_csv(output_manifest_path, index=False, encoding="utf-8-sig")

    summary = {
        "data_view": DATA_VIEW,
        "project_root": str(project_root),
        "input_path": str(input_path),
        "output_manifest_path": str(output_manifest_path),
        "metadata_path": str(metadata_path),
        "k_per_class": K,
        "main_metric": MAIN_METRIC,
        "label_mode": LABEL_MODE,
        "shuffle_output": SHUFFLE_OUTPUT,
        "random_seed": RANDOM_SEED,
        "full_test_positive": describe_metric(pos_all, MAIN_METRIC),
        "full_test_negative": describe_metric(neg_all, MAIN_METRIC),
        "hard_positive_low_similarity": describe_metric(hard_pos, MAIN_METRIC),
        "hard_negative_high_similarity": describe_metric(hard_neg, MAIN_METRIC),
        "hard_subset_total_pairs": int(len(hard_df)),
        "hard_subset_positive_pairs": int((hard_df["label_bin"] == 1).sum()),
        "hard_subset_negative_pairs": int((hard_df["label_bin"] == 0).sum()),
    }

    summary_path = output_dir / "ast_hard_balanced_summary.json"
    with open(summary_path, "w", encoding="utf-8") as f:
        json.dump(summary, f, indent=2, ensure_ascii=False)

    print("=" * 80)
    print("AST-hard balanced split built.")
    print(f"DATA_VIEW       : {DATA_VIEW}")
    print(f"K per class     : {K}")
    print(f"Main metric     : {MAIN_METRIC}")
    print(f"Input           : {input_path}")
    print(f"Manifest output : {output_manifest_path}")
    print(f"Metadata output : {metadata_path}")
    print(f"Summary output  : {summary_path}")
    print("-" * 80)
    print("Hard positive similarity:")
    print(describe_metric(hard_pos, MAIN_METRIC))
    print("Hard negative similarity:")
    print(describe_metric(hard_neg, MAIN_METRIC))
    print("=" * 80)


if __name__ == "__main__":
    main()
