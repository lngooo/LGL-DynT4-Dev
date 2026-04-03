# LGL-DynT4 Dataset
### LGL-DynT4: Logic-Guided Latent Dynamics for Type-4 Clone Detection

## 1. Overview
**LGL-DynT4** is an **ultra-high-density, multi-modal, and semantically aligned** benchmark dataset designed for next-generation code representation learning. It breaks the limitations of traditional code datasets that only remain at the syntax level by establishing end-to-end deep correlations between 50 categories of algorithm logic (F) and over 10,000 runtime execution traces (Trace), providing laboratory-grade precise observation data for exploring the "physical laws of computation" in program execution.

By capturing the evolution of Latent Dynamics during program execution, this dataset aims to solve the extreme challenge of "same function, different syntax" in Type-4 (semantic-level) clone detection.

### 🛠️ Core Applications
* **Code Clone Detection**: Utilizing static syntax, dynamic behavior, and semantic information for clone detection and identifying code clones.
* **Code Representation Learning**: Researching how to fuse the static topology and dynamic behavior of code into a unified latent space embedding.
* **Deobfuscation & Resilience**: Leveraging the invariance of runtime behavior to identify core algorithm logic through deep obfuscation methods such as control flow flattening and opaque predicates.
* **Cross-Modal Retrieval**: Achieving cross-modal semantic mapping and alignment among source code, instruction streams (IR), and execution traces.
* **Automated Vulnerability Research**: Identifying hidden boundary logic vulnerabilities by analyzing execution deviations.

## 2. Multi-modal Representation
The dataset provides four synchronized modal data for each code sample:
* **Source_Raw**: Original C language source code, retaining complete comments and `main` function shells.
* **Source_Clean**: Normalized source code, with unified function naming and stripped of comments and shells.
* **LLVM IR**: Low-level intermediate representation (.ll), providing instruction-level execution flow information.
* **Trace**: Runtime numerical execution traces (.csv), capturing the dynamic evolution of variable states.

## 3. Conventions & Alignment

### 3.1 Naming Conventions
* **Algorithm Logics (F)**: Formatted as `F[ID]_[FunctionName]` (e.g., `F01_Sum`). `ID` uniquely identifies a category of algorithm functional logic.
* **Algorithm Variants (A)**: Formatted as `A[ID]_F[LogicID]_[Type]_[Description]` (e.g., `A01_F01_S_Loop.c`).
    * **Type Identification**: `S` stands for Seed algorithm; `O` stands for Adversarial samples processed via obfuscation.
* **Execution Traces (T)**: Formatted as `T[ID]_A[VariantID]_F[LogicID].csv` (e.g., `T01_A01_F01.csv`). `T01-T10` correspond to the 10 sets of different input parameters preset for the respective F.

### 3.2 Alignment Guarantee
* **Vertical Modal Alignment**: For any variant ID (e.g., `A01_F01`), its source code, IR, and 10 Traces are absolutely equivalent in semantics.
* **Horizontal Logic Alignment**: All variants (A) under the same F share the same 10 sets of predefined input parameters.
* **Output Consistency Check**: For every variant A under the same F, we ensure that the output results are completely consistent at the source code level for the same inputs.

## 4. Scale & Distribution

### 4.1 Basic Data Volume
* **Algorithm Logics (F)**: **50 categories**.
* **Algorithm Variants (A)**: **1,050 variants** (50 F × 21 A).
* **Execution Traces (T)**: **10,500 traces** (1,050 A × 10 T).

### 4.2 Pair Statistics (1:1 Sampling Ratio)
| Dataset Split | Algorithm Logics (F) | Positive Pairs (Label 1) | Negative Pairs (Label 0) | Theoretical Max Negatives | Total Pairs |
| :--- | :---: | :---: | :---: | :---: | :--- |
| **Train Split** | 40 | 8,400 | 8,400 | **343,980** | 16,800 |
| **Val Split** | 5 | 1,050 | 1,050 | **4,410** | 2,100 |
| **Test Split** | 5 | 1,050 | 1,050 | **4,410** | 2,100 |
| **Total (Full)** | **50** | **10,500** | **10,500** | **540,225** | **21,000** |


## 5. Quality Assurance

### 5.1 Manual Verification Process
On the basis of automated auditing, we added deep manual verification to ensure data quality:
* **Source Code Structure Similarity Check**: Manually assessing the structural differences between variants.
* **Normalized Code Core Function Check**: Ensuring unified method names and input/output parameter identifiers.
* **IR Correctness Verification**: Reverse-deriving code logic from IR to ensure the accuracy of the compiled representation.

### 5.2 Automated Audit Scripts
* `Audit_SourceRaw1_static.py` & `Audit_SourceRaw2_dynamic.py`: Verifying source code consistency.
* `Audit_SourceClean.py`: Auditing normalized source code.
* `Audit_LLVM_IR.py`: Auditing IR modal alignment.
* `Audit_Trace_Consistency.py`: Verifying trace data consistency.

## 6. Directory Structure

```plaintext
LGL-DynT4/
├── Data/                          # [Data Mount Point: Multi-modal Representation Data]
│   ├── Source_Raw/                # Original Source (with comments and main)
│   │   └── FXX_FunctionName/      # Classified by Algorithm Logic (F)
│   │       └── AXX_FXX_Variant.c  # Specific Algorithm Variant (A) implementation
│   ├── Source_Clean/              # Normalized Source (stripped of interference)
│   │   └── FXX_FunctionName/
│   │       └── AXX_FXX_Variant.c  # Strict ID alignment with Raw directory
│   ├── LLVM_IR_Raw/               # Original LLVM IR
│   │   └── FXX_FunctionName/
│   │       └── AXX_FXX_Variant.ll # Compiled instruction stream data
│   ├── LLVM_IR_Clean/             # Preprocessed LLVM IR
│   │   └── FXX_FunctionName/
│   │       └── AXX_FXX_Variant.ll
│   └── Trace/                     # Runtime numerical evolution traces
│       └── FXX_FunctionName/
│           └── AXX_FXX_Variant/   # Multiple execution samples (T) per variant
│               └── TXX_AXX_FXX.csv # Time-series data of variable state evolution
├── Manifest/                      # [Core Index: Alignment and Split Lists]
│   ├── Full_Pairs.csv             # Index of pairs from all 1,050 variants
│   ├── Train_Split.csv            # Training split (covering 40 random algorithm logics)
│   ├── Val_Split.csv              # Validation split (covering 5 random algorithm logics)
│   └── Test_Split.csv             # Test split (covering 5 random algorithm logics)
├── Scripts/                       # [Automated Scripts]
│   ├── Logs/                      # Log files
│   ├── Gene_CleanCode_From_Raw.py # Automated code cleaning and normalization tool
│   ├── Dataset_Splitter.py        # Dataset split generator
│   ├── Audit_SourceRaw1_static.py # Static source code consistency audit tool
│   ├── Audit_SourceRaw2_dynamic.py# Dynamic execution consistency audit tool
│   ├── Audit_SourceClean.py       # Normalized source code audit script
│   ├── Audit_LLVM_IR.py           # IR modal alignment audit script
│   └── Audit_Trace_Consistency.py # Trace data consistency verification tool
├── config.json                    # Algorithm Logic (F) and semantic description mapping
├── config_paras.json              # Trace collection parameters for Algorithm Logic (F)
├── README.md                      # Project documentation
└── Version.txt                    # Dataset version record (Current: 1.0.0)