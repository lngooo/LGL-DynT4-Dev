#!/usr/bin/env python3
# -*- coding: utf-8 -*-

"""
Static lexical hardness analysis for LGL-DynT4.

Design goals
------------
1. Analyze Natural and Obf independently.
2. No combined / cross-version analysis in this script.
3. Output filenames are prefixed, e.g.
   - natural_sample_index.csv
   - natural_pair_metrics.csv
   - obf_summary_by_label.csv
4. Main CSV files keep short identifiers only.
   Long absolute paths are stored only in <prefix>_run_info.json.

How to use
----------
Edit CONFIG below, then run:
    python analyze_lexical_gap_prefixed.py

Typical code roots:
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

    # All outputs are written directly under this directory,
    # with filename prefixes such as natural_* or obf_*.
    "output_root": r"../script_OUTPUTS/lexical_gap",

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


def safe_mean(arr: Sequence[float]) -> float:
    arr = list(arr)
    return float(np.mean(arr)) if arr else float("nan")


def safe_median(arr: Sequence[float]) -> float:
    arr = list(arr)
    return float(np.median(arr)) if arr else float("nan")


def safe_std(arr: Sequence[float]) -> float:
    arr = list(arr)
    return float(np.std(arr)) if arr else float("nan")


def safe_quantile(arr: Sequence[float], q: float) -> float:
    arr = list(arr)
    return float(np.quantile(arr, q)) if arr else float("nan")


def read_text(path: Path) -> str:
    return path.read_text(encoding="utf-8", errors="ignore")


def canonical_id(value: str) -> str:
    value = value.strip()
    if not value:
        return value
    return value[0].upper() + value[1:]


# =============================================================================
# TOKENIZATION
# =============================================================================

def strip_comments_and_literals(code: str) -> str:
    code = COMMENT_RE.sub(" ", code)
    code = STRING_RE.sub(" STR_LITERAL ", code)
    code = CHAR_RE.sub(" CHAR_LITERAL ", code)
    code = NUMBER_RE.sub(" NUM_LITERAL ", code)
    return code


def tokenize_c_code(code: str) -> List[str]:
    code = strip_comments_and_literals(code)
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


def distribution_overlap(pos: np.ndarray, neg: np.ndarray, bins: int) -> float:
    if len(pos) == 0 or len(neg) == 0:
        return float("nan")

    values = np.concatenate([pos, neg])
    lo, hi = float(np.min(values)), float(np.max(values))
    if math.isclose(lo, hi):
        return 1.0

    hist_pos, edges = np.histogram(pos, bins=bins, range=(lo, hi), density=True)
    hist_neg, _ = np.histogram(neg, bins=bins, range=(lo, hi), density=True)
    widths = np.diff(edges)
    return float(np.sum(np.minimum(hist_pos, hist_neg) * widths))


def cliffs_delta(x: np.ndarray, y: np.ndarray) -> float:
    if len(x) == 0 or len(y) == 0:
        return float("nan")

    gt = 0
    lt = 0
    for xi in x:
        gt += int(np.sum(xi > y))
        lt += int(np.sum(xi < y))
    return (gt - lt) / (len(x) * len(y))


# =============================================================================
# SCAN / PARSE
# =============================================================================

def infer_version_and_modality(code_root: Path) -> Tuple[str, str]:
    """
    Typical path:
        ... / Data / Natural / Source_Clean
        ... / Data / Obf     / Source_Clean
    """
    modality = code_root.name
    version = code_root.parent.name

    parts_lower = [p.lower() for p in code_root.parts]
    if "data" in parts_lower:
        idx = parts_lower.index("data")
        if idx + 2 < len(code_root.parts):
            version = code_root.parts[idx + 1]
            modality = code_root.parts[idx + 2]

    return version, modality


def extract_f_id(path: Path) -> Optional[str]:
    for part in [path.parent.name, path.stem]:
        match = F_ID_RE.search(part)
        if match:
            return canonical_id(match.group(1))
    for part in path.parts:
        match = F_ID_RE.search(part)
        if match:
            return canonical_id(match.group(1))
    return None


def extract_a_id(path: Path) -> Optional[str]:
    match = A_ID_RE.search(path.stem)
    if match:
        return canonical_id(match.group(1))
    return None


def scan_samples(
    job_name: str,
    code_root: Path,
    allowed_exts: Sequence[str],
    max_files_per_f: Optional[int],
) -> Tuple[List[Sample], Dict[str, str]]:
    version, modality = infer_version_and_modality(code_root)

    files: List[Path] = []
    ext_set = {e.lower() for e in allowed_exts}
    for path in sorted(code_root.rglob("*")):
        if path.is_file() and path.suffix.lower() in ext_set:
            files.append(path)

    if not files:
        raise FileNotFoundError(f"No files found under {code_root} with extensions {allowed_exts}")

    samples: List[Sample] = []
    rel_to_abs: Dict[str, str] = {}
    f_counter: Dict[str, int] = {}

    for path in files:
        f_id = extract_f_id(path)
        a_id = extract_a_id(path)

        if f_id is None or a_id is None:
            raise ValueError(
                f"Failed to parse F_id or A_id from file path:\n{path}\n"
                f"Expected folder/file names containing patterns like F01 / A03."
            )

        if max_files_per_f is not None:
            current = f_counter.get(f_id, 0)
            if current >= max_files_per_f:
                continue
            f_counter[f_id] = current + 1

        rel_key = str(path.relative_to(code_root)).replace("\\", "/")
        rel_to_abs[rel_key] = str(path)

        samples.append(
            Sample(
                job_name=job_name,
                version=version,
                modality=modality,
                F_id=f_id,
                A_id=a_id,
                file_name=path.name,
                rel_key=rel_key,
            )
        )

    if not samples:
        raise RuntimeError(f"All files were filtered out for job '{job_name}'.")

    return samples, rel_to_abs


# =============================================================================
# PAIR GENERATION
# =============================================================================

def generate_positive_pairs(samples: List[Sample]) -> List[PairRecord]:
    by_f: Dict[str, List[Sample]] = {}
    for s in samples:
        by_f.setdefault(s.F_id, []).append(s)

    job_name = samples[0].job_name
    version = samples[0].version
    modality = samples[0].modality

    pairs: List[PairRecord] = []
    for _, group in sorted(by_f.items()):
        group_sorted = sorted(group, key=lambda x: x.rel_key)
        for left, right in itertools.combinations(group_sorted, 2):
            pairs.append(
                PairRecord(
                    job_name=job_name,
                    version=version,
                    modality=modality,
                    left_rel_key=left.rel_key,
                    right_rel_key=right.rel_key,
                    left_F_id=left.F_id,
                    right_F_id=right.F_id,
                    left_A_id=left.A_id,
                    right_A_id=right.A_id,
                    label=1,
                    pair_type="positive",
                )
            )
    return pairs


def generate_negative_pairs(samples: List[Sample], target_count: int, rng: random.Random) -> List[PairRecord]:
    samples_sorted = sorted(samples, key=lambda x: x.rel_key)
    candidates: List[Tuple[Sample, Sample]] = []

    for left, right in itertools.combinations(samples_sorted, 2):
        if left.F_id != right.F_id:
            candidates.append((left, right))

    if not candidates:
        raise RuntimeError("No negative candidates found. Need at least two different F groups.")

    chosen = candidates if target_count >= len(candidates) else rng.sample(candidates, target_count)

    job_name = samples[0].job_name
    version = samples[0].version
    modality = samples[0].modality

    pairs: List[PairRecord] = []
    for left, right in chosen:
        pairs.append(
            PairRecord(
                job_name=job_name,
                version=version,
                modality=modality,
                left_rel_key=left.rel_key,
                right_rel_key=right.rel_key,
                left_F_id=left.F_id,
                right_F_id=right.F_id,
                left_A_id=left.A_id,
                right_A_id=right.A_id,
                label=0,
                pair_type="negative",
            )
        )
    return pairs


# =============================================================================
# TF-IDF
# =============================================================================

def build_tfidf(code_by_relkey: Dict[str, str]) -> Tuple[Dict[str, int], np.ndarray]:
    keys = sorted(code_by_relkey.keys())
    documents = [" ".join(tokenize_c_code(code_by_relkey[k])) for k in keys]

    vectorizer = TfidfVectorizer(
        tokenizer=str.split,
        preprocessor=None,
        token_pattern=None,
        lowercase=False,
        norm="l2",
    )
    matrix = vectorizer.fit_transform(documents)
    key_to_row = {k: i for i, k in enumerate(keys)}
    return key_to_row, matrix


# =============================================================================
# PLOTS
# =============================================================================

def plot_distribution(df: pd.DataFrame, metric: str, out_path: Path, bins: int, title_prefix: str) -> None:
    pos = df[df["label"] == 1][metric].dropna().to_numpy()
    neg = df[df["label"] == 0][metric].dropna().to_numpy()

    plt.figure(figsize=(7, 5))
    plt.hist(pos, bins=bins, alpha=0.55, density=True, label="Positive pairs")
    plt.hist(neg, bins=bins, alpha=0.55, density=True, label="Negative pairs")
    plt.xlabel(metric)
    plt.ylabel("Density")
    plt.title(f"{title_prefix}: {metric}")
    plt.legend()
    plt.tight_layout()
    plt.savefig(out_path, dpi=200)
    plt.close()


# =============================================================================
# ANALYSIS
# =============================================================================

def analyze_pairs(
    samples: List[Sample],
    rel_to_abs: Dict[str, str],
    pairs: List[PairRecord],
    file_prefix: str,
    output_root: Path,
    plot_bins: int,
    save_plots: bool,
) -> Tuple[pd.DataFrame, pd.DataFrame, pd.DataFrame]:
    code_by_key = {rel_key: read_text(Path(abs_path)) for rel_key, abs_path in rel_to_abs.items()}

    token_cache: Dict[str, List[str]] = {}
    ident_cache: Dict[str, List[str]] = {}
    keyword_cache: Dict[str, List[str]] = {}
    operator_cache: Dict[str, List[str]] = {}

    for rel_key, code in code_by_key.items():
        tokens = tokenize_c_code(code)
        all_tokens, identifiers, keywords, operators = split_token_groups(tokens)
        token_cache[rel_key] = all_tokens
        ident_cache[rel_key] = identifiers
        keyword_cache[rel_key] = keywords
        operator_cache[rel_key] = operators

    key_to_row, tfidf_matrix = build_tfidf(code_by_key)

    rows: List[Dict[str, object]] = []
    for pair in pairs:
        lk = pair.left_rel_key
        rk = pair.right_rel_key

        ltoks = token_cache[lk]
        rtoks = token_cache[rk]
        lids = ident_cache[lk]
        rids = ident_cache[rk]
        lkw = keyword_cache[lk]
        rkw = keyword_cache[rk]
        lop = operator_cache[lk]
        rop = operator_cache[rk]

        lrow = key_to_row[lk]
        rrow = key_to_row[rk]
        tfidf_cos = float(tfidf_matrix[lrow].multiply(tfidf_matrix[rrow]).sum())

        rows.append(
            {
                "job_name": pair.job_name,
                "version": pair.version,
                "modality": pair.modality,
                "left_rel_key": lk,
                "right_rel_key": rk,
                "left_F_id": pair.left_F_id,
                "right_F_id": pair.right_F_id,
                "left_A_id": pair.left_A_id,
                "right_A_id": pair.right_A_id,
                "label": pair.label,
                "pair_type": pair.pair_type,
                "token_jaccard": jaccard(ltoks, rtoks),
                "identifier_jaccard": jaccard(lids, rids),
                "keyword_jaccard": jaccard(lkw, rkw),
                "operator_jaccard": jaccard(lop, rop),
                "token_overlap_coef": overlap_coefficient(ltoks, rtoks),
                "token_seq_similarity": sequence_similarity(ltoks, rtoks),
                "token_length_ratio": length_ratio(ltoks, rtoks),
                "tfidf_cosine": tfidf_cos,
                "left_token_count": len(ltoks),
                "right_token_count": len(rtoks),
                "left_identifier_count": len(lids),
                "right_identifier_count": len(rids),
            }
        )

    pair_metrics = pd.DataFrame(rows)

    summary_rows: List[Dict[str, object]] = []
    for label_value, sub in pair_metrics.groupby("label"):
        label_name = "positive" if int(label_value) == 1 else "negative"
        for metric in METRIC_COLUMNS:
            vals = sub[metric].dropna().to_numpy()
            summary_rows.append(
                {
                    "job_name": samples[0].job_name,
                    "version": samples[0].version,
                    "modality": samples[0].modality,
                    "label": int(label_value),
                    "label_name": label_name,
                    "metric": metric,
                    "count": int(len(vals)),
                    "mean": safe_mean(vals),
                    "median": safe_median(vals),
                    "std": safe_std(vals),
                    "q25": safe_quantile(vals, 0.25),
                    "q75": safe_quantile(vals, 0.75),
                }
            )
    summary_by_label = pd.DataFrame(summary_rows)

    pos = pair_metrics[pair_metrics["label"] == 1]
    neg = pair_metrics[pair_metrics["label"] == 0]

    sep_rows: List[Dict[str, object]] = []
    for metric in METRIC_COLUMNS:
        x = pos[metric].dropna().to_numpy()
        y = neg[metric].dropna().to_numpy()

        valid = pair_metrics[["label", metric]].dropna()
        auc = float("nan")
        if len(valid) > 0 and valid["label"].nunique() == 2:
            auc = float(roc_auc_score(valid["label"], valid[metric]))

        sep_rows.append(
            {
                "job_name": samples[0].job_name,
                "version": samples[0].version,
                "modality": samples[0].modality,
                "metric": metric,
                "positive_mean": safe_mean(x),
                "negative_mean": safe_mean(y),
                "mean_gap_pos_minus_neg": safe_mean(x) - safe_mean(y) if len(x) and len(y) else float("nan"),
                "auc": auc,
                "distribution_overlap": distribution_overlap(x, y, bins=plot_bins),
                "cliffs_delta_pos_vs_neg": cliffs_delta(x, y),
            }
        )
    metric_separability = pd.DataFrame(sep_rows)

    if save_plots:
        plot_dir = output_root / "plots"
        ensure_dir(plot_dir)
        for metric in PLOT_METRICS:
            out_path = plot_dir / f"{file_prefix}_{metric}.png"
            plot_distribution(pair_metrics, metric, out_path, bins=plot_bins, title_prefix=file_prefix)

    return pair_metrics, summary_by_label, metric_separability


# =============================================================================
# SAVE / REPORT
# =============================================================================

def save_outputs(
    output_root: Path,
    file_prefix: str,
    samples: List[Sample],
    pairs: List[PairRecord],
    pair_metrics: pd.DataFrame,
    summary_by_label: pd.DataFrame,
    metric_separability: pd.DataFrame,
    report: Dict[str, object],
) -> None:
    ensure_dir(output_root)

    sample_df = pd.DataFrame([asdict(s) for s in samples])
    pair_df = pd.DataFrame([asdict(p) for p in pairs])

    sample_df.to_csv(output_root / f"{file_prefix}_sample_index.csv", index=False)
    pair_df.to_csv(output_root / f"{file_prefix}_generated_pairs.csv", index=False)
    pair_metrics.to_csv(output_root / f"{file_prefix}_pair_metrics.csv", index=False)
    summary_by_label.to_csv(output_root / f"{file_prefix}_summary_by_label.csv", index=False)
    metric_separability.to_csv(output_root / f"{file_prefix}_metric_separability.csv", index=False)

    with open(output_root / f"{file_prefix}_run_info.json", "w", encoding="utf-8") as f:
        json.dump(report, f, indent=2, ensure_ascii=False)


# =============================================================================
# MAIN
# =============================================================================

def main() -> None:
    jobs_cfg = [job for job in CONFIG["jobs"] if job.get("enabled", True)]
    if not jobs_cfg:
        raise RuntimeError("No enabled jobs found in CONFIG['jobs'].")

    output_root = Path(CONFIG["output_root"]).resolve()
    ensure_dir(output_root)

    rng = random.Random(CONFIG["random_seed"])

    print("=" * 100)
    print("Static lexical hardness analysis starts.")
    print(f"Output root: {output_root}")
    print("=" * 100)

    for job_cfg in jobs_cfg:
        job_name = str(job_cfg["name"]).strip()
        file_prefix = job_name.lower()
        code_root = Path(job_cfg["code_root"]).resolve()

        if not code_root.exists():
            raise FileNotFoundError(f"code_root does not exist for job '{job_name}': {code_root}")

        print("-" * 100)
        print(f"[RUN] job_name={job_name}")
        print(f"      code_root={code_root}")

        samples, rel_to_abs = scan_samples(
            job_name=job_name,
            code_root=code_root,
            allowed_exts=CONFIG["allowed_exts"],
            max_files_per_f=CONFIG["max_files_per_f"],
        )

        positives = generate_positive_pairs(samples)
        target_negatives = int(round(len(positives) * float(CONFIG["negative_ratio"])))
        negatives = generate_negative_pairs(samples, target_negatives, rng=rng)

        pairs = positives + negatives
        rng.shuffle(pairs)

        if CONFIG["max_pairs"] is not None:
            pairs = pairs[: int(CONFIG["max_pairs"])]

        pair_metrics, summary_by_label, metric_separability = analyze_pairs(
            samples=samples,
            rel_to_abs=rel_to_abs,
            pairs=pairs,
            file_prefix=file_prefix,
            output_root=output_root,
            plot_bins=int(CONFIG["plot_bins"]),
            save_plots=bool(CONFIG["save_plots"]),
        )

        version, modality = infer_version_and_modality(code_root)
        f_group_sizes = (
            pd.DataFrame([asdict(s) for s in samples])
            .groupby("F_id")
            .size()
            .sort_index()
            .to_dict()
        )

        report = {
            "job_name": job_name,
            "file_prefix": file_prefix,
            "version": version,
            "modality": modality,
            "code_root": str(code_root),
            "output_root": str(output_root),
            "sample_count": int(len(samples)),
            "positive_pair_count": int(sum(1 for p in pairs if p.label == 1)),
            "negative_pair_count": int(sum(1 for p in pairs if p.label == 0)),
            "negative_ratio": float(CONFIG["negative_ratio"]),
            "f_group_count": int(len(set(s.F_id for s in samples))),
            "f_group_sizes": f_group_sizes,
            "allowed_exts": list(CONFIG["allowed_exts"]),
            "random_seed": int(CONFIG["random_seed"]),
            "max_files_per_f": CONFIG["max_files_per_f"],
            "max_pairs": CONFIG["max_pairs"],
            "notes": (
                "A harder lexical setting is indicated when positive-pair similarity "
                "is not much larger than negative-pair similarity, when metric AUC is "
                "closer to 0.5, and when distribution overlap is large."
            ),
        }

        save_outputs(
            output_root=output_root,
            file_prefix=file_prefix,
            samples=samples,
            pairs=pairs,
            pair_metrics=pair_metrics,
            summary_by_label=summary_by_label,
            metric_separability=metric_separability,
            report=report,
        )

        print(f"      sample_count={len(samples)}")
        print(f"      positive_pairs={sum(1 for p in pairs if p.label == 1)}")
        print(f"      negative_pairs={sum(1 for p in pairs if p.label == 0)}")
        print(f"      saved_prefix={file_prefix}_*")

    print("=" * 100)
    print("All runs completed.")
    print(f"Outputs saved to: {output_root}")
    print("=" * 100)


if __name__ == "__main__":
    main()
