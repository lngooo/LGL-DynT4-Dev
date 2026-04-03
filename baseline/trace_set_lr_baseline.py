#!/usr/bin/env python3
# -*- coding: utf-8 -*-

"""
TraceSet-LR: lightweight trace-only baseline for LGL-DynT4

Design
------
- Use only one trace version (recommended: Natural), because Natural and
  Obfuscated traces are identical in the current dataset.
- Use fixed pair splits from Manifest/{Train,Val,Test}_Split.csv for fairness.
- Build one sample-level trace representation for each program variant A by
  aggregating its 10 traces with:
      mean + std + median + q25 + q75
- Train a lightweight Logistic Regression classifier on train pairs.
- Select hyperparameter C and decision threshold on the validation split.
- Report Precision / Recall / F1 / AUC on the fixed test split.

Expected trace layout
---------------------
../Data/Natural/Trace/FXX_FunctionName/AXX_FXX_.../TYY_AXX_FXX.csv

Expected manifest columns (default)
-----------------------------------
algorithm1, algorithm2, label

Notes
-----
- Trace CSVs may contain leading comment lines beginning with '#', which are skipped.
- The baseline is intentionally simple. It is used to test whether runtime
  behavior alone already contains useful clone-discriminative signals.
"""

from __future__ import annotations

import json
import math
import re
from pathlib import Path
from typing import Dict, List, Tuple

import numpy as np
import pandas as pd
from sklearn.linear_model import LogisticRegression
from sklearn.metrics import (
    precision_score,
    recall_score,
    f1_score,
    roc_auc_score,
)
from sklearn.pipeline import Pipeline
from sklearn.preprocessing import StandardScaler


CONFIG = {
    # Use only one trace version
    "trace_root": r"../Data/Natural/Trace",
    "manifest_dir": r"../Manifest",
    "output_root": r"../script_OUTPUTS/trace_set_lr",
    "pair_columns": {
        "left": "algorithm1",
        "right": "algorithm2",
        "label": "label",
    },
    # Hyperparameter candidates for validation selection
    "candidate_C": [0.01, 0.1, 1.0, 10.0, 100.0],
    "solver": "liblinear",
    "max_iter": 2000,
    "random_seed": 42,
}


EPS = 1e-12
RE_F_DIR = re.compile(r"^(F\d+)_")
RE_A_DIR = re.compile(r"^(A\d+)_")


# -----------------------------------------------------------------------------
# Utilities
# -----------------------------------------------------------------------------
def ensure_dir(path: Path) -> None:
    path.mkdir(parents=True, exist_ok=True)


def infer_version_from_path(path: Path) -> str:
    s = str(path).replace("\\", "/").lower()
    if "/natural/" in s:
        return "Natural"
    if "/obfuscated/" in s:
        return "Obfuscated"
    return "Unknown"


def safe_read_trace_csv(path: Path) -> pd.DataFrame:
    # Handles leading comment lines such as "# Input Parameters: ..."
    try:
        return pd.read_csv(path, comment="#")
    except Exception:
        return pd.read_csv(path, comment="#", encoding="latin1")


def normalize_pair_ref(s: str) -> str:
    """
    Example manifest entry:
        F06_IsPrime/A06_F06_S_WilsonTheorem
    """
    s = str(s).strip().replace("\\", "/")
    s = s.lstrip("./")
    return s


def numeric_columns(df: pd.DataFrame) -> List[str]:
    cols = []
    for c in df.columns:
        s = pd.to_numeric(df[c], errors="coerce")
        if s.notna().sum() > 0:
            cols.append(c)
    return cols


def l1_similarity(a: np.ndarray, b: np.ndarray) -> float:
    denom = float(np.sum(np.abs(a)) + np.sum(np.abs(b)))
    if denom < EPS:
        return 1.0
    return float(1.0 - np.sum(np.abs(a - b)) / denom)


def cosine_similarity(a: np.ndarray, b: np.ndarray) -> float:
    na = float(np.linalg.norm(a))
    nb = float(np.linalg.norm(b))
    if na < EPS and nb < EPS:
        return 1.0
    if na < EPS or nb < EPS:
        return 0.0
    return float(np.dot(a, b) / (na * nb))


# -----------------------------------------------------------------------------
# Sample discovery
# -----------------------------------------------------------------------------
def build_sample_index(trace_root: Path) -> pd.DataFrame:
    rows = []
    version = infer_version_from_path(trace_root.resolve())

    for f_dir in sorted(trace_root.iterdir()):
        if not f_dir.is_dir():
            continue
        f_match = RE_F_DIR.match(f_dir.name)
        if not f_match:
            continue
        f_id = f_match.group(1)

        for a_dir in sorted(f_dir.iterdir()):
            if not a_dir.is_dir():
                continue
            a_match = RE_A_DIR.match(a_dir.name)
            if not a_match:
                continue
            a_id = a_match.group(1)

            trace_files = sorted(a_dir.glob("*.csv"))
            if not trace_files:
                continue

            rel_id = f"{f_dir.name}/{a_dir.name}"
            rows.append({
                "version": version,
                "F_id": f_id,
                "A_id": a_id,
                "family_dir": f_dir.name,
                "sample_dir": a_dir.name,
                "rel_id": rel_id,
                "trace_dir": str(a_dir),
                "trace_count": len(trace_files),
            })

    return pd.DataFrame(rows).sort_values(["F_id", "A_id"]).reset_index(drop=True)


# -----------------------------------------------------------------------------
# Trace-level statistics
# -----------------------------------------------------------------------------
TRACE_BASE_FEATURES = [
    "event_count",
    "unique_addr_count",
    "input_count",
    "non_input_count",
    "input_ratio",
    "value_mean",
    "value_std",
    "value_min",
    "value_max",
    "value_range",
    "value_final",
    "mean_abs_diff",
    "max_abs_diff",
    "sign_change_rate",
    "near_constant_ratio",
    "loc_switch_count",
    "loc_unique_count",
    "op_unique_count",
    "op_input_ratio",
    "op_state_ratio",
]


def summarize_single_trace(path: Path) -> Dict[str, float]:
    df = safe_read_trace_csv(path)

    required_cols = {"loc_id", "raw_addr", "value", "op"}
    missing = required_cols.difference(df.columns)
    if missing:
        raise ValueError(f"Trace file {path} missing columns: {sorted(missing)}")

    value = pd.to_numeric(df["value"], errors="coerce").fillna(0.0).astype(float)
    op = df["op"].astype(str)
    raw_addr = df["raw_addr"].astype(str)
    loc_id = pd.to_numeric(df["loc_id"], errors="coerce")

    event_count = len(df)
    input_mask = op.eq("INPUT")
    state_mask = ~input_mask

    input_count = int(input_mask.sum())
    non_input_count = int(state_mask.sum())
    input_ratio = float(input_count / max(event_count, 1))

    unique_addr_count = int(raw_addr.nunique(dropna=True))
    loc_unique_count = int(loc_id.nunique(dropna=True))
    op_unique_count = int(op.nunique(dropna=True))
    op_input_ratio = float((op == "INPUT").mean()) if event_count > 0 else 0.0
    op_state_ratio = float((op == "S").mean()) if event_count > 0 else 0.0

    # Use only non-input events for behavior-oriented value dynamics when possible
    if state_mask.sum() > 0:
        value_main = value[state_mask].reset_index(drop=True)
        loc_main = loc_id[state_mask].reset_index(drop=True)
    else:
        value_main = value.reset_index(drop=True)
        loc_main = loc_id.reset_index(drop=True)

    value_mean = float(value_main.mean()) if len(value_main) > 0 else 0.0
    value_std = float(value_main.std(ddof=0)) if len(value_main) > 0 else 0.0
    value_min = float(value_main.min()) if len(value_main) > 0 else 0.0
    value_max = float(value_main.max()) if len(value_main) > 0 else 0.0
    value_range = float(value_max - value_min)
    value_final = float(value_main.iloc[-1]) if len(value_main) > 0 else 0.0

    diffs = value_main.diff().abs().fillna(0.0)
    mean_abs_diff = float(diffs.mean()) if len(value_main) > 0 else 0.0
    max_abs_diff = float(diffs.max()) if len(value_main) > 0 else 0.0

    signs = np.sign(value_main.to_numpy())
    if len(signs) >= 2:
        sign_change_rate = float(np.sum(signs[1:] != signs[:-1]) / (len(signs) - 1))
    else:
        sign_change_rate = 0.0

    near_constant_ratio = float((np.abs(diffs.to_numpy()) < 1e-8).mean()) if len(value_main) > 0 else 1.0
    loc_switch_count = int((loc_main.ffill().diff() != 0).sum()) if len(loc_main) > 0 else 0

    return {
        "event_count": float(event_count),
        "unique_addr_count": float(unique_addr_count),
        "input_count": float(input_count),
        "non_input_count": float(non_input_count),
        "input_ratio": float(input_ratio),
        "value_mean": float(value_mean),
        "value_std": float(value_std),
        "value_min": float(value_min),
        "value_max": float(value_max),
        "value_range": float(value_range),
        "value_final": float(value_final),
        "mean_abs_diff": float(mean_abs_diff),
        "max_abs_diff": float(max_abs_diff),
        "sign_change_rate": float(sign_change_rate),
        "near_constant_ratio": float(near_constant_ratio),
        "loc_switch_count": float(loc_switch_count),
        "loc_unique_count": float(loc_unique_count),
        "op_unique_count": float(op_unique_count),
        "op_input_ratio": float(op_input_ratio),
        "op_state_ratio": float(op_state_ratio),
    }


def aggregate_trace_set(trace_dir: Path) -> Dict[str, float]:
    trace_files = sorted(trace_dir.glob("*.csv"))
    if not trace_files:
        raise ValueError(f"No trace files found in {trace_dir}")

    rows = [summarize_single_trace(p) for p in trace_files]
    tdf = pd.DataFrame(rows)

    out = {}
    for feat in TRACE_BASE_FEATURES:
        values = pd.to_numeric(tdf[feat], errors="coerce").fillna(0.0)
        out[f"{feat}__mean"] = float(values.mean())
        out[f"{feat}__std"] = float(values.std(ddof=0))
        out[f"{feat}__median"] = float(values.median())
        out[f"{feat}__q25"] = float(values.quantile(0.25))
        out[f"{feat}__q75"] = float(values.quantile(0.75))
    return out


# -----------------------------------------------------------------------------
# Manifest handling
# -----------------------------------------------------------------------------
def read_manifest_split(path: Path, left_col: str, right_col: str, label_col: str, split_name: str) -> pd.DataFrame:
    df = pd.read_csv(path)
    out = pd.DataFrame({
        "split": split_name,
        "left_id": df[left_col].map(normalize_pair_ref),
        "right_id": df[right_col].map(normalize_pair_ref),
        "label": pd.to_numeric(df[label_col], errors="coerce").fillna(0).astype(int),
    })
    return out


def build_all_pairs(manifest_dir: Path, pair_columns: Dict[str, str]) -> pd.DataFrame:
    files = {
        "train": manifest_dir / "Train_Split.csv",
        "val": manifest_dir / "Val_Split.csv",
        "test": manifest_dir / "Test_Split.csv",
    }
    dfs = []
    for split_name, path in files.items():
        if not path.exists():
            raise FileNotFoundError(f"Missing split file: {path}")
        dfs.append(
            read_manifest_split(
                path,
                pair_columns["left"],
                pair_columns["right"],
                pair_columns["label"],
                split_name,
            )
        )
    return pd.concat(dfs, axis=0, ignore_index=True)


# -----------------------------------------------------------------------------
# Pair feature construction
# -----------------------------------------------------------------------------
def build_pair_features(pair_df: pd.DataFrame, sample_feat_df: pd.DataFrame) -> Tuple[pd.DataFrame, List[str]]:
    feat_cols = [c for c in sample_feat_df.columns if "__" in c]
    feat_map = sample_feat_df.set_index("rel_id").to_dict("index")

    rows = []
    for _, row in pair_df.iterrows():
        left = feat_map[row["left_id"]]
        right = feat_map[row["right_id"]]

        v1 = np.array([left[c] for c in feat_cols], dtype=float)
        v2 = np.array([right[c] for c in feat_cols], dtype=float)

        feat_row = {
            "split": row["split"],
            "left_id": row["left_id"],
            "right_id": row["right_id"],
            "label": int(row["label"]),
            "trace_cosine": float(cosine_similarity(v1, v2)),
            "trace_l1_similarity": float(l1_similarity(v1, v2)),
        }
        feat_row["combined_score"] = 0.5 * feat_row["trace_cosine"] + 0.5 * feat_row["trace_l1_similarity"]

        # Symmetric pair features for learning
        abs_diff = np.abs(v1 - v2)
        prod = v1 * v2

        for idx, c in enumerate(feat_cols):
            feat_row[f"diff__{c}"] = float(abs_diff[idx])
            feat_row[f"prod__{c}"] = float(prod[idx])

        rows.append(feat_row)

    out_df = pd.DataFrame(rows)
    learned_feat_cols = [c for c in out_df.columns if c.startswith("diff__") or c.startswith("prod__")]
    learned_feat_cols += ["trace_cosine", "trace_l1_similarity", "combined_score"]
    return out_df, learned_feat_cols


# -----------------------------------------------------------------------------
# Training / validation / testing
# -----------------------------------------------------------------------------
def fit_and_select_model(
    train_df: pd.DataFrame,
    val_df: pd.DataFrame,
    feature_cols: List[str],
    candidate_C: List[float],
    solver: str,
    max_iter: int,
) -> Tuple[Pipeline, float, pd.DataFrame]:
    X_train = train_df[feature_cols].to_numpy(dtype=float)
    y_train = train_df["label"].to_numpy(dtype=int)
    X_val = val_df[feature_cols].to_numpy(dtype=float)
    y_val = val_df["label"].to_numpy(dtype=int)

    rows = []
    best_model = None
    best_threshold = 0.5
    best_C = None
    best_f1 = -1.0

    for C in candidate_C:
        model = Pipeline([
            ("scaler", StandardScaler()),
            ("clf", LogisticRegression(C=C, solver=solver, max_iter=max_iter, random_state=CONFIG["random_seed"])),
        ])
        model.fit(X_train, y_train)

        val_prob = model.predict_proba(X_val)[:, 1]
        thresholds = np.unique(val_prob)
        if len(thresholds) == 0:
            thresholds = np.array([0.5])

        for t in thresholds:
            pred = (val_prob >= t).astype(int)
            p = precision_score(y_val, pred, zero_division=0)
            r = recall_score(y_val, pred, zero_division=0)
            f1 = f1_score(y_val, pred, zero_division=0)
            auc = roc_auc_score(y_val, val_prob) if len(np.unique(y_val)) == 2 else np.nan

            rows.append({
                "C": float(C),
                "threshold": float(t),
                "precision": float(p),
                "recall": float(r),
                "f1": float(f1),
                "auc": float(auc) if not np.isnan(auc) else np.nan,
            })

            if f1 > best_f1:
                best_f1 = f1
                best_model = model
                best_threshold = float(t)
                best_C = float(C)

    summary_df = pd.DataFrame(rows).sort_values(["f1", "auc"], ascending=[False, False]).reset_index(drop=True)
    if best_model is None:
        raise RuntimeError("Model selection failed.")
    return best_model, best_threshold, summary_df


def evaluate_model(model: Pipeline, threshold: float, test_df: pd.DataFrame, feature_cols: List[str]) -> Dict[str, float]:
    X_test = test_df[feature_cols].to_numpy(dtype=float)
    y_test = test_df["label"].to_numpy(dtype=int)
    prob = model.predict_proba(X_test)[:, 1]
    pred = (prob >= threshold).astype(int)

    return {
        "precision": float(precision_score(y_test, pred, zero_division=0)),
        "recall": float(recall_score(y_test, pred, zero_division=0)),
        "f1": float(f1_score(y_test, pred, zero_division=0)),
        "auc": float(roc_auc_score(y_test, prob)) if len(np.unique(y_test)) == 2 else np.nan,
    }


def summarize_score_separability(df: pd.DataFrame, score_cols: List[str]) -> pd.DataFrame:
    rows = []
    pos = df[df["label"] == 1]
    neg = df[df["label"] == 0]
    for m in score_cols:
        x = pos[m].dropna().to_numpy()
        y = neg[m].dropna().to_numpy()
        valid = df[["label", m]].dropna()
        auc = roc_auc_score(valid["label"], valid[m]) if valid["label"].nunique() == 2 else np.nan
        rows.append({
            "metric": m,
            "positive_mean": float(np.mean(x)) if len(x) else np.nan,
            "negative_mean": float(np.mean(y)) if len(y) else np.nan,
            "mean_gap_pos_minus_neg": float(np.mean(x) - np.mean(y)) if len(x) and len(y) else np.nan,
            "auc": float(auc) if not pd.isna(auc) else np.nan,
        })
    return pd.DataFrame(rows).sort_values("auc", ascending=False).reset_index(drop=True)


# -----------------------------------------------------------------------------
# Main
# -----------------------------------------------------------------------------
def main() -> None:
    trace_root = Path(CONFIG["trace_root"]).resolve()
    manifest_dir = Path(CONFIG["manifest_dir"]).resolve()
    output_root = Path(CONFIG["output_root"]).resolve()
    ensure_dir(output_root)

    print("=" * 100)
    print("TraceSet-LR: trace-only baseline on fixed manifest splits")
    print("=" * 100)
    print(f"Trace root   : {trace_root}")
    print(f"Manifest dir : {manifest_dir}")
    print(f"Output dir   : {output_root}")
    print("-" * 100)

    sample_df = build_sample_index(trace_root)
    if sample_df.empty:
        raise RuntimeError(f"No samples found in {trace_root}")

    print(f"Discovered samples: {len(sample_df)}")
    print(f"Version           : {sample_df['version'].iloc[0]}")
    print("-" * 100)

    # Build one trace-set representation per A
    sample_feat_rows = []
    for _, row in sample_df.iterrows():
        feats = aggregate_trace_set(Path(row["trace_dir"]))
        feats.update({
            "version": row["version"],
            "F_id": row["F_id"],
            "A_id": row["A_id"],
            "rel_id": row["rel_id"],
            "trace_count": row["trace_count"],
        })
        sample_feat_rows.append(feats)
    sample_feat_df = pd.DataFrame(sample_feat_rows)

    # Read fixed pair splits
    pair_df = build_all_pairs(manifest_dir, CONFIG["pair_columns"])

    # Keep only pairs resolvable in this trace root
    valid_ids = set(sample_feat_df["rel_id"].tolist())
    pair_df = pair_df[pair_df["left_id"].isin(valid_ids) & pair_df["right_id"].isin(valid_ids)].copy().reset_index(drop=True)

    print("Resolved pairs by split:")
    print(pair_df.groupby("split")["label"].agg(["count", "sum"]).rename(columns={"sum": "positive_count"}).to_string())
    print("-" * 100)

    # Build learned pair features
    pair_feat_df, feature_cols = build_pair_features(pair_df, sample_feat_df)

    # Score-only separability summary
    score_sep_df = summarize_score_separability(pair_feat_df, ["trace_cosine", "trace_l1_similarity", "combined_score"])
    score_sep_df.to_csv(output_root / "trace_set_lr_score_separability.csv", index=False)

    # Split
    train_df = pair_feat_df[pair_feat_df["split"] == "train"].copy()
    val_df = pair_feat_df[pair_feat_df["split"] == "val"].copy()
    test_df = pair_feat_df[pair_feat_df["split"] == "test"].copy()

    # Train / select
    model, best_threshold, val_select_df = fit_and_select_model(
        train_df=train_df,
        val_df=val_df,
        feature_cols=feature_cols,
        candidate_C=CONFIG["candidate_C"],
        solver=CONFIG["solver"],
        max_iter=CONFIG["max_iter"],
    )

    test_metrics = evaluate_model(model, best_threshold, test_df, feature_cols)

    # Save outputs
    sample_df.to_csv(output_root / "trace_set_lr_sample_index.csv", index=False)
    sample_feat_df.to_csv(output_root / "trace_set_lr_sample_features.csv", index=False)
    pair_df.to_csv(output_root / "trace_set_lr_pairs_from_manifest.csv", index=False)
    pair_feat_df.to_csv(output_root / "trace_set_lr_pair_features.csv", index=False)
    val_select_df.to_csv(output_root / "trace_set_lr_val_selection.csv", index=False)

    test_metrics_df = pd.DataFrame([{
        "version": sample_df["version"].iloc[0],
        "threshold": float(best_threshold),
        **test_metrics,
    }])
    test_metrics_df.to_csv(output_root / "trace_set_lr_test_metrics.csv", index=False)

    run_info = {
        "trace_root": str(trace_root),
        "manifest_dir": str(manifest_dir),
        "version": sample_df["version"].iloc[0],
        "sample_count": int(len(sample_df)),
        "pair_count": int(len(pair_df)),
        "feature_dim": int(len(feature_cols)),
        "candidate_C": CONFIG["candidate_C"],
        "selected_threshold": float(best_threshold),
    }
    with open(output_root / "trace_set_lr_run_info.json", "w", encoding="utf-8") as f:
        json.dump(run_info, f, indent=2, ensure_ascii=False)

    # Print concise final results
    best_row = val_select_df.iloc[0]
    print("Validation-selected setting:")
    print(f"  C         = {best_row['C']}")
    print(f"  threshold = {best_threshold:.6f}")
    print(f"  val P/R/F1/AUC = {best_row['precision']:.4f} / {best_row['recall']:.4f} / {best_row['f1']:.4f} / {best_row['auc']:.4f}")
    print("-" * 100)
    print("Test results (TraceSet-LR):")
    print(f"  Precision = {test_metrics['precision']:.6f}")
    print(f"  Recall    = {test_metrics['recall']:.6f}")
    print(f"  F1        = {test_metrics['f1']:.6f}")
    print(f"  AUC       = {test_metrics['auc']:.6f}")
    print("-" * 100)
    print("Score-only separability (before learning):")
    print(score_sep_df.to_string(index=False))
    print("=" * 100)


if __name__ == "__main__":
    main()
