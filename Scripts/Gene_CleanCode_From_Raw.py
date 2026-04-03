"""
LGL-DynT4 Dataset Preprocessor - Preserving Original Naming
-----------------------------------------------------------
This script transforms raw C source code into a "Clean" format.
It strips headers, main functions, and comments while keeping original
function names intact.
"""

import os
import re

# Path Configuration: Relative to the Scripts/ folder
RAW_DIR = os.path.join("..", "Data", "Source_Raw")
CLEAN_DIR = os.path.join("..", "Data", "Source_Clean")


def clean_code(code):
    """
    Cleans C code while maintaining aesthetic structure and original names.
    """
    # 1. Remove Header Files (#include <...>)
    code = re.sub(r'#include\s*[<"].*?[>"]', '', code)

    # 2. Remove main function block
    # Targets the 'int main' signature and its entire scope
    code = re.sub(r'int\s+main\s*\(.*?\)\s*\{.*\}', '', code, flags=re.DOTALL)

    # 3. Remove single-line and multi-line comments
    code = re.sub(r'//.*', '', code)
    code = re.sub(r'/\*.*?\*/', '', code, flags=re.DOTALL)

    # 4. Aesthetic Cleanup
    # Strips unnecessary whitespace while preserving logic indentation
    lines = code.splitlines()
    cleaned_lines = []
    for line in lines:
        if line.strip():
            cleaned_lines.append(line)
        elif cleaned_lines and cleaned_lines[-1] != "":
            # Keep a maximum of one blank line for readability
            cleaned_lines.append("")

    return "\n".join(cleaned_lines).strip()


def process_all():
    """
    Walks through Source_Raw and generates Source_Clean mirroring the folder tree exactly.
    """
    if not os.path.exists(CLEAN_DIR):
        os.makedirs(CLEAN_DIR)
        print(f"[*] Initialized Data/Source_Clean/")

    for root, dirs, files in os.walk(RAW_DIR):
        for file in files:
            if file.endswith(".c"):
                raw_path = os.path.join(root, file)

                with open(raw_path, 'r', encoding='utf-8') as f:
                    content = f.read()

                # Execute cleaning without name normalization
                cleaned_content = clean_code(content)

                # Create mirrored output directory maintaining exact naming
                relative_path = os.path.relpath(root, RAW_DIR)
                target_folder = os.path.join(CLEAN_DIR, relative_path)

                if not os.path.exists(target_folder):
                    os.makedirs(target_folder)

                # Save the processed code with original filename
                output_path = os.path.join(target_folder, file)
                with open(output_path, 'w', encoding='utf-8') as f:
                    f.write(cleaned_content)
                print(f"[Done] Cleaned {file} in {relative_path}")


if __name__ == "__main__":
    print("Starting LGL-DynT4 Preprocessing (Preserving Names)...")
    process_all()
    print("\nProcessing complete. Cleaned files available in Data/Source_Clean/")