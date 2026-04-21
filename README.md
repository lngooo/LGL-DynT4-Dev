# LGL-DynT4-Dev

LGL-DynT4-Dev is the development repository for **LGL-DynT4**, a multi-modal benchmark for semantic clone detection with aligned source code, LLVM IR, and dynamic traces.

This repository is intended for development, reconstruction, auditing, and experiments.  
For the dataset release oriented toward direct use, please visit:

**Hugging Face:**  
https://huggingface.co/datasets/lngoo/LGL-DynT4

In general:

- **Hugging Face** provides the benchmark/data release
- **this GitHub repository** keeps the development-side project structure

## Overview

LGL-DynT4 is designed for semantic clone detection beyond surface-level similarity. It organizes aligned program representations under both **Natural** and **Obfuscated** settings, making it suitable for research on static and dynamic code understanding, clone detection, and related analysis tasks.

This repository keeps the project in a development-oriented form, including data organization, scripts, manifests, and baseline-related content.

## Repository Structure

```text
LGL-DynT4-Dev/
├── Data/
│   ├── Natural/
│   │   ├── LLVM_IR_Clean/
│   │   ├── LLVM_IR_Raw/
│   │   ├── Source_Clean/
│   │   └── Source_Raw/
│   └── Obfuscated/
│       ├── LLVM_IR_Clean/
│       ├── LLVM_IR_Raw/
│       ├── Source_Clean/
│       └── Source_Raw/
│
├── Manifest/
├── Scripts/
├── Scripts_eva2/
├── baseline/
│
├── .gitignore
├── README.md
├── Version.txt
├── config.json
└── config_paras.json
## Directory Description

### `Data/`

Stores the main multi-modal data.

#### `Data/Natural/`
Natural version of the dataset.

- `Source_Raw/`: raw source code
- `Source_Clean/`: cleaned source code
- `LLVM_IR_Raw/`: raw LLVM IR
- `LLVM_IR_Clean/`: cleaned LLVM IR

#### `Data/Obfuscated/`
Obfuscated version of the dataset.

- `Source_Raw/`: obfuscated raw source code
- `Source_Clean/`: cleaned obfuscated source code
- `LLVM_IR_Raw/`: raw LLVM IR generated from the obfuscated branch
- `LLVM_IR_Clean/`: cleaned LLVM IR generated from the obfuscated branch

### `Manifest/`

Stores split files, pair files, and other index-style metadata used to organize the benchmark.

### `Scripts/`

Main scripts for dataset construction, processing, auditing, and related utilities.

### `Scripts_eva2/`

Additional evaluation scripts and experiment-related utilities.

### `baseline/`

Baseline code and related experiment materials.

## About This Repository

This repository is not only a data package. It preserves the development-side layout of the project, including scripts, manifests, and baseline components.

It is suitable for:

- inspecting the project structure
- working with processing and audit scripts
- reproducing parts of the workflow
- running or extending baseline experiments
- supporting future development

For direct benchmark download and use, the Hugging Face release is the better entry point.

## Configuration Files

- `config.json`: configuration or mapping information used by the project
- `config_paras.json`: parameter-related configuration
- `Version.txt`: version record

## Citation

The paper is currently under review. Please replace the following placeholder information after acceptance.

```bibtex id="pg3ck0"
@article{lgldynt4_under_review,
  title   = {LGL-DynT4: A Multi-Modal Benchmark with Aligned Dynamic Traces for Semantic Clone Detection},
  author  = {To be updated},
  journal = {Under Review},
  year    = {2025},
  note    = {Placeholder citation. Please replace with the final publication information.}
}