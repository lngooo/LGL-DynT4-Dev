# Expanded Consistency Validation

This folder contains the extended execution-consistency validation scripts for LGL-DynT4.

The scripts do **not** modify the released benchmark. They only generate additional boundary-value and randomized inputs from `config.json`, then compile and run the retained C implementations to check whether all variants under the same algorithmic-logic seed produce consistent outputs.

## Purpose

The original dynamic audit validates each seed family using two predefined input configurations. This extended validation keeps those original base inputs and adds:

- boundary-value inputs;
- randomized in-domain inputs;
- automatic cross-implementation output consistency checking;
- CSV/JSON summaries for reproducibility.

The 50 algorithmic-logic seeds, 1,050 program variants, and 10,500 execution traces remain unchanged.

## Folder Structure

```text
Scripts_ext/validation/expanded_consistency/
├── README.md
├── generate_expanded_tests.py
└── run_expanded_consistency_audit.py
```

The generated outputs are saved to:

```text
script_OUTPUTS/expanded_consistency/
├── expanded_test_cases.csv
├── per_run_log.csv
├── per_case_consistency.csv
├── per_seed_summary.csv
├── failed_cases.csv
└── audit_summary.json
```

## Step 1: Generate Expanded Test Cases

Run:

```bash
python Scripts_ext/validation/expanded_consistency/generate_expanded_tests.py
```

This script reads:

```text
config.json
```

and generates:

```text
script_OUTPUTS/expanded_consistency/expanded_test_cases.csv
```

The generated test cases include:

- `base`: the original two predefined inputs;
- `boundary`: boundary-value inputs generated from `config.json`;
- `random`: randomized in-domain inputs generated from `config.json`.

Common settings are defined at the top of `generate_expanded_tests.py`:

```python
RANDOM_SEED = 42
BOUNDARY_CASES_PER_SEED = 6
RANDOM_CASES_PER_SEED = 30
INCLUDE_BASE_CASES = True
ONLY_SEEDS = set()
```

For small debugging, set for example:

```python
ONLY_SEEDS = {"F02", "F13", "F23", "F28", "F49"}
```

For full generation, use:

```python
ONLY_SEEDS = set()
```

## Step 2: Run Expanded Consistency Audit

Run:

```bash
python Scripts_ext/validation/expanded_consistency/run_expanded_consistency_audit.py
```

This script reads:

```text
Data/Source_Raw/
script_OUTPUTS/expanded_consistency/expanded_test_cases.csv
```

and produces the validation outputs under:

```text
script_OUTPUTS/expanded_consistency/
```

Common settings are defined at the top of `run_expanded_consistency_audit.py`:

```python
SOURCE_DIR = PROJECT_ROOT / "Data" / "Source_Raw"
GCC_PATH = r"D:\programFiles\msys64\mingw64\bin\gcc.exe"
EXECUTION_TIMEOUT = 100
COMPILE_TIMEOUT = 60
ENCODING = "gbk"
EXPECTED_IMPLS_PER_SEED = 21
ONLY_SEEDS = set()
```

If `GCC_PATH` does not exist, the script falls back to system `gcc`.

For small debugging, set for example:

```python
ONLY_SEEDS = {"F02", "F13", "F23", "F28", "F49"}
```

For full validation, use:

```python
ONLY_SEEDS = set()
```

## Output Files

### `expanded_test_cases.csv`

Stores all generated input cases.

Main columns:

| Column | Description |
|---|---|
| `seed_id` | Function seed ID, e.g., `F01` |
| `seed_name` | Function name, e.g., `Sum` |
| `domain` | Coarse domain category |
| `case_id` | Unique test case ID |
| `case_type` | `base`, `boundary`, or `random` |
| `args_json` | Command-line arguments in JSON format |
| `args_text` | Human-readable command-line arguments |
| `source` | Input source |
| `valid_domain` | Whether the input is generated within the configured domain |

### `per_run_log.csv`

Stores every program execution record.

Main columns:

| Column | Description |
|---|---|
| `seed_id` | Function seed ID |
| `case_id` | Test case ID |
| `impl_id` | Implementation ID, e.g., `A01` |
| `file_name` | C source file name |
| `compile_status` | `ok` or `fail` |
| `run_status` | `ok`, `timeout`, `runtime_error`, or `skipped` |
| `raw_output` | Original stdout |
| `normalized_output` | Normalized stdout |
| `elapsed_ms` | Execution time in milliseconds |
| `error_msg` | Compilation/runtime error message if any |

### `per_case_consistency.csv`

Stores consistency results for each seed and input case.

Main columns:

| Column | Description |
|---|---|
| `seed_id` | Function seed ID |
| `case_id` | Test case ID |
| `num_impl` | Number of implementations found |
| `expected_impls` | Expected number of implementations, normally 21 |
| `num_success` | Number of successful executions |
| `num_distinct_outputs` | Number of distinct normalized outputs |
| `reference_impl` | Reference implementation, preferably `A01` |
| `reference_output` | Normalized reference output |
| `consistency_pass` | `yes` or `no` |

### `per_seed_summary.csv`

Stores seed-level summary results.

Main columns:

| Column | Description |
|---|---|
| `seed_id` | Function seed ID |
| `seed_name` | Function name |
| `domain` | Coarse domain category |
| `num_impl` | Number of implementations found |
| `num_total_cases` | Number of input cases |
| `num_program_executions` | Number of program executions |
| `compile_errors` | Number of compilation errors |
| `timeout_errors` | Number of timeouts |
| `runtime_errors` | Number of runtime errors |
| `consistency_violations` | Number of failed input cases |
| `passed` | Whether this seed passed all checks |

### `failed_cases.csv`

Stores failed cases only.

This file is useful for debugging output mismatches, compilation errors, timeouts, and runtime errors.

### `audit_summary.json`

Stores the global audit summary.

Typical fields include:

```json
{
  "num_seeds": 50,
  "num_implementations": 1050,
  "num_base_cases": 100,
  "num_boundary_cases": 300,
  "num_random_cases": 1500,
  "num_total_input_cases": 1900,
  "num_program_executions": 39900,
  "compile_errors": 0,
  "timeout_errors": 0,
  "runtime_errors": 0,
  "consistency_violations": 0,
  "passed_seeds": 50,
  "failed_seeds": 0
}
```

## Pass Criteria

A seed passes the expanded consistency audit if:

1. the expected 21 implementations are found;
2. all implementations compile successfully;
3. all implementations run successfully for all generated input cases;
4. no timeout occurs;
5. all implementations under the same seed produce consistent normalized outputs for every input case.

## Notes

- The audit uses `A01` as the preferred reference implementation.
- Output comparison first uses exact normalized string matching.
- If exact matching fails, numeric token-wise comparison is attempted using a floating-point tolerance.
- The default floating-point tolerance is `1e-6`.
- For approximate numerical seeds such as `Sqrt` and `NewtonRoot`, seed-specific tolerance is defined in the script.
- This validation provides execution-based consistency evidence under expanded input cases. It is not a formal proof of full semantic equivalence.