# LGL-DynT4 Dataset
### LGL-DynT4: Logic-Guided Latent Dynamics for Type-4 Clone Detection

注意：限于github文件限制，本仓库未提供trace文件，请在 https://huggingface.co/datasets/lngoo/LGL-DynT4 对应目录下载

## 1. 数据集概况
**LGL-DynT4** 是一个面向下一代代码表征学习设计的**超高密度、多模态、语义对齐**基准数据集。它打破了传统代码数据集仅停留在语法层面的局限，通过将 50 类算法逻辑（F）与超过 10,000 条运行时执行轨迹（Trace）进行端到端的深度关联，为探索程序执行中的“计算物理定律”提供了实验室级别的精确观测数据。

本数据集通过捕获程序在执行过程中的潜空间动力学（Latent Dynamics）演化，旨在解决 Type-4（语义级）克隆检测中“同功能不同语法”的极难挑战。

### 🛠️ 核心应用领域 (Applications)
* **代码克隆检测 (Clone Detection)**：利用静态语法、动态行为、语义信息进行克隆检测。
* **软件表征学习 (Code Representation Learning)**：将代码静态拓扑与动态行为融合到统一的潜空间嵌入中。
* **抗混淆语义识别 (Deobfuscation & Resilience)**：利用运行时行为不变性，识别核心算法逻辑。
* **跨模态检索与翻译 (Cross-Modal Retrieval)**：实现源码、指令流与执行轨迹的跨模态映射。
* **自动化漏洞挖掘 (Automated Vulnerability Research)**：通过执行偏离识别潜藏的边界逻辑漏洞。

## 2. 多模态表征
数据集为每个代码样本提供了四种同步的模态数据：
* **Source_Raw**：原始 C 语言源代码，保留完整注释和 `main` 函数外壳。
* **Source_Clean**：归一化后的源代码，统一了函数命名并剥离了注释与外壳。
* **LLVM IR**：底层中间表示 (.ll)，提供指令级的执行流信息。
* **Trace**：运行时数值执行轨迹 (.csv)，捕获变量状态的动态演化。

## 3. 命名规则与对齐策略 (Conventions & Alignment)

### 3.1 命名规范 (Naming Conventions)
* **算法逻辑层 (Algorithm Logics - F)**：格式为 `F[ID]_[FunctionName]`。
    * *示例*：`F01_Sum`。`ID` 唯一标识一类算法功能逻辑。
* **算法变体层 (Algorithm Variants - A)**：格式为 `A[ID]_F[LogicID]_[Type]_[Description]`。
    * *示例*：`A01_F01_S_Loop.c`（种子代码）、`A02_F01_O_A01_Flat.c`（基于 A01 的混淆变体）。
    * **类型标识 (Type)**：`S` 代表种子算法；`O` 代表经过混淆处理的对抗样本。
* **执行轨迹层 (Execution Traces - T)**：格式为 `T[ID]_A[VariantID]_F[LogicID].csv`。
    * *示例*：`T01_A01_F01.csv`。`T01-T10` 分别对应所属 F 预设的 10 组不同输入参数。

### 3.2 对齐保障
* **纵向模态对齐**：对于任何变体 ID（如 `A01_F01`），其源码、IR 及 10 条 Trace 在语义上绝对等价。
* **横向逻辑对齐**：同一 F 下的所有变体（A）共用 10 组预定义输入参数。
* **输出一致性核查**：对于同一 F 下的每一个变体 A，我们确保了在源码层面上针对相同输入，其输出结果是完全一致的。

## 4. 数据规模与分布

### 4.1 基础数据量
* **算法逻辑 (F)**：**50 类**。
* **算法变体 (A)**：**1,050 个** (50 F × 21 A)。
* **执行轨迹 (T)**：**10,500 条** (1,050 A × 10 T)。

### 4.2 样本对统计 (1:1 采样比例)
| 数据集划分 | 逻辑类 (F) | 正样本对 (Label 1) | 负样本对 (Label 0) | 理论负样本最大值 | 样本对总计 |
| :--- | :---: | :---: | :---: | :---: | :--- |
| **训练集 (Train)** | 40 | 8,400 | 8,400 | **343,980** | 16,800 |
| **验证集 (Val)** | 5 | 1,050 | 1,050 | **4,410** | 2,100 |
| **测试集 (Test)** | 5 | 1,050 | 1,050 | **4,410** | 2,100 |
| **总计 (Full)** | **50** | **10,500** | **10,500** | **540,225** | **21,000** |

## 5. 数据质量保障 (Quality Assurance)

### 5.1 人工核查流程
我们在自动化审计的基础上，加入了深度人工核查以确保数据质量：
* **源码结构相似性核查**：人工评估变体间的结构差异。
* **归一化后代码核心函数核查**：确保统一了方法名及出入参标识符。
* **IR 正确性核对**：通过 IR 反向推导代码逻辑，确保编译表示的准确性。

### 5.2 自动化审计脚本
* `Audit_SourceRaw1_static.py` & `Audit_SourceRaw2_dynamic.py`：校验源码一致性。
* `Audit_SourceClean.py`：清洗后源码审计。
* `Audit_LLVM_IR.py`：IR 模态对齐审计。
* `Audit_Trace_Consistency.py`：轨迹数据一致性验证。

## 6. 目录结构

```plaintext
LGL-DynT4/
├── Data/                          # 【数据挂载点：多模态表征数据】
│   ├── Source_Raw/                # 原始源代码 (含注释与 main 函数)
│   │   └── FXX_FunctionName/      # 按照算法逻辑 (F) 分类
│   │       └── AXX_FXX_Variant.c  # 具体算法变体 (A) 实现
│   ├── Source_Clean/              # 归一化源代码 (剥离干扰信息)
│   │   └── FXX_FunctionName/
│   │       └── AXX_FXX_Variant.c  # 与 Raw 目录保持严格 ID 对齐
│   ├── LLVM_IR_Raw/               # 原始 LLVM 中间表示
│   │   └── FXX_FunctionName/
│   │       └── AXX_FXX_Variant.ll # 编译生成的指令流数据
│   ├── LLVM_IR_Clean/             # 预处理后的 LLVM IR
│   │   └── FXX_FunctionName/
│   │       └── AXX_FXX_Variant.ll
│   └── Trace/                     # 运行时数值演化轨迹
│       └── FXX_FunctionName/
│           └── AXX_FXX_Variant/   # 每个变体下属多个执行样本 (T)
│               └── TXX_AXX_FXX.csv # 包含变量状态演化的时序数据
├── Manifest/                      # 【核心索引：样本对齐与划分清单】
│   ├── Full_Pairs.csv             # 全量 1,050 个变体产生的配对索引
│   ├── Train_Split.csv            # 训练集对齐清单 (涵盖随机抽取的 40 类算法逻辑内部的变体组合)
│   ├── Val_Split.csv              # 验证集对齐清单 (涵盖随机抽取的 5 类算法逻辑内部的变体组合)
│   └── Test_Split.csv             # 测试集对齐清单 (涵盖随机抽取的 5 类算法逻辑内部的变体组合)
├── Scripts/                       # 【自动化脚本】
│   ├── Logs/              # 日志记录文件
│   ├── Gene_CleanCode_From_Raw.py # 自动化代码清洗与归一化工具
│   ├── Dataset_Splitter.py        # 数据集划分生成器
│   ├── Audit_SourceRaw1_static.py # 静态源码一致性审计工具
│   ├── Audit_SourceRaw2_dynamic.py# 动态执行一致性审计工具
│   ├── Audit_SourceClean.py       # 清洗后源码审计脚本
│   ├── Audit_LLVM_IR.py           # IR 模态对齐审计脚本
│   └── Audit_Trace_Consistency.py # 运行轨迹数据一致性验证工具
├── config.json                    # 算法逻辑 (F) 与语义描述映射配置
├── config_paras.json              # 算法逻辑 (F) 的Trace采集参数配置
├── README.md                      # 项目说明文档
└── Version.txt                    # 数据集版本记录 (当前: 1.0.0)
```