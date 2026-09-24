#!/usr/bin/env python
# -*- coding: utf-8 -*-

"""
Source+IR+Trace-LR baseline for LGL-DynT4.

Independent baseline. It reads only:
  Data/<View>/Source_Clean/
  Data/<View>/LLVM_IR_Clean/
  Data/<View>/Trace/  (if Obfuscated trace does not exist, Natural trace is reused)
  Manifest/Train_Split.csv, Val_Split.csv, Test_Split.csv

Protocol:
  1) Fit Source / IR / Trace TF-IDF vectorizers on training programs only.
  2) For each modality, build pair features: |v1-v2|, v1*v2, cosine(v1,v2).
  3) Concatenate Source, IR, and Trace pair features.
  4) Train Logistic Regression on train pairs.
  5) Select C and threshold on validation by F1.
  6) Report final test metrics.

Recommended placement:
  baseline/source_ir_trace_fusion_baseline.py

Important notes:
  - IR input uses LLVM_IR_Clean, not raw LLVM IR.
  - Trace input is sanitized before TF-IDF:
      * file names, paths, A/F ids, and labels are not used as model tokens;
      * comment lines such as "# Input Parameters: ..." are skipped;
      * raw_addr is not used;
      * by default, direct INPUT rows are excluded to reduce input-signature shortcuts;
      * retained trace tokens come from loc_id, op, and value of execution events.
  - By default, unresolved pairs raise an error instead of being silently dropped.
"""

from __future__ import annotations

import json
import math
import re
from collections import defaultdict
from io import StringIO
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

SOURCE_DIR_TEMPLATE = "Data/{view}/Source_Clean"
IR_DIR_TEMPLATE = "Data/{view}/LLVM_IR_Clean"
TRACE_DIR_TEMPLATE = "Data/{view}/Trace"
TRACE_FALLBACK_VIEW = "Natural"

MANIFEST_DIR = "Manifest"
SPLIT_FILES = {
    "train": "Train_Split.csv",
    "val": "Val_Split.csv",
    "test": "Test_Split.csv",
    # For diagnostic hard subset evaluation, change only this line:
    # "test": "Test_Split_ASTHard_K105.csv",
}

OUTPUT_DIR = "script_OUTPUTS/source_ir_trace_fusion_baseline"

SOURCE_EXTENSIONS = [".c"]
IR_EXTENSIONS = [".ll"]
TRACE_EXTENSIONS = [".csv", ".txt"]

SOURCE_TFIDF_NGRAM_RANGE = (1, 2)
IR_TFIDF_NGRAM_RANGE = (1, 2)
TRACE_TFIDF_NGRAM_RANGE = (1, 2)

SOURCE_MAX_FEATURES = 50000
IR_MAX_FEATURES = 50000
TRACE_MAX_FEATURES = 50000

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

STRICT_PAIR_RESOLUTION = True

# Trace sanitization
TRACE_INCLUDE_INPUT_EVENTS = False
TRACE_INCLUDE_VALUE_TOKENS = True
TRACE_VALUE_TOKEN_MODE = "raw"  # choices: "raw", "sign", "none"


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
    return [
        f"{a}_{f}",
        f"{a}{f}",
        f"{a.lower()}_{f.lower()}",
        f"{a.lower()}{f.lower()}",
        compact_id(a, f),
    ]


def aliases_for_path(path: Path) -> List[str]:
    stem = path.stem
    out = [stem, stem.lower(), stem.upper()]
    af = extract_af(stem)
    if af:
        out.extend(aliases_from_af(*af))
    return list(dict.fromkeys(out))


def aliases_for_manifest_id(x) -> List[str]:
    s = str(x).strip().replace("\\", "/")
    out = [s, s.lower(), s.upper()]

    # For entries such as F06_IsPrime/A06_F06_S_WilsonTheorem
    stem = Path(s).stem
    out.extend([stem, stem.lower(), stem.upper()])

    if re.fullmatch(r"\d+", s):
        out.append(s.zfill(4))

    af = extract_af(s)
    if af:
        out.extend(aliases_from_af(*af))

    af_stem = extract_af(stem)
    if af_stem:
        out.extend(aliases_from_af(*af_stem))

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


# =============================================================================
# Document loading and cleaning
# =============================================================================

def clean_source_text(text: str) -> str:
    text = re.sub(r"/\*.*?\*/", " ", text, flags=re.S)
    text = re.sub(r"//.*", " ", text)

    lines = []
    for line in text.splitlines():
        if line.lstrip().startswith("#"):
            continue
        lines.append(line)

    return "\n".join(lines)


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


def value_to_token(value_text: str) -> Optional[str]:
    if not TRACE_INCLUDE_VALUE_TOKENS or TRACE_VALUE_TOKEN_MODE == "none":
        return None

    value_text = str(value_text).strip()
    if not value_text:
        return None

    if TRACE_VALUE_TOKEN_MODE == "raw":
        # Keep a conservative token form. Signs and decimal points are normalized
        # so that the vectorizer treats the whole value as a token-like unit.
        safe = re.sub(r"[^0-9A-Za-z_.+-]", "_", value_text)
        safe = safe.replace("-", "neg").replace("+", "pos").replace(".", "p")
        return f"val_{safe}"

    if TRACE_VALUE_TOKEN_MODE == "sign":
        try:
            v = float(value_text)
        except Exception:
            return "val_nonnum"

        if v > 0:
            return "val_pos"
        if v < 0:
            return "val_neg"
        return "val_zero"

    raise ValueError(f"Unsupported TRACE_VALUE_TOKEN_MODE: {TRACE_VALUE_TOKEN_MODE}")


def trace_csv_to_tokens(path: Path) -> str:
    try:
        text = path.read_text(encoding="utf-8", errors="ignore")
    except Exception:
        text = path.read_text(encoding="latin1", errors="ignore")

    try:
        df = pd.read_csv(StringIO(text), comment="#")
    except Exception:
        df = pd.read_csv(StringIO(text), comment="#", encoding="latin1")

    required_cols = {"loc_id", "value", "op"}
    missing = required_cols.difference(df.columns)
    if missing:
        raise ValueError(f"Trace file {path} missing columns: {sorted(missing)}")

    token_lines = []
    for _, row in df.iterrows():
        op = str(row.get("op", "")).strip()

        if not TRACE_INCLUDE_INPUT_EVENTS and op == "INPUT":
            continue

        tokens = []

        loc = str(row.get("loc_id", "")).strip()
        if loc:
            tokens.append(f"loc_{loc}")

        if op:
            tokens.append(f"op_{op}")

        val_token = value_to_token(str(row.get("value", "")).strip())
        if val_token:
            tokens.append(val_token)

        if tokens:
            token_lines.append(" ".join(tokens))

    # Fallback: if a trace contains only INPUT rows and they are excluded,
    # retain op/loc tokens without values to avoid creating an empty document.
    if not token_lines and not df.empty:
        for _, row in df.iterrows():
            op = str(row.get("op", "")).strip()
            loc = str(row.get("loc_id", "")).strip()
            tokens = []
            if loc:
                tokens.append(f"loc_{loc}")
            if op:
                tokens.append(f"op_{op}")
            if tokens:
                token_lines.append(" ".join(tokens))

    return "\n".join(token_lines)


def load_single_file_documents(root: Path, extensions: List[str], cleaner) -> Tuple[Dict[str, str], Dict[str, str]]:
    files = []
    for ext in extensions:
        files.extend(root.rglob(f"*{ext}"))
    files = sorted(files)

    if not files:
        raise FileNotFoundError(f"No files found under {root} with extensions {extensions}")

    docs, alias_to_primary = {}, {}

    for path in files:
        af = extract_af(path.stem)
        primary = f"{af[0]}_{af[1]}" if af else path.stem

        docs[primary] = cleaner(path.read_text(encoding="utf-8", errors="ignore"))

        for a in aliases_for_path(path):
            alias_to_primary.setdefault(a, primary)

    return docs, alias_to_primary


def load_trace_documents(trace_root: Path) -> Tuple[Dict[str, str], Dict[str, str]]:
    files = []
    for ext in TRACE_EXTENSIONS:
        files.extend(trace_root.rglob(f"*{ext}"))
    files = sorted(files)

    if not files:
        raise FileNotFoundError(f"No trace files found under {trace_root} with extensions {TRACE_EXTENSIONS}")

    grouped = defaultdict(list)

    for path in files:
        af = extract_af(path.stem)
        if not af:
            continue

        primary = f"{af[0]}_{af[1]}"
        grouped[primary].append(trace_csv_to_tokens(path))

    if not grouped:
        raise RuntimeError(f"No trace files with Axx/Fxx identifiers were resolved under {trace_root}")

    docs = {pid: "\n".join(parts) for pid, parts in grouped.items()}

    alias_to_primary = {}
    for pid in docs:
        a, f = pid.split("_")
        for alias in aliases_from_af(a, f):
            alias_to_primary.setdefault(alias, pid)

    return docs, alias_to_primary


def merge_alias_maps(*maps: Dict[str, str]) -> Dict[str, str]:
    merged = {}
    for m in maps:
        for k, v in m.items():
            merged.setdefault(k, v)
    return merged


def collect_pair_ids(df: pd.DataFrame, alias_to_primary: Dict[str, str]) -> List[str]:
    ids = []
    for col in ["algorithm1", "algorithm2"]:
        for x in df[col].tolist():
            rid = resolve_id(x, alias_to_primary)
            if rid is not None:
                ids.append(rid)
    return sorted(set(ids))


def fit_tfidf(docs: Dict[str, str], train_ids: List[str], ngram_range, max_features):
    train_docs = [docs[i] for i in train_ids if i in docs]
    if not train_docs:
        raise RuntimeError("No training documents available for TF-IDF fitting.")

    vectorizer = TfidfVectorizer(
        token_pattern=r"(?u)\b\w+\b|[^\s\w]",
        ngram_range=ngram_range,
        max_features=max_features,
        min_df=TFIDF_MIN_DF,
        max_df=TFIDF_MAX_DF,
        lowercase=TFIDF_LOWERCASE,
        sublinear_tf=TFIDF_SUBLINEAR_TF,
        norm="l2",
    )
    vectorizer.fit(train_docs)

    ids = sorted(docs.keys())
    matrix = vectorizer.transform([docs[i] for i in ids])
    id_to_row = {pid: i for i, pid in enumerate(ids)}

    return vectorizer, matrix, id_to_row


# =============================================================================
# Pair features and metrics
# =============================================================================

def build_pair_features_for_modality(df, matrix, id_to_row, alias_to_primary):
    left, right, kept = [], [], []
    unresolved = []

    for idx, r in df.iterrows():
        id1 = resolve_id(r["algorithm1"], alias_to_primary)
        id2 = resolve_id(r["algorithm2"], alias_to_primary)

        if id1 is None or id2 is None or id1 not in id_to_row or id2 not in id_to_row:
            unresolved.append((idx, r["algorithm1"], r["algorithm2"], id1, id2))
            continue

        left.append(id_to_row[id1])
        right.append(id_to_row[id2])
        kept.append(idx)

    if unresolved and STRICT_PAIR_RESOLUTION:
        preview = "\n".join(map(str, unresolved[:20]))
        raise RuntimeError(f"Unresolved pairs for one modality: {len(unresolved)}\nPreview:\n{preview}")

    if unresolved:
        print(f"[WARN] skipped unresolved pairs for one modality: {len(unresolved)}")

    x1 = matrix[left]
    x2 = matrix[right]

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

    return hstack(parts).tocsr(), kept


def build_fusion_pair_features(df, modalities, alias_to_primary):
    kept_sets = []
    for m in modalities:
        _, kept = build_pair_features_for_modality(df, m["matrix"], m["id_to_row"], alias_to_primary)
        kept_sets.append(set(kept))

    common = sorted(set.intersection(*kept_sets))

    if len(common) != len(df):
        msg = f"Unresolved pairs due to missing modality files: {len(df) - len(common)}"
        if STRICT_PAIR_RESOLUTION:
            missing = sorted(set(df.index.tolist()) - set(common))
            preview = df.loc[missing[:20], ["algorithm1", "algorithm2", "label_bin"]].to_string(index=False)
            raise RuntimeError(msg + "\nPreview:\n" + preview)
        print(f"[WARN] {msg}")

    common_df = df.loc[common].copy().reset_index(drop=True)

    parts = []
    for m in modalities:
        x, _ = build_pair_features_for_modality(common_df, m["matrix"], m["id_to_row"], alias_to_primary)
        parts.append(x)

    return hstack(parts).tocsr(), common_df["label_bin"].values.astype(int), common_df


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

    return {
        "threshold": float(threshold),
        "n": int(n),
        "positive_n": int((y == 1).sum()),
        "negative_n": int((y == 0).sum()),
        "accuracy": float(acc),
        "precision": float(precision),
        "recall": float(recall),
        "specificity": float(specificity),
        "f1": float(f1),
        "balanced_accuracy": float(bal),
        "tp": tp,
        "tn": tn,
        "fp": fp,
        "fn": fn,
        "auc": auc,
        "pr_auc": pr_auc,
    }


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


# =============================================================================
# Experiment
# =============================================================================

def run_view(view, root, manifests, outdir):
    source_docs, source_alias = load_single_file_documents(
        root / SOURCE_DIR_TEMPLATE.format(view=view),
        SOURCE_EXTENSIONS,
        clean_source_text,
    )

    ir_docs, ir_alias = load_single_file_documents(
        root / IR_DIR_TEMPLATE.format(view=view),
        IR_EXTENSIONS,
        clean_ir_text,
    )

    trace_root = root / TRACE_DIR_TEMPLATE.format(view=view)
    trace_view_used = view
    if not trace_root.exists():
        trace_root = root / TRACE_DIR_TEMPLATE.format(view=TRACE_FALLBACK_VIEW)
        trace_view_used = TRACE_FALLBACK_VIEW

    trace_docs, trace_alias = load_trace_documents(trace_root)

    alias_to_primary = merge_alias_maps(source_alias, ir_alias, trace_alias)
    train_ids = collect_pair_ids(manifests["train"], alias_to_primary)

    _, source_mat, source_rows = fit_tfidf(source_docs, train_ids, SOURCE_TFIDF_NGRAM_RANGE, SOURCE_MAX_FEATURES)
    _, ir_mat, ir_rows = fit_tfidf(ir_docs, train_ids, IR_TFIDF_NGRAM_RANGE, IR_MAX_FEATURES)
    _, trace_mat, trace_rows = fit_tfidf(trace_docs, train_ids, TRACE_TFIDF_NGRAM_RANGE, TRACE_MAX_FEATURES)

    modalities = [
        {"name": "source", "matrix": source_mat, "id_to_row": source_rows},
        {"name": "ir", "matrix": ir_mat, "id_to_row": ir_rows},
        {"name": "trace", "matrix": trace_mat, "id_to_row": trace_rows},
    ]

    x_train, y_train, _ = build_fusion_pair_features(manifests["train"], modalities, alias_to_primary)
    x_val, y_val, _ = build_fusion_pair_features(manifests["val"], modalities, alias_to_primary)
    x_test, y_test, meta_test = build_fusion_pair_features(manifests["test"], modalities, alias_to_primary)

    c, th, clf, val_m, test_m, test_scores, sel = train_select_eval(x_train, y_train, x_val, y_val, x_test, y_test)

    if SAVE_MODEL_SELECTION:
        sel.insert(0, "view", view)
        sel.to_csv(outdir / f"sit_fusion_model_selection_{view.lower()}.csv", index=False, encoding="utf-8-sig")

    if SAVE_PAIR_SCORES:
        pred = meta_test.copy()
        pred["score"] = test_scores
        pred["threshold"] = th
        pred["pred"] = (test_scores >= th).astype(int)
        pred.to_csv(outdir / f"sit_fusion_test_predictions_{view.lower()}.csv", index=False, encoding="utf-8-sig")

    res = dict(test_m)
    res.update({
        "baseline": "Source+IR+Trace-LR",
        "view": view,
        "C": c,
        "threshold": th,
        "threshold_source": "validation",
        "threshold_selection_metric": THRESHOLD_SELECTION_METRIC,
        "source_docs": len(source_docs),
        "ir_docs": len(ir_docs),
        "trace_docs": len(trace_docs),
        "trace_view_used": trace_view_used,
        "source_tfidf_features": int(source_mat.shape[1]),
        "ir_tfidf_features": int(ir_mat.shape[1]),
        "trace_tfidf_features": int(trace_mat.shape[1]),
        "pair_feature_dim": int(x_train.shape[1]),
        "val_f1": val_m["f1"],
    })

    return res


def main():
    root = detect_project_root()
    outdir = root / OUTPUT_DIR
    outdir.mkdir(parents=True, exist_ok=True)

    print("=" * 88)
    print("Source+IR+Trace-LR baseline")
    print("=" * 88)
    print(f"Project root              : {root}")
    print(f"Views                     : {VIEWS}")
    print(f"Output dir                : {outdir}")
    print(f"IR dir template           : {IR_DIR_TEMPLATE}")
    print(f"Trace include input events: {TRACE_INCLUDE_INPUT_EVENTS}")
    print(f"Trace value token mode    : {TRACE_VALUE_TOKEN_MODE}")
    print(f"Strict pair resolution    : {STRICT_PAIR_RESOLUTION}")
    print("=" * 88)

    manifests = {k: load_manifest(root / MANIFEST_DIR / v) for k, v in SPLIT_FILES.items()}

    results = []
    for view in VIEWS:
        print(f"\n[View] {view}")
        r = run_view(view, root, manifests, outdir)
        results.append(r)

        print(
            f"  Acc={r['accuracy']:.4f} | P={r['precision']:.4f} | "
            f"R={r['recall']:.4f} | F1={r['f1']:.4f} | "
            f"AUC={r['auc']:.4f} | PR-AUC={r['pr_auc']:.4f} | "
            f"C={r['C']} | th={r['threshold']:.6f} | trace={r['trace_view_used']}"
        )

    df = pd.DataFrame(results)
    cols = [
        "baseline", "view", "accuracy", "precision", "recall", "specificity",
        "f1", "balanced_accuracy", "auc", "pr_auc", "C", "threshold",
        "threshold_source", "threshold_selection_metric", "n", "positive_n",
        "negative_n", "tp", "tn", "fp", "fn", "source_docs", "ir_docs",
        "trace_docs", "trace_view_used", "source_tfidf_features",
        "ir_tfidf_features", "trace_tfidf_features", "pair_feature_dim", "val_f1",
    ]
    df = df[cols]
    df.to_csv(outdir / "source_ir_trace_fusion_results.csv", index=False, encoding="utf-8-sig")

    report = {
        "project_root": str(root),
        "baseline": "Source+IR+Trace-LR",
        "inputs": {
            "source_dir_template": SOURCE_DIR_TEMPLATE,
            "ir_dir_template": IR_DIR_TEMPLATE,
            "trace_dir_template": TRACE_DIR_TEMPLATE,
            "trace_fallback_view": TRACE_FALLBACK_VIEW,
            "manifest_dir": MANIFEST_DIR,
            "split_files": SPLIT_FILES,
        },
        "trace_sanitization": {
            "raw_addr_used": False,
            "comment_lines_used": False,
            "file_names_used_as_tokens": False,
            "trace_include_input_events": TRACE_INCLUDE_INPUT_EVENTS,
            "trace_include_value_tokens": TRACE_INCLUDE_VALUE_TOKENS,
            "trace_value_token_mode": TRACE_VALUE_TOKEN_MODE,
        },
        "independence_note": "This script reads only Source_Clean, LLVM_IR_Clean, sanitized Trace, and Manifest split files.",
        "results": results,
    }

    with open(outdir / "source_ir_trace_fusion_report.json", "w", encoding="utf-8") as f:
        json.dump(report, f, indent=2, ensure_ascii=False)

    print("\nSaved to:", outdir)


if __name__ == "__main__":
    main()