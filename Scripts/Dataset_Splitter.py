"""
LGL-DynT4 Dataset PairFactory
---------------------------------------------------------------
This script partitions the dataset into Train, Val, and Test sets using
Algorithm Logic (F-ID) as the primary granularity. It ensures strict logic
isolation to validate cross-domain generalization (P4).

Core Functions:
- Stratified splitting by F-IDs (e.g., F01, F02) to prevent label leakage.
- Balanced pair generation (Positive: Intra-F; Negative: Inter-F).
- Support for explicit ratio configuration (e.g., 1:1, 1:3).
"""
import os
import random
import pandas as pd
import logging
from itertools import combinations

# ================= CONFIGURATION =================
# Path to the source code directory (Source_Raw)
BASE_DIR = "../Data/Source_Raw"
# Target directory for manifest files
OUTPUT_DIR = "../Manifest"

# Dataset split ratio for (Train, Val, Test)
RATIO_TRAIN_VAL_TEST = (0.8, 0.1, 0.1)

# ---------------------------------------------------------
# POS_NEG_RATIO_STR: Explicit ratio of Positive to Negative samples
# Format Options: "1:1" (Baseline), "1:3" (Advanced), "1:5" (P3-Level)
# ---------------------------------------------------------
POS_NEG_RATIO_STR = "1:1"

# Logging setup
logging.basicConfig(level=logging.INFO, format='%(levelname)s: %(message)s')


# =================================================

def parse_ratio(ratio_str):
    """Parses '1:N' string to a floating point multiplier."""
    try:
        parts = ratio_str.split(':')
        return float(parts[1]) / float(parts[0])
    except Exception as e:
        logging.error(f"Invalid ratio format '{ratio_str}'. Defaulting to 1:1.")
        return 1.0


def get_f_id(folder_name):
    """Extracts only the FXX part from folder name (e.g., F01_Sum -> F01)."""
    return folder_name.split('_')[0]


def generate_dataset_manifests():
    """
    Generates manifests with explicit logging of F-IDs in each split.
    """
    if not os.path.exists(BASE_DIR):
        logging.error(f"Source directory {BASE_DIR} not found.")
        return

    # 1. Fetch all F-folders
    all_f_folders = [d for d in os.listdir(BASE_DIR) if os.path.isdir(os.path.join(BASE_DIR, d))]
    all_f_folders.sort()

    # Random seed for reproducibility
    random.seed(42)
    random.shuffle(all_f_folders)

    total_f = len(all_f_folders)
    train_count = int(total_f * RATIO_TRAIN_VAL_TEST[0])
    val_count = int(total_f * RATIO_TRAIN_VAL_TEST[1])

    # Stratified Splitting
    splits_folders = {
        "Train": all_f_folders[:train_count],
        "Val": all_f_folders[train_count:train_count + val_count],
        "Test": all_f_folders[train_count + val_count:]
    }

    if not os.path.exists(OUTPUT_DIR):
        os.makedirs(OUTPUT_DIR)

    neg_multiplier = parse_ratio(POS_NEG_RATIO_STR)
    all_dfs = []

    print("\n" + "=" * 50)
    print(f"DATASET SPLIT LOG (Ratio {POS_NEG_RATIO_STR})")
    print("=" * 50)

    for split_name, f_list in splits_folders.items():
        # Print F-IDs for this split
        f_ids_only = [get_f_id(f) for f in f_list]
        print(f"[{split_name}] F-IDs ({len(f_ids_only)}): {', '.join(f_ids_only)}")

        pos_pairs = []
        neg_pairs = []
        f_to_a = {}

        for f in f_list:
            # Get implementation IDs without .c extension
            a_files = [os.path.splitext(f_item)[0] for f_item in os.listdir(os.path.join(BASE_DIR, f))
                       if f_item.endswith('.c')]
            f_to_a[f] = [f"{f}/{a}" for a in a_files]

        # 2. Positive Pairs (Intra-F)
        for f, a_list in f_to_a.items():
            for a1, a2 in combinations(a_list, 2):
                pos_pairs.append([a1, a2, 1])

        # 3. Negative Pairs (Inter-F)
        f_keys = list(f_to_a.keys())
        for i in range(len(f_keys)):
            for j in range(i + 1, len(f_keys)):
                f1, f2 = f_keys[i], f_keys[j]
                for a1 in f_to_a[f1]:
                    for a2 in f_to_a[f2]:
                        neg_pairs.append([a1, a2, 0])

        # 4. Sampling
        target_neg_count = int(len(pos_pairs) * neg_multiplier)
        sampled_neg = random.sample(neg_pairs, min(len(neg_pairs), target_neg_count))

        # 5. Save Split
        combined = pos_pairs + sampled_neg
        random.shuffle(combined)

        df = pd.DataFrame(combined, columns=['algorithm1', 'algorithm2', 'label'])
        df.to_csv(os.path.join(OUTPUT_DIR, f"{split_name}_Split.csv"), index=False)
        all_dfs.append(df)

        print(f"      -> Generated {len(pos_pairs)} Pos pairs, {len(sampled_neg)} Neg pairs.")

    # 6. Final Unified Manifest
    full_df = pd.concat(all_dfs, ignore_index=True)
    full_df.to_csv(os.path.join(OUTPUT_DIR, "Full_Pairs.csv"), index=False)
    print("=" * 50)
    logging.info(f"Task Complete: Full_Pairs.csv generated with {len(full_df)} total records.")


if __name__ == "__main__":
    generate_dataset_manifests()