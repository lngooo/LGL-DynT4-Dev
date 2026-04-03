#!/usr/bin/env python3
# -*- coding: utf-8 -*-

"""
Static lexical hardness analysis for LGL-DynT4, with support for body-only views.

Why this script exists
----------------------
In LGL-DynT4, Source_Clean explicitly normalizes names and the dataset curation
checks unified method names and input/output identifiers. This can make
full-function lexical statistics optimistic, especially for Natural. This script
therefore supports body-only analysis to reduce the influence of canonicalized
function signatures and other header-level lexical anchors.

Main characteristics
--------------------
1. Natural and Obf are analyzed independently.
2. No combined / cross-version analysis.
3. Output filenames are prefixed by both job name and analysis view, e.g.
   - natural_full_function_pair_metrics.csv
   - natural_body_only_pair_metrics.csv
   - obf_body_only_metric_separability.csv
4. Main CSV files keep short identifiers only.
5. Long absolute paths are stored only in <prefix>_run_info.json.

Recommended first use
---------------------
Set analysis_views to:
    ["full_function", "body_only"]
Then compare Natural / Obf under the two views.

Typical code roots
------------------
/path/to/LGL-DynT4/Data/Natural/Source_Clean
/path/to/LGL-DynT4/Data/Obf/Source_Clean
"""

from __future__ import annotations

import difflib
import itertools
import json
import math
import random
import re
from dataclasses import asdict, dataclass
from pathlib import Path
from typing import Dict, List, Optional, Sequence, Tuple

import matplotlib.pyplot as plt
import numpy as np
import pandas as pd
from sklearn.feature_extraction.text import TfidfVectorizer
from sklearn.metrics import roc_auc_score


# =============================================================================
# CONFIG
# =============================================================================

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

    # One output directory. Files are distinguished by <job>_<view>_ prefixes.
    "output_root": r"../script_OUTPUTS/lexical_gap_body_only",

    # Supported lexical views:
    #   - full_function: analyze the full code file
    #   - body_only: analyze only the outermost function body
    #   - body_only_anonymized: function body with identifiers replaced by ID
    "analysis_views": ["full_function", "body_only"],

    # For Source_Clean / Source_Raw use .c.
    "allowed_exts": [".c"],

    # Negative sampling ratio relative to #positive pairs.
    "negative_ratio": 1.0,

    # Reproducibility.
    "random_seed": 42,

    # Optional debug limits.
    "max_files_per_f": None,   # e.g. 5
    "max_pairs": None,         # e.g. 2000

    # Plot settings.
    "plot_bins": 50,
    "save_plots": True,

    # If True, write per-file transformed text used by the current analysis view.
    "dump_transformed_samples": False,
}


# =============================================================================
# CONSTANTS
# =============================================================================

C_KEYWORDS = {
    "auto", "break", "case", "char", "const", "continue", "default", "do",
    "double", "else", "enum", "extern", "float", "for", "goto", "if", "inline",
    "int", "long", "register", "restrict", "return", "short", "signed",
    "sizeof", "static", "struct", "switch", "typedef", "union", "unsigned",
    "void", "volatile", "while", "_Bool", "_Complex", "_Imaginary",
}

OPERATORS = [
    ">>=", "<<=", "++", "--", "->", "+=", "-=", "*=", "/=", "%=", "&=", "|=",
    "^=", "==", "!=", "<=", ">=", "&&", "||", "<<", ">>",
    "+", "-", "*", "/", "%", "=", "<", ">", "!", "&", "|", "^", "~", "?",
    ":", ".", ",", ";", "(", ")", "{", "}", "[", "]",
]
OPERATORS_SORTED = sorted(OPERATORS, key=len, reverse=True)
OPERATORS_RE = re.compile("|".join(re.escape(op) for op in OPERATORS_SORTED))

COMMENT_RE = re.compile(r"//.*?$|/\*.*?\*/", flags=re.MULTILINE | re.DOTALL)
STRING_RE = re.compile(r'"([^"\\]|\\.)*"')
CHAR_RE = re.compile(r"'([^'\\]|\\.)*'")
IDENT_RE = re.compile(r"\b[_A-Za-z][_A-Za-z0-9]*\b")
NUMBER_RE = re.compile(r"\b(?:0x[0-9A-Fa-f]+|\d+(?:\.\d+)?)\b")
F_ID_RE = re.compile(r"(F\d+)", flags=re.IGNORECASE)
A_ID_RE = re.compile(r"(A\d+)", flags=re.IGNORECASE)

METRIC_COLUMNS = [
    "token_jaccard",
    "identifier_jaccard",
    "keyword_jaccard",
    "operator_jaccard",
    "token_overlap_coef",
    "token_seq_similarity",
    "token_length_ratio",
    "tfidf_cosine",
]

PLOT_METRICS = [
    "token_jaccard",
    "identifier_jaccard",
    "token_seq_similarity",
    "tfidf_cosine",
    "token_overlap_coef",
]

ALLOWED_VIEWS = {"full_function", "body_only", "body_only_anonymized"}


# =============================================================================
# DATA CLASSES
# =============================================================================

@dataclass(frozen=True)
class Sample:
    job_name: str
    version: str
    modality: str
    F_id: str
    A_id: str
    file_name: str
    rel_key: str


@dataclass(frozen=True)
class PairRecord:
    job_name: str
    version: str
    modality: str
    analysis_view: str
    left_rel_key: str
    right_rel_key: str
    left_F_id: str
    right_F_id: str
    left_A_id: str
    right_A_id: str
    label: int
    pair_type: str


# =============================================================================
# BASIC UTILS
# =============================================================================

def ensure_dir(path: Path) -> None:
    path.mkdir(parents=True, exist_ok=True)


def read_text(path: Path) -> str:
    return path.read_text(encoding="utf-8", errors="ignore")


def canonical_id(value: str) -> str:
    value = value.strip()
    if not value:
        return value
    return value[0].upper() + value[1:]


def safe_stats(values: Sequence[float]) -> Dict[str, float]:
    values = list(values)
    if not values:
        return {
            "count": 0,
            "mean": float("nan"),
            "median": float("nan"),
            "std": float("nan"),
            "q25": float("nan"),
            "q75": float("nan"),
        }
    arr = np.asarray(values)
    return {
        "count": int(len(arr)),
        "mean": float(np.mean(arr)),
        "median": float(np.median(arr)),
        "std": float(np.std(arr)),
        "q25": float(np.quantile(arr, 0.25)),
        "q75": float(np.quantile(arr, 0.75)),
    }


# =============================================================================
# CODE NORMALIZATION / VIEWS
# =============================================================================

def remove_comments_and_strings(code: str) -> str:
    code = COMMENT_RE.sub(" ", code)
    code = STRING_RE.sub(" STR_LITERAL ", code)
    code = CHAR_RE.sub(" CHAR_LITERAL ", code)
    return code


def find_outer_function_span(code: str) -> Optional[Tuple[int, int, int, int]]:
    """
    Heuristically find the outermost function span.
    Returns (sig_start, body_open, body_close, file_end_index_exclusive).
    For Source_Clean this is usually reliable because each file normally contains
    one core function.
    """
    cleaned = remove_comments_and_strings(code)
    open_idx = cleaned.find("{")
    if open_idx < 0:
        return None

    depth = 0
    close_idx = None
    for i in range(open_idx, len(cleaned)):
        ch = cleaned[i]
        if ch == "{":
            depth += 1
        elif ch == "}":
            depth -= 1
            if depth == 0:
                close_idx = i
                break
    if close_idx is None:
        return None

    # Heuristic signature start: walk backwards to previous semicolon or brace.
    sig_start = 0
    for i in range(open_idx - 1, -1, -1):
        if cleaned[i] in ";}":
            sig_start = i + 1
            break
    return sig_start, open_idx, close_idx, close_idx + 1


def extract_body_only(code: str) -> str:
    span = find_outer_function_span(code)
    if span is None:
        return code
    _, body_open, body_close, _ = span
    return code[body_open + 1: body_close]


def anonymize_identifiers(code: str) -> str:
    def repl(match: re.Match) -> str:
        tok = match.group(0)
        if tok in C_KEYWORDS:
            return tok
        return "ID"
    return IDENT_RE.sub(repl, code)


def transform_code_for_view(code: str, analysis_view: str) -> str:
    if analysis_view == "full_function":
        return code
    if analysis_view == "body_only":
        return extract_body_only(code)
    if analysis_view == "body_only_anonymized":
        return anonymize_identifiers(extract_body_only(code))
    raise ValueError(f"Unsupported analysis_view: {analysis_view}")


# =============================================================================
# TOKENIZATION
# =============================================================================

def strip_comments_literals_and_numbers(code: str) -> str:
    code = COMMENT_RE.sub(" ", code)
    code = STRING_RE.sub(" STR_LITERAL ", code)
    code = CHAR_RE.sub(" CHAR_LITERAL ", code)
    code = NUMBER_RE.sub(" NUM_LITERAL ", code)
    return code


def tokenize_c_code(code: str) -> List[str]:
    code = strip_comments_literals_and_numbers(code)
    tokens: List[str] = []

    i = 0
    n = len(code)
    while i < n:
        ch = code[i]

        if ch.isspace():
            i += 1
            continue

        ident_match = IDENT_RE.match(code, i)
        if ident_match:
            tokens.append(ident_match.group(0))
            i = ident_match.end()
            continue

        op_match = OPERATORS_RE.match(code, i)
        if op_match:
            tokens.append(op_match.group(0))
            i = op_match.end()
            continue

        i += 1

    return tokens


def split_token_groups(tokens: Sequence[str]) -> Tuple[List[str], List[str], List[str], List[str]]:
    op_set = set(OPERATORS)
    all_tokens: List[str] = []
    identifiers: List[str] = []
    keywords: List[str] = []
    operators: List[str] = []

    for tok in tokens:
        all_tokens.append(tok)
        if tok in C_KEYWORDS:
            keywords.append(tok)
        elif tok in op_set:
            operators.append(tok)
        elif IDENT_RE.fullmatch(tok):
            identifiers.append(tok)

    return all_tokens, identifiers, keywords, operators


# =============================================================================
# SIMILARITY METRICS
# =============================================================================

def jaccard(a: Sequence[str], b: Sequence[str]) -> float:
    sa, sb = set(a), set(b)
    if not sa and not sb:
        return 1.0
    if not sa or not sb:
        return 0.0
    return len(sa & sb) / len(sa | sb)


def overlap_coefficient(a: Sequence[str], b: Sequence[str]) -> float:
    sa, sb = set(a), set(b)
    if not sa and not sb:
        return 1.0
    if not sa or not sb:
        return 0.0
    return len(sa & sb) / min(len(sa), len(sb))


def sequence_similarity(tokens_a: Sequence[str], tokens_b: Sequence[str]) -> float:
    return difflib.SequenceMatcher(None, list(tokens_a), list(tokens_b)).ratio()


def length_ratio(tokens_a: Sequence[str], tokens_b: Sequence[str]) -> float:
    la, lb = len(tokens_a), len(tokens_b)
    if la == 0 and lb == 0:
        return 1.0
    if la == 0 or lb == 0:
        return 0.0
    return min(la, lb) / max(la, lb)


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


# =============================================================================
# DATA DISCOVERY
# =============================================================================

def infer_version_and_modality(code_root: Path) -> Tuple[str, str]:
    parts = [p for p in code_root.parts]
    version = None
    modality = code_root.name
    for p in parts:
        pl = p.lower()
        if pl == "natural":
            version = "Natural"
        elif pl == "obf":
            version = "Obf"
    if version is None:
        version = "Unknown"
    return version, modality


def extract_f_a_ids(path: Path) -> Tuple[Optional[str], Optional[str]]:
    text = str(path).replace("\\", "/")
    f_match = F_ID_RE.search(text)
    a_match = A_ID_RE.search(path.name)
    f_id = canonical_id(f_match.group(1)) if f_match else None
    a_id = canonical_id(a_match.group(1)) if a_match else None
    return f_id, a_id


def collect_samples(job_name: str, code_root: Path, allowed_exts: Sequence[str], max_files_per_f: Optional[int]) -> Tuple[List[Sample], Dict[str, Path]]:
    version, modality = infer_version_and_modality(code_root)
    by_f_count: Dict[str, int] = {}
    samples: List[Sample] = []
    relkey_to_path: Dict[str, Path] = {}

    for path in sorted(code_root.rglob("*")):
        if not path.is_file():
            continue
        if path.suffix.lower() not in allowed_exts:
            continue

        f_id, a_id = extract_f_a_ids(path)
        if not f_id or not a_id:
            continue

        if max_files_per_f is not None and by_f_count.get(f_id, 0) >= max_files_per_f:
            continue

        rel_key = path.relative_to(code_root).as_posix()
        sample = Sample(
            job_name=job_name,
            version=version,
            modality=modality,
            F_id=f_id,
            A_id=a_id,
            file_name=path.name,
            rel_key=rel_key,
        )
        samples.append(sample)
        relkey_to_path[rel_key] = path
        by_f_count[f_id] = by_f_count.get(f_id, 0) + 1

    return samples, relkey_to_path


# =============================================================================
# PAIR GENERATION
# =============================================================================

def generate_pairs(samples: List[Sample], analysis_view: str, negative_ratio: float, seed: int, max_pairs: Optional[int]) -> List[PairRecord]:
    rng = random.Random(seed)
    by_f: Dict[str, List[Sample]] = {}
    for s in samples:
        by_f.setdefault(s.F_id, []).append(s)

    # Positive pairs: within the same F, but different A.
    pos_pairs: List[PairRecord] = []
    for f_id, group in sorted(by_f.items()):
        group = sorted(group, key=lambda x: x.rel_key)
        for left, right in itertools.combinations(group, 2):
            if left.A_id == right.A_id:
                continue
            pos_pairs.append(
                PairRecord(
                    job_name=left.job_name,
                    version=left.version,
                    modality=left.modality,
                    analysis_view=analysis_view,
                    left_rel_key=left.rel_key,
                    right_rel_key=right.rel_key,
                    left_F_id=left.F_id,
                    right_F_id=right.F_id,
                    left_A_id=left.A_id,
                    right_A_id=right.A_id,
                    label=1,
                    pair_type="pos",
                )
            )

    # Negative candidate pairs: across different F.
    f_ids = sorted(by_f.keys())
    neg_candidates: List[PairRecord] = []
    for i in range(len(f_ids)):
        for j in range(i + 1, len(f_ids)):
            fi, fj = f_ids[i], f_ids[j]
            for left in by_f[fi]:
                for right in by_f[fj]:
                    neg_candidates.append(
                        PairRecord(
                            job_name=left.job_name,
                            version=left.version,
                            modality=left.modality,
                            analysis_view=analysis_view,
                            left_rel_key=left.rel_key,
                            right_rel_key=right.rel_key,
                            left_F_id=left.F_id,
                            right_F_id=right.F_id,
                            left_A_id=left.A_id,
                            right_A_id=right.A_id,
                            label=0,
                            pair_type="neg",
                        )
                    )

    target_neg = int(round(len(pos_pairs) * negative_ratio))
    if target_neg <= 0:
        neg_pairs = []
    elif target_neg >= len(neg_candidates):
        neg_pairs = neg_candidates
    else:
        neg_pairs = rng.sample(neg_candidates, target_neg)

    all_pairs = pos_pairs + neg_pairs
    rng.shuffle(all_pairs)

    if max_pairs is not None:
        all_pairs = all_pairs[:max_pairs]

    return all_pairs


# =============================================================================
# ANALYSIS
# =============================================================================

def build_tfidf_corpus(transformed_code_by_key: Dict[str, str]) -> Tuple[TfidfVectorizer, Dict[str, int], np.ndarray]:
    keys = sorted(transformed_code_by_key.keys())
    docs = [" ".join(tokenize_c_code(transformed_code_by_key[k])) for k in keys]
    vectorizer = TfidfVectorizer(
        tokenizer=str.split,
        preprocessor=None,
        token_pattern=None,
        lowercase=False,
        norm="l2",
    )
    matrix = vectorizer.fit_transform(docs)
    key_to_row = {k: i for i, k in enumerate(keys)}
    return vectorizer, key_to_row, matrix


def summarize_metrics(df: pd.DataFrame, bins: int) -> Tuple[pd.DataFrame, pd.DataFrame]:
    group_rows = []
    for label_value, sub in df.groupby("label"):
        for metric in METRIC_COLUMNS:
            stats = safe_stats(sub[metric].dropna().tolist())
            group_rows.append({
                "job_name": sub["job_name"].iloc[0],
                "version": sub["version"].iloc[0],
                "modality": sub["modality"].iloc[0],
                "analysis_view": sub["analysis_view"].iloc[0],
                "label": int(label_value),
                "metric": metric,
                **stats,
            })
    group_summary = pd.DataFrame(group_rows)

    pos = df[df["label"] == 1]
    neg = df[df["label"] == 0]
    sep_rows = []
    for metric in METRIC_COLUMNS:
        x = pos[metric].dropna().to_numpy()
        y = neg[metric].dropna().to_numpy()

        valid = df[["label", metric]].dropna()
        auc = roc_auc_score(valid["label"], valid[metric]) if valid["label"].nunique() == 2 else np.nan

        sep_rows.append({
            "job_name": df["job_name"].iloc[0],
            "version": df["version"].iloc[0],
            "modality": df["modality"].iloc[0],
            "analysis_view": df["analysis_view"].iloc[0],
            "metric": metric,
            "positive_mean": float(np.mean(x)) if len(x) else np.nan,
            "negative_mean": float(np.mean(y)) if len(y) else np.nan,
            "mean_gap_pos_minus_neg": float(np.mean(x) - np.mean(y)) if len(x) and len(y) else np.nan,
            "auc": float(auc) if not pd.isna(auc) else np.nan,
            "distribution_overlap": distribution_overlap(x, y, bins=bins),
            "cliffs_delta_pos_vs_neg": cliffs_delta(x, y),
        })
    separability = pd.DataFrame(sep_rows)
    return group_summary, separability


def plot_metric(df: pd.DataFrame, metric: str, out_path: Path, bins: int) -> None:
    pos = df[df["label"] == 1][metric].dropna().to_numpy()
    neg = df[df["label"] == 0][metric].dropna().to_numpy()

    plt.figure(figsize=(7, 5))
    plt.hist(pos, bins=bins, alpha=0.55, density=True, label="Positive pairs")
    plt.hist(neg, bins=bins, alpha=0.55, density=True, label="Negative pairs")
    title = f"{df['job_name'].iloc[0]} [{df['analysis_view'].iloc[0]}]: {metric}"
    plt.title(title)
    plt.xlabel(metric)
    plt.ylabel("Density")
    plt.legend()
    plt.tight_layout()
    plt.savefig(out_path, dpi=220)
    plt.close()


def analyze_job_view(job: dict, analysis_view: str, output_root: Path) -> None:
    if analysis_view not in ALLOWED_VIEWS:
        raise ValueError(f"Unsupported analysis view: {analysis_view}")

    job_name = str(job["name"]).strip()
    code_root = Path(job["code_root"]).resolve()
    if not code_root.exists():
        raise FileNotFoundError(f"Code root not found: {code_root}")

    version, modality = infer_version_and_modality(code_root)
    prefix = f"{job_name}_{analysis_view}"

    samples, relkey_to_path = collect_samples(
        job_name=job_name,
        code_root=code_root,
        allowed_exts=CONFIG["allowed_exts"],
        max_files_per_f=CONFIG["max_files_per_f"],
    )
    if not samples:
        raise RuntimeError(f"No valid samples found under: {code_root}")

    pairs = generate_pairs(
        samples=samples,
        analysis_view=analysis_view,
        negative_ratio=float(CONFIG["negative_ratio"]),
        seed=int(CONFIG["random_seed"]),
        max_pairs=CONFIG["max_pairs"],
    )
    if not pairs:
        raise RuntimeError(f"No pairs generated for {job_name} [{analysis_view}].")

    # Save sample index.
    sample_df = pd.DataFrame([asdict(s) for s in samples])
    sample_df["analysis_view"] = analysis_view
    sample_df.to_csv(output_root / f"{prefix}_sample_index.csv", index=False)

    # Save generated pairs.
    pair_df = pd.DataFrame([asdict(p) for p in pairs])
    pair_df.to_csv(output_root / f"{prefix}_generated_pairs.csv", index=False)

    # Read and transform code.
    transformed_code_by_key: Dict[str, str] = {}
    raw_len_rows = []
    for s in samples:
        raw_code = read_text(relkey_to_path[s.rel_key])
        transformed = transform_code_for_view(raw_code, analysis_view)
        transformed_code_by_key[s.rel_key] = transformed
        raw_len_rows.append({
            "job_name": s.job_name,
            "version": s.version,
            "modality": s.modality,
            "analysis_view": analysis_view,
            "F_id": s.F_id,
            "A_id": s.A_id,
            "file_name": s.file_name,
            "rel_key": s.rel_key,
            "raw_char_len": len(raw_code),
            "transformed_char_len": len(transformed),
        })

    pd.DataFrame(raw_len_rows).to_csv(output_root / f"{prefix}_sample_lengths.csv", index=False)

    if CONFIG.get("dump_transformed_samples", False):
        dump_dir = output_root / f"{prefix}_transformed_samples"
        ensure_dir(dump_dir)
        for s in samples:
            dump_path = dump_dir / s.file_name
            dump_path.write_text(transformed_code_by_key[s.rel_key], encoding="utf-8")

    _, key_to_row, tfidf_matrix = build_tfidf_corpus(transformed_code_by_key)

    token_cache = {}
    ident_cache = {}
    keyword_cache = {}
    operator_cache = {}
    for s in samples:
        toks = tokenize_c_code(transformed_code_by_key[s.rel_key])
        all_tokens, identifiers, keywords, operators = split_token_groups(toks)
        token_cache[s.rel_key] = all_tokens
        ident_cache[s.rel_key] = identifiers
        keyword_cache[s.rel_key] = keywords
        operator_cache[s.rel_key] = operators

    metric_rows = []
    for p in pairs:
        ltoks = token_cache[p.left_rel_key]
        rtoks = token_cache[p.right_rel_key]
        lids = ident_cache[p.left_rel_key]
        rids = ident_cache[p.right_rel_key]
        lkws = keyword_cache[p.left_rel_key]
        rkws = keyword_cache[p.right_rel_key]
        lops = operator_cache[p.left_rel_key]
        rops = operator_cache[p.right_rel_key]

        lrow = key_to_row[p.left_rel_key]
        rrow = key_to_row[p.right_rel_key]
        tfidf_cos = float(tfidf_matrix[lrow].multiply(tfidf_matrix[rrow]).sum())

        metric_rows.append({
            **asdict(p),
            "token_jaccard": jaccard(ltoks, rtoks),
            "identifier_jaccard": jaccard(lids, rids),
            "keyword_jaccard": jaccard(lkws, rkws),
            "operator_jaccard": jaccard(lops, rops),
            "token_overlap_coef": overlap_coefficient(ltoks, rtoks),
            "token_seq_similarity": sequence_similarity(ltoks, rtoks),
            "token_length_ratio": length_ratio(ltoks, rtoks),
            "tfidf_cosine": tfidf_cos,
            "left_token_count": len(ltoks),
            "right_token_count": len(rtoks),
            "left_identifier_count": len(lids),
            "right_identifier_count": len(rids),
        })

    metric_df = pd.DataFrame(metric_rows)
    metric_df.to_csv(output_root / f"{prefix}_pair_metrics.csv", index=False)

    summary_df, sep_df = summarize_metrics(metric_df, bins=int(CONFIG["plot_bins"]))
    summary_df.to_csv(output_root / f"{prefix}_summary_by_label.csv", index=False)
    sep_df.to_csv(output_root / f"{prefix}_metric_separability.csv", index=False)

    if CONFIG["save_plots"]:
        plot_dir = output_root / "plots"
        ensure_dir(plot_dir)
        for metric in PLOT_METRICS:
            plot_metric(
                metric_df,
                metric,
                plot_dir / f"{prefix}_{metric}.png",
                bins=int(CONFIG["plot_bins"]),
            )

    run_info = {
        "job_name": job_name,
        "version": version,
        "modality": modality,
        "analysis_view": analysis_view,
        "code_root": str(code_root),
        "sample_count": int(len(samples)),
        "pair_count": int(len(pairs)),
        "positive_pair_count": int((metric_df["label"] == 1).sum()),
        "negative_pair_count": int((metric_df["label"] == 0).sum()),
        "negative_ratio": float(CONFIG["negative_ratio"]),
        "random_seed": int(CONFIG["random_seed"]),
        "allowed_exts": list(CONFIG["allowed_exts"]),
        "max_files_per_f": CONFIG["max_files_per_f"],
        "max_pairs": CONFIG["max_pairs"],
    }
    with open(output_root / f"{prefix}_run_info.json", "w", encoding="utf-8") as f:
        json.dump(run_info, f, indent=2, ensure_ascii=False)

    print("=" * 88)
    print(f"Done: {job_name} [{analysis_view}]")
    print(f"  samples: {len(samples)}")
    print(f"  pairs:   {len(pairs)}")
    print(f"  output:  {output_root}")
    print()
    print(sep_df[["metric", "positive_mean", "negative_mean", "auc", "distribution_overlap"]].to_string(index=False))
    print("=" * 88)


# =============================================================================
# MAIN
# =============================================================================

def validate_config() -> None:
    views = CONFIG.get("analysis_views", [])
    if not views:
        raise ValueError("CONFIG['analysis_views'] must not be empty.")
    for view in views:
        if view not in ALLOWED_VIEWS:
            raise ValueError(f"Unsupported analysis view in CONFIG: {view}")


def main() -> None:
    validate_config()
    output_root = Path(CONFIG["output_root"]).resolve()
    ensure_dir(output_root)

    jobs = CONFIG.get("jobs", [])
    enabled_jobs = [j for j in jobs if j.get("enabled", True)]
    if not enabled_jobs:
        raise ValueError("No enabled jobs in CONFIG['jobs'].")

    for job in enabled_jobs:
        for view in CONFIG["analysis_views"]:
            analyze_job_view(job, view, output_root)

    print("\nAll analyses completed.")


if __name__ == "__main__":
    main()
