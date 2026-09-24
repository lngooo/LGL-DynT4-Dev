# D9 Duplicate / Template-Bias Audit

## Scope

This audit checks:

```text
Data/Natural/Source_Clean
```

This is intentional. `Source_Clean` removes boilerplate components such as headers and `main` functions, so the audit focuses on the core computational logic rather than shared I/O templates.

## Run

Place the script under:

```text
Scripts_ext/analysis/duplicate_template/analyze_duplicate_template_bias.py
```

Then run from the project root:

```bash
python Scripts_ext/analysis/duplicate_template/analyze_duplicate_template_bias.py
```

## Outputs

```text
script_OUTPUTS/duplicate_template/
├── duplicate_template_summary.json
├── duplicate_template_overall.csv
├── per_seed_similarity_summary.csv
├── top_similar_pairs.csv
├── exact_duplicate_pairs.csv
└── normalized_duplicate_pairs.csv
```

## Main fields

The two most important fields are:

```text
exact_duplicate_pairs
normalized_duplicate_pairs
```

A clean result should ideally report both as zero.

`top_similar_pairs.csv` is used to inspect high-similarity pairs and judge whether they are caused by shared seed-level semantics, intended S/O derivation, or suspicious template reuse.
