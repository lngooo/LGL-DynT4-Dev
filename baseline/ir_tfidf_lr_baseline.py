#!/usr/bin/env python
# -*- coding: utf-8 -*-
"""
IR-TFIDF-LR baseline for LGL-DynT4.

Independent baseline. It reads only:
  Data/<View>/LLVM_IR/
  Manifest/Train_Split.csv, Val_Split.csv, Test_Split.csv

Protocol:
  1) Fit TF-IDF on training programs only.
  2) Build pair features: |v1-v2|, v1*v2, cosine(v1,v2).
  3) Train Logistic Regression on train pairs.
  4) Select C and threshold on validation by F1.
  5) Report final test metrics.

Recommended placement:
  baseline/ir_tfidf_lr_baseline.py
"""

from __future__ import annotations

import json
import math
import re
from pathlib import Path
from typing import Dict, List, Optional, Tuple

import numpy as np
import pandas as pd
from scipy.sparse import csr_matrix, hstack
from sklearn.feature_extraction.text import TfidfVectorizer
from sklearn.linear_model import LogisticRegression
from sklearn.metrics import average_precision_score, roc_auc_score


# =============================================================================
# Configuration
# =============================================================================

PROJECT_ROOT = None

VIEWS = ["Natural", "Obfuscated"]

IR_DIR_TEMPLATE = "Data/{view}/LLVM_IR_Clean"
MANIFEST_DIR = "Manifest"
SPLIT_FILES = {
    "train": "Train_Split.csv",
    "val": "Val_Split.csv",
    "test": "Test_Split.csv",
}

OUTPUT_DIR = "script_OUTPUTS/ir_tfidf_lr_baseline"

IR_EXTENSIONS = [".ll"]

TFIDF_NGRAM_RANGE = (1, 2)
TFIDF_MAX_FEATURES = 50000
TFIDF_MIN_DF = 1
TFIDF_MAX_DF = 1.0
TFIDF_SUBLINEAR_TF = True
TFIDF_LOWERCASE = False

USE_ABS_DIFF = True
USE_ELEMENTWISE_PRODUCT = True
USE_COSINE_FEATURE = True

C_VALUES = [0.01, 0.1, 1.0, 10.0]
MAX_ITER = 2000
RANDOM_STATE = 42

THRESHOLD_SELECTION_METRIC = "f1"
USE_UNIQUE_VALIDATION_PROBAS = True
THRESHOLD_GRID_SIZE = 1001

SAVE_PAIR_SCORES = True
SAVE_MODEL_SELECTION = True


# =============================================================================
# ID and file utilities
# =============================================================================

A_RE = re.compile(r"(A\d{2})", re.IGNORECASE)
F_RE = re.compile(r"(F\d{2})", re.IGNORECASE)
AF_RE = re.compile(r"(A\d{2})[_-]?(F\d{2})", re.IGNORECASE)


def detect_project_root() -> Path:
    if PROJECT_ROOT is not None:
        return Path(PROJECT_ROOT).resolve()
    here = Path(__file__).resolve()
    for p in [here.parent] + list(here.parents):
        if (p / "Data").exists() and (p / "Manifest").exists():
            return p
    return Path.cwd().resolve()


def compact_id(a: str, f: str) -> str:
    return f"{a.upper()[1:]}{f.upper()[1:]}"


def extract_af(text: str) -> Optional[Tuple[str, str]]:
    m = AF_RE.search(text)
    if m:
        return m.group(1).upper(), m.group(2).upper()
    ma, mf = A_RE.search(text), F_RE.search(text)
    if ma and mf:
        return ma.group(1).upper(), mf.group(1).upper()
    return None


def aliases_from_af(a: str, f: str) -> List[str]:
    a, f = a.upper(), f.upper()
    return [f"{a}_{f}", f"{a}{f}", f"{a.lower()}_{f.lower()}", f"{a.lower()}{f.lower()}", compact_id(a, f)]


def aliases_for_path(path: Path) -> List[str]:
    stem = path.stem
    out = [stem, stem.lower(), stem.upper()]
    af = extract_af(stem)
    if af:
        out.extend(aliases_from_af(*af))
    return list(dict.fromkeys(out))


def aliases_for_manifest_id(x) -> List[str]:
    s = str(x).strip()
    out = [s, s.lower(), s.upper()]
    if re.fullmatch(r"\d+", s):
        out.append(s.zfill(4))
    af = extract_af(s)
    if af:
        out.extend(aliases_from_af(*af))
    return list(dict.fromkeys(out))


def resolve_id(x, alias_to_primary: Dict[str, str]) -> Optional[str]:
    for a in aliases_for_manifest_id(x):
        if a in alias_to_primary:
            return alias_to_primary[a]
    return None


def normalize_label(x) -> int:
    try:
        v = int(x)
    except Exception:
        s = str(x).strip().lower()
        if s in {"1", "clone", "positive", "pos", "true"}:
            return 1
        if s in {"0", "2", "nonclone", "non-clone", "negative", "neg", "false"}:
            return 0
        raise ValueError(f"Cannot parse label: {x}")
    if v == 1:
        return 1
    if v in {0, 2}:
        return 0
    raise ValueError(f"Unsupported label value: {x}")


def infer_manifest_columns(df: pd.DataFrame) -> Tuple[str, str, str]:
    lower = {c.lower(): c for c in df.columns}
    c1 = next((lower[c] for c in ["algorithm1", "id1", "program1", "code1", "file1", "a"] if c in lower), None)
    c2 = next((lower[c] for c in ["algorithm2", "id2", "program2", "code2", "file2", "b"] if c in lower), None)
    cl = next((lower[c] for c in ["label", "target", "y", "clone"] if c in lower), None)
    if c1 is None or c2 is None or cl is None:
        raise ValueError(f"Cannot infer manifest columns from {list(df.columns)}")
    return c1, c2, cl


def load_manifest(path: Path) -> pd.DataFrame:
    df = pd.read_csv(path)
    c1, c2, cl = infer_manifest_columns(df)
    out = pd.DataFrame()
    out["algorithm1"] = df[c1].astype(str)
    out["algorithm2"] = df[c2].astype(str)
    out["label_original"] = df[cl]
    out["label_bin"] = out["label_original"].apply(normalize_label).astype(int)
    return out


def clean_ir_text(text: str) -> str:
    lines = []
    for line in text.splitlines():
        if ";" in line:
            line = line.split(";", 1)[0]
        line = line.strip()
        if not line:
            continue
        if line.startswith(("source_filename", "target datalayout", "target triple", "attributes #", "!")):
            continue
        lines.append(line)
    return "\n".join(lines)


def load_ir_documents(ir_root: Path) -> Tuple[Dict[str, str], Dict[str, str]]:
    files = []
    for ext in IR_EXTENSIONS:
        files.extend(ir_root.rglob(f"*{ext}"))
    files = sorted(files)
    if not files:
        raise FileNotFoundError(f"No IR files found under {ir_root}")

    docs, alias_to_primary = {}, {}
    for path in files:
        af = extract_af(path.stem)
        primary = f"{af[0]}_{af[1]}" if af else path.stem
        docs[primary] = clean_ir_text(path.read_text(encoding="utf-8", errors="ignore"))
        for a in aliases_for_path(path):
            alias_to_primary.setdefault(a, primary)
    return docs, alias_to_primary


def collect_pair_ids(df: pd.DataFrame, alias_to_primary: Dict[str, str]) -> List[str]:
    ids = []
    for col in ["algorithm1", "algorithm2"]:
        for x in df[col].tolist():
            rid = resolve_id(x, alias_to_primary)
            if rid is not None:
                ids.append(rid)
    return sorted(set(ids))


# =============================================================================
# Features and metrics
# =============================================================================


def build_pair_features(df, matrix, id_to_row, alias_to_primary):
    left, right, kept = [], [], []
    for idx, r in df.iterrows():
        id1 = resolve_id(r["algorithm1"], alias_to_primary)
        id2 = resolve_id(r["algorithm2"], alias_to_primary)
        if id1 is None or id2 is None or id1 not in id_to_row or id2 not in id_to_row:
            continue
        left.append(id_to_row[id1])
        right.append(id_to_row[id2])
        kept.append(idx)

    if len(kept) != len(df):
        print(f"[WARN] skipped unresolved pairs: {len(df)-len(kept)}")

    x1, x2 = matrix[left], matrix[right]
    parts = []
    if USE_ABS_DIFF:
        d = x1 - x2
        d.data = np.abs(d.data)
        parts.append(d.tocsr())
    if USE_ELEMENTWISE_PRODUCT:
        parts.append(x1.multiply(x2).tocsr())
    if USE_COSINE_FEATURE:
        cos = np.asarray(x1.multiply(x2).sum(axis=1)).ravel()
        parts.append(csr_matrix(cos.reshape(-1, 1)))

    return hstack(parts).tocsr(), df.loc[kept, "label_bin"].values.astype(int), df.loc[kept].reset_index(drop=True)


def metrics_at_threshold(y_true, scores, threshold: float) -> Dict:
    y = np.asarray(y_true).astype(int)
    s = np.asarray(scores).astype(float)
    pred = (s >= threshold).astype(int)
    tp = int(((pred == 1) & (y == 1)).sum())
    tn = int(((pred == 0) & (y == 0)).sum())
    fp = int(((pred == 1) & (y == 0)).sum())
    fn = int(((pred == 0) & (y == 1)).sum())
    n = len(y)
    acc = (tp + tn) / n if n else 0.0
    precision = tp / (tp + fp) if tp + fp else 0.0
    recall = tp / (tp + fn) if tp + fn else 0.0
    specificity = tn / (tn + fp) if tn + fp else 0.0
    f1 = 2 * precision * recall / (precision + recall) if precision + recall else 0.0
    bal = (recall + specificity) / 2.0
    auc = float(roc_auc_score(y, s)) if len(set(y)) == 2 else None
    pr_auc = float(average_precision_score(y, s)) if len(set(y)) == 2 else None
    return {"threshold": float(threshold), "n": int(n), "positive_n": int((y == 1).sum()), "negative_n": int((y == 0).sum()), "accuracy": float(acc), "precision": float(precision), "recall": float(recall), "specificity": float(specificity), "f1": float(f1), "balanced_accuracy": float(bal), "tp": tp, "tn": tn, "fp": fp, "fn": fn, "auc": auc, "pr_auc": pr_auc}


def threshold_candidates(scores):
    scores = np.asarray(scores).astype(float)
    if USE_UNIQUE_VALIDATION_PROBAS:
        u = np.unique(scores)
        return np.array(sorted(set(list(u) + [float(u.min()) - 1e-12, float(u.max()) + 1e-12])))
    return np.linspace(0.0, 1.0, THRESHOLD_GRID_SIZE)


def select_threshold(y_val, scores_val):
    best, rows = None, []
    for th in threshold_candidates(scores_val):
        m = metrics_at_threshold(y_val, scores_val, th)
        rows.append(m)
        if best is None or m[THRESHOLD_SELECTION_METRIC] > best[THRESHOLD_SELECTION_METRIC] + 1e-15:
            best = m
        elif math.isclose(m[THRESHOLD_SELECTION_METRIC], best[THRESHOLD_SELECTION_METRIC], abs_tol=1e-15):
            if m["balanced_accuracy"] > best["balanced_accuracy"] + 1e-15:
                best = m
            elif math.isclose(m["balanced_accuracy"], best["balanced_accuracy"], abs_tol=1e-15) and m["precision"] > best["precision"]:
                best = m
    return best["threshold"], best, pd.DataFrame(rows)


def train_select_eval(x_train, y_train, x_val, y_val, x_test, y_test):
    selection_rows, best = [], None
    for c in C_VALUES:
        clf = LogisticRegression(C=c, solver="liblinear", max_iter=MAX_ITER, random_state=RANDOM_STATE)
        clf.fit(x_train, y_train)
        val_scores = clf.predict_proba(x_val)[:, 1]
        th, val_m, _ = select_threshold(y_val, val_scores)
        val_m.update({"C": c, "selection_split": "val"})
        selection_rows.append(val_m)
        if best is None or val_m["f1"] > best[3]["f1"] + 1e-15:
            best = (c, th, clf, val_m)
        elif math.isclose(val_m["f1"], best[3]["f1"], abs_tol=1e-15) and val_m["balanced_accuracy"] > best[3]["balanced_accuracy"]:
            best = (c, th, clf, val_m)
    c, th, clf, val_m = best
    test_scores = clf.predict_proba(x_test)[:, 1]
    test_m = metrics_at_threshold(y_test, test_scores, th)
    return c, th, clf, val_m, test_m, test_scores, pd.DataFrame(selection_rows)


def run_view(view, root, manifests, outdir):
    docs, alias_to_primary = load_ir_documents(root / IR_DIR_TEMPLATE.format(view=view))
    train_ids = collect_pair_ids(manifests["train"], alias_to_primary)
    vectorizer = TfidfVectorizer(token_pattern=r"(?u)\b\w+\b|[^\s\w]", ngram_range=TFIDF_NGRAM_RANGE, max_features=TFIDF_MAX_FEATURES, min_df=TFIDF_MIN_DF, max_df=TFIDF_MAX_DF, lowercase=TFIDF_LOWERCASE, sublinear_tf=TFIDF_SUBLINEAR_TF, norm="l2")
    vectorizer.fit([docs[i] for i in train_ids if i in docs])
    all_ids = sorted(docs.keys())
    matrix = vectorizer.transform([docs[i] for i in all_ids])
    id_to_row = {pid: i for i, pid in enumerate(all_ids)}

    x_train, y_train, _ = build_pair_features(manifests["train"], matrix, id_to_row, alias_to_primary)
    x_val, y_val, _ = build_pair_features(manifests["val"], matrix, id_to_row, alias_to_primary)
    x_test, y_test, meta_test = build_pair_features(manifests["test"], matrix, id_to_row, alias_to_primary)
    c, th, clf, val_m, test_m, test_scores, sel = train_select_eval(x_train, y_train, x_val, y_val, x_test, y_test)

    if SAVE_MODEL_SELECTION:
        sel.insert(0, "view", view)
        sel.to_csv(outdir / f"ir_model_selection_{view.lower()}.csv", index=False, encoding="utf-8-sig")
    if SAVE_PAIR_SCORES:
        pred = meta_test.copy()
        pred["score"] = test_scores
        pred["threshold"] = th
        pred["pred"] = (test_scores >= th).astype(int)
        pred.to_csv(outdir / f"ir_test_predictions_{view.lower()}.csv", index=False, encoding="utf-8-sig")

    res = dict(test_m)
    res.update({"baseline": "IR-TFIDF-LR", "view": view, "C": c, "threshold": th, "threshold_source": "validation", "threshold_selection_metric": THRESHOLD_SELECTION_METRIC, "tfidf_ngram_range": str(TFIDF_NGRAM_RANGE), "tfidf_max_features": TFIDF_MAX_FEATURES, "num_ir_docs": len(docs), "num_tfidf_features": int(matrix.shape[1]), "pair_feature_dim": int(x_train.shape[1]), "val_f1": val_m["f1"]})
    return res


def main():
    root = detect_project_root()
    outdir = root / OUTPUT_DIR
    outdir.mkdir(parents=True, exist_ok=True)
    print("=" * 88)
    print("IR-TFIDF-LR baseline")
    print("=" * 88)
    print(f"Project root: {root}")
    print(f"Views       : {VIEWS}")
    print(f"Output dir  : {outdir}")
    manifests = {k: load_manifest(root / MANIFEST_DIR / v) for k, v in SPLIT_FILES.items()}
    results = []
    for view in VIEWS:
        print(f"\n[View] {view}")
        r = run_view(view, root, manifests, outdir)
        results.append(r)
        print(f"  Acc={r['accuracy']:.4f} | P={r['precision']:.4f} | R={r['recall']:.4f} | F1={r['f1']:.4f} | AUC={r['auc']:.4f} | PR-AUC={r['pr_auc']:.4f} | C={r['C']} | th={r['threshold']:.6f}")
    df = pd.DataFrame(results)
    cols = ["baseline", "view", "accuracy", "precision", "recall", "specificity", "f1", "balanced_accuracy", "auc", "pr_auc", "C", "threshold", "threshold_source", "threshold_selection_metric", "n", "positive_n", "negative_n", "tp", "tn", "fp", "fn", "num_ir_docs", "num_tfidf_features", "pair_feature_dim", "val_f1"]
    df = df[cols]
    df.to_csv(outdir / "ir_tfidf_lr_results.csv", index=False, encoding="utf-8-sig")
    with open(outdir / "ir_tfidf_lr_report.json", "w", encoding="utf-8") as f:
        json.dump({"project_root": str(root), "baseline": "IR-TFIDF-LR", "inputs": {"ir_dir_template": IR_DIR_TEMPLATE, "manifest_dir": MANIFEST_DIR, "split_files": SPLIT_FILES}, "independence_note": "This script reads only LLVM IR files and Manifest split files.", "results": results}, f, indent=2, ensure_ascii=False)
    print("\nSaved to:", outdir)


if __name__ == "__main__":
    main()
