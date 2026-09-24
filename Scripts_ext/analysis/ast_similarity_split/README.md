# AST Similarity Split Analysis

This directory contains a diagnostic script for split-level AST/block similarity analysis.

## File

```text
analyze_ast_similarity_split.py
```

## Configuration

All frequently changed paths and settings are placed in the configuration block at the top of the script.

Important items:

```python
DATA_VIEW = "Natural"
PROJECT_ROOT = None
SOURCE_CLEAN_RELATIVE_DIR = f"Data/{DATA_VIEW}/Source_Clean"
MANIFEST_RELATIVE_DIR = "Manifest"
OUTPUT_ROOT_RELATIVE_DIR = "script_OUTPUTS"
OUTPUT_SUBDIR = f"ast_similarity_split_{DATA_VIEW.lower()}"
MAIN_METRIC = "ast_3gram_cosine"
HARD_TOP_RATIO = 0.10
```

To run the Obfuscated branch, change:

```python
DATA_VIEW = "Obfuscated"
```

Then the script will use:

```text
Data/Obfuscated/Source_Clean
script_OUTPUTS/ast_similarity_split_obfuscated
```

## Run

From the repository root:

```bash
python Scripts_ext/analysis/ast_similarity_split/analyze_ast_similarity_split.py
```

## Outputs

```text
script_OUTPUTS/ast_similarity_split_<view>/
├── ast_pair_similarity_train.csv
├── ast_pair_similarity_val.csv
├── ast_pair_similarity_test.csv
├── ast_pair_similarity_all_splits.csv
├── ast_similarity_summary.csv
├── ast_hard_negative_candidates.csv
├── program_parse_status.csv
├── unresolved_pairs_all_splits.csv
└── ast_similarity_report.json
```

## Main interpretation

Focus on `ast_similarity_summary.csv`, especially the `test` split:

- `positive`: AST/block similarity distribution of positive clone pairs.
- `negative`: AST/block similarity distribution of negative pairs.
- `negative_overlap_ge_pos_p25`: fraction of negative pairs whose similarity is at least the positive-pair 25th percentile.
- `negative_overlap_ge_pos_median`: fraction of negative pairs whose similarity is at least the positive-pair median.
- `negative_overlap_ge_pos_p75`: fraction of negative pairs whose similarity is at least the positive-pair 75th percentile.

If overlap values are low, the full test split contains strong AST/block-level separability. In that case, `ast_hard_negative_candidates.csv` can be used to build a harder evaluation subset.