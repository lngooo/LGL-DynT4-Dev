# LGL-DynT4 Oracle and Metamorphic Validation

This folder contains the D3 validation script for LGL-DynT4.

D3 complements the expanded execution-consistency audit in D2. D2 checks whether all retained implementations under the same functional seed produce identical outputs under the same inputs. D3 checks whether these outputs are consistent with independent semantic oracles or seed-specific metamorphic relations.

## Folder location

Place the files under:

```text
Scripts_ext/validation/oracle_metamorphic/
├── README.md
└── run_oracle_metamorphic_validation.py
```

The script assumes the following repository structure:

```text
LGL-DynT4/
├── config.json
├── Data/
│   └── Natural/
│       └── Source_Raw/
├── Scripts_ext/
│   └── validation/
│       └── oracle_metamorphic/
│           ├── README.md
│           └── run_oracle_metamorphic_validation.py
└── script_OUTPUTS/
    ├── expanded_consistency/
    │   └── expanded_test_cases.csv
    └── oracle_metamorphic/
```

## Purpose

The validation answers a different question from D2.

| Stage | Main question | Reference used |
|---|---|---|
| D2 expanded consistency | Do implementations under the same seed agree with each other? | Cross-implementation output consistency |
| D3 oracle/metamorphic validation | Is the agreed output semantically correct? | Independent Python oracle or metamorphic relation |

This is useful because implementation-level consistency alone cannot rule out the possibility that all implementations under one seed share the same semantic mistake.

## Input

By default, the script reads:

```text
script_OUTPUTS/expanded_consistency/expanded_test_cases.csv
```

This should normally be the final clean D2 test suite, preferably the reproducible seed=42 run.

## Output

The script writes:

```text
script_OUTPUTS/oracle_metamorphic/
├── oracle_case_log.csv
├── metamorphic_case_log.csv
├── failed_oracle_cases.csv
├── failed_metamorphic_cases.csv
└── oracle_metamorphic_summary.json
```

### Output file meanings

| File | Meaning |
|---|---|
| `oracle_case_log.csv` | Per-case comparison between C output and the independent Python oracle. |
| `failed_oracle_cases.csv` | Subset of oracle cases that failed. This file should be empty for a clean run. |
| `metamorphic_case_log.csv` | Per-case metamorphic relation checks for representative seeds. |
| `failed_metamorphic_cases.csv` | Subset of metamorphic checks that failed. This file should be empty for a clean run. |
| `oracle_metamorphic_summary.json` | Global summary including counts, paths, and compile errors. |

## How to run

From the project root:

```bash
python Scripts_ext/validation/oracle_metamorphic/run_oracle_metamorphic_validation.py
```

## Configuration

The main configuration variables are at the top of `run_oracle_metamorphic_validation.py`.

```python
PROJECT_ROOT = Path(__file__).resolve().parents[3]
CONFIG_PATH = PROJECT_ROOT / "config.json"
SOURCE_DIR = PROJECT_ROOT / "Data" / "Natural" / "Source_Raw"
EXPANDED_CASES_CSV = PROJECT_ROOT / "script_OUTPUTS" / "expanded_consistency" / "expanded_test_cases.csv"
OUTPUT_DIR = PROJECT_ROOT / "script_OUTPUTS" / "oracle_metamorphic"
```

The default validation mode is:

```python
VALIDATE_IMPL_MODE = "A01"
```

This is intentional. D2 has already checked cross-implementation consistency, so D3 can validate the seed-level agreed behavior using A01. For a stronger but slower validation, set:

```python
VALIDATE_IMPL_MODE = "all"
```

To debug only selected seeds:

```python
ONLY_SEEDS = {"F25", "F45"}
```

To validate all seeds:

```python
ONLY_SEEDS = set()
```

## Supported oracle checks

The script provides independent Python oracles for all 50 functional seeds, including numeric, array, string, bitwise, and encoding functions.

Examples:

```text
F01 Sum             -> n(n+1)/2
F02 GCD             -> math.gcd(a,b)
F03 Factorial       -> math.factorial(n)
F11 BinarySearch    -> first matching index or -1
F24 ArraySum        -> sum(arr)
F25 ArrayAverage    -> mean formatted to two decimals
F33 LCP             -> longest common prefix
F43 IsPowerOfTwo    -> n > 0 and (n & (n-1)) == 0
F45 GrayCode        -> n ^ (n >> 1)
F50 IntToRoman      -> standard Roman numeral conversion
```

For floating-point-style outputs, the script uses a small seed-specific tolerance. In particular, `F25 ArrayAverage` allows a tolerance of `1.1e-2` to avoid treating one-unit two-decimal formatting differences as semantic errors.

## Supported metamorphic checks

The script also performs representative metamorphic checks, including:

| Seed | Relation |
|---|---|
| F02 GCD | `gcd(a,b) = gcd(b,a)` |
| F12/F13/F16/F20/F21/F22 sorting | Sorting is invariant to input permutation. |
| F15 FindMax | Maximum is invariant to input permutation. |
| F24 ArraySum | Sum is invariant to input permutation. |
| F25 ArrayAverage | Average is invariant to input permutation. |
| F28 IsPalindrome | Reversing the string preserves palindrome status. |
| F29 AnagramCheck | Anagram relation is symmetric. |
| F33 LCP | Adding the same prefix to all strings extends the LCP by that prefix. |
| F43 IsPowerOfTwo | If a positive power of two is doubled within range, it remains a power of two. |

The metamorphic stage is not meant to replace exact oracle checking. It provides additional relational evidence for representative seeds across domains.

## Clean-run criteria

A clean D3 run should satisfy:

```text
num_compile_errors = 0
num_oracle_failures = 0
num_metamorphic_failures = 0
```

The formal completion status can be recorded as:

```text
D3 Oracle/metamorphic validation: Completed.
All selected retained outputs passed independent oracle checks, and representative metamorphic relations did not reveal semantic inconsistencies.
```

## Suggested paper wording

```text
In addition to cross-implementation consistency checking, we conducted an independent oracle/metamorphic validation. The expanded consistency audit verifies that retained implementations under the same seed produce identical outputs, while the oracle validation checks whether these outputs conform to the intended seed-level semantics. For functions with deterministic mathematical specifications, we implemented independent Python oracles. For representative functions whose semantics can be naturally expressed relationally, we further used metamorphic relations such as permutation invariance, symmetry, idempotence, and prefix-extension consistency.
```

## Notes

1. D3 should normally be run after D2 has passed cleanly.
2. If D3 reveals failures, first check whether the failure is caused by an actual implementation bug, an oracle-format mismatch, or an ambiguous output convention.
3. For final paper evidence, archive the clean `oracle_metamorphic_summary.json` together with the two failed-case CSV files.