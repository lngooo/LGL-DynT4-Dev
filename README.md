# LGL-DynT4-Dev

LGL-DynT4-Dev is the development and reproducibility repository for **LGL-DynT4: A Multi-Modal Benchmark with Aligned Dynamic Traces for Semantic Clone Detection**.

This repository is intended for development, reconstruction, auditing, and experiments.  
For the clean dataset release oriented toward direct training and evaluation, please visit:

**Hugging Face:**  
https://huggingface.co/datasets/lngoo/LGL-DynT4

In general:

- **Hugging Face** provides the clean benchmark/data release for direct use
- **this GitHub repository** keeps the development-side project structure for reconstruction, auditing, reproducibility, and extension

## Overview

LGL-DynT4 is a controlled multi-modal benchmark for **algorithmic-logic-level Type-4 clone detection**. It aligns source code, LLVM intermediate representation, and dynamic execution traces under shared algorithmic logic.

The benchmark contains:

- **50 functional seeds**
- **21 implementation variants per seed**
- **1,050 source programs**
- **10 execution traces per implementation**
- **10,500 execution traces**

For each implementation, LGL-DynT4 provides five aligned modalities:

- `Source_Raw`
- `Source_Clean`
- `LLVM_IR_Raw`
- `LLVM_IR_Clean`
- `Trace`

The benchmark is organized under both **Natural** and **Obfuscated** settings, enabling controlled analysis of static and dynamic program representations under identifier-level perturbation.

LGL-DynT4 follows the hierarchical organization:

```text
F → A → T
```

where `F` denotes a functional seed, `A` denotes an implementation variant, and `T` denotes an execution trace collected under a specific input case.

This repository keeps the project in a development-oriented form, including data organization, scripts, manifests, configuration files, and baseline-related content.

## Repository Structure

```text
LGL-DynT4-Dev/
├── Data/
│   ├── Natural/
│   │   ├── LLVM_IR_Clean/
│   │   ├── LLVM_IR_Raw/
│   │   ├── Source_Clean/
│   │   ├── Source_Raw/
│   │   └── Trace/
│   └── Obfuscated/
│       ├── LLVM_IR_Clean/
│       ├── LLVM_IR_Raw/
│       ├── Source_Clean/
│       ├── Source_Raw/
│       └── Trace/
│
├── Manifest/
│   ├── Full_Pairs.csv
│   ├── Train_Split.csv
│   ├── Val_Split.csv
│   └── Test_Split.csv
│
├── Scripts/
├── Scripts_eva2/
├── baseline/
│
├── .gitignore
├── README.md
├── Version.txt
├── config.json
└── config_paras.json
```

The released data follows consistent identifiers across modalities. Source implementations use names such as:

```text
A01_F01_S_Loop.c
```

while execution traces use names such as:

```text
T01_A01_F01.csv
```

This naming scheme preserves the correspondence among functional seeds, implementation variants, and execution traces.

## About This Repository

This repository is not only a data package. It preserves the development-side layout of the project, including scripts, manifests, configuration files, and baseline components.

It is suitable for:

- inspecting the project structure
- working with processing and audit scripts
- reproducing parts of the dataset construction workflow
- examining the fixed train/validation/test splits
- running or extending baseline experiments
- supporting future development and extension

The benchmark uses fixed functional-seed-level train/validation/test splits. Implementations belonging to the same functional seed are kept within the same split to avoid logic-level leakage across training and evaluation.

For direct benchmark download and use, the Hugging Face release is the better entry point.

## Configuration Files

- `config.json`: function- and project-level configuration or mapping information used by the development pipeline
- `config_paras.json`: seed-specific input configurations used for dynamic trace generation
- `Version.txt`: version record

## Citation

The paper **LGL-DynT4: A Multi-Modal Benchmark with Aligned Dynamic Traces for Semantic Clone Detection** has been accepted for publication.

Please use the following citation. Final bibliographic information such as DOI, volume, issue, and page numbers will be updated when available.

```bibtex
@article{li2026lgldynt4,
  title   = {LGL-DynT4: A Multi-Modal Benchmark with Aligned Dynamic Traces for Semantic Clone Detection},
  author  = {Guilin Li and Tao Zhou and Huaiyu Bi and Bin Yang and Xuemei Huang and Shenggen Ju},
  journal = {IEEE Transactions on Software Engineering}, 
  year = {2026}, 
  note = {Accepted for publication}
}
```
