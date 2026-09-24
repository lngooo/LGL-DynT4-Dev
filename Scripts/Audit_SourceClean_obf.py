#!/usr/bin/env python3
# -*- coding: utf-8 -*-

"""
LGL-DynT4 Obfuscated Source_Clean Auditor v2
----------------------------------------

Purpose:
    Audit Data/Obfuscated/Source_Clean after identifier-level perturbation.

Why this script is different from Audit_SourceClean.py:
    The original clean-code auditor assumes that each cleaned function keeps the
    original seed-level function name, e.g., F01_Sum -> Sum. This assumption is
    valid for Natural/Source_Clean, but it is not valid for Obfuscated/Source_Clean,
    where function names and parameter names are randomized.

This script checks anonymous interface-shape consistency instead:
    1. Directory completeness: 50 seed folders.
    2. File completeness: 21 A-files per seed.
    3. One exported top-level function per cleaned file.
    4. A01-A21 share the same return type.
    5. A01-A21 share the same parameter-type sequence.
    6. Function names and parameter names are allowed to differ.

Recommended path:
    Scripts/Audit_SourceClean_Obfuscated.py
"""

import csv
import os
import re
from pathlib import Path
from typing import Dict, List, Optional, Tuple


# ============================================================
# Configuration
# ============================================================

PROJECT_ROOT = Path(__file__).resolve().parents[1]

TARGET_DIR = PROJECT_ROOT / "Data" / "Obfuscated" / "Source_Clean"

LOG_DIR = PROJECT_ROOT / "Scripts" / "Logs" / "Audit_SourceClean_obf"
SUMMARY_CSV = LOG_DIR / "obfuscated_source_clean_audit_summary.csv"
DETAIL_CSV = LOG_DIR / "obfuscated_source_clean_audit_details.csv"

EXPECTED_NUM_SEEDS = 50
EXPECTED_FILES_PER_SEED = 21

ENCODINGS = ["utf-8", "gbk", "latin-1"]

IGNORE_STATIC_HELPERS = True
VERBOSE = True


# ============================================================
# Basic C parsing helpers
# ============================================================

C_KEYWORDS = {
    "if", "for", "while", "switch", "return", "sizeof", "case", "do",
    "else", "typedef", "struct", "union", "enum"
}

CONTROL_WORDS = {
    "if", "for", "while", "switch", "return", "sizeof"
}

TYPE_QUALIFIERS = {
    "const", "volatile", "restrict", "register", "static", "inline", "extern"
}

BUILTIN_TYPE_WORDS = {
    "void", "char", "short", "int", "long", "float", "double", "signed", "unsigned",
    "_Bool", "_Complex", "_Imaginary", "size_t", "ssize_t", "int8_t", "int16_t",
    "int32_t", "int64_t", "uint8_t", "uint16_t", "uint32_t", "uint64_t"
}


def read_text(path: Path) -> str:
    last_error = None
    for enc in ENCODINGS:
        try:
            return path.read_text(encoding=enc)
        except Exception as exc:
            last_error = exc
    raise RuntimeError(f"Failed to read {path}: {last_error}")


def strip_comments_and_literals(text: str) -> str:
    out = []
    i = 0
    n = len(text)

    while i < n:
        if text.startswith("//", i):
            j = text.find("\n", i)
            if j == -1:
                out.append(" ")
                break
            out.append("\n")
            i = j + 1
            continue

        if text.startswith("/*", i):
            j = text.find("*/", i + 2)
            if j == -1:
                out.append(" ")
                break
            out.append(" " * (j + 2 - i))
            i = j + 2
            continue

        ch = text[i]

        if ch == '"':
            out.append('""')
            i += 1
            escaped = False
            while i < n:
                if escaped:
                    escaped = False
                elif text[i] == "\\":
                    escaped = True
                elif text[i] == '"':
                    i += 1
                    break
                i += 1
            continue

        if ch == "'":
            out.append("'x'")
            i += 1
            escaped = False
            while i < n:
                if escaped:
                    escaped = False
                elif text[i] == "\\":
                    escaped = True
                elif text[i] == "'":
                    i += 1
                    break
                i += 1
            continue

        out.append(ch)
        i += 1

    return "".join(out)


def remove_preprocessor_lines(text: str) -> str:
    lines = []
    for line in text.splitlines():
        if line.lstrip().startswith("#"):
            lines.append("")
        else:
            lines.append(line)
    return "\n".join(lines)


def find_matching_brace(text: str, open_pos: int) -> int:
    depth = 0
    for i in range(open_pos, len(text)):
        if text[i] == "{":
            depth += 1
        elif text[i] == "}":
            depth -= 1
            if depth == 0:
                return i
    return -1


def normalize_ws(s: str) -> str:
    return " ".join(s.replace("\n", " ").replace("\t", " ").split())


def normalize_type_spacing(s: str) -> str:
    s = normalize_ws(s)
    s = re.sub(r"\s*\*\s*", "*", s)
    s = re.sub(r"\s+", " ", s).strip()
    s = s.replace(" *", "*")
    return s


def remove_parameter_name(param: str) -> str:
    param = normalize_type_spacing(param)

    if param in {"", "void"}:
        return param

    param = re.sub(r"\[[^\]]*\]", "[]", param)

    if "(*" in param:
        param = re.sub(r"\(\s*\*\s*[A-Za-z_][A-Za-z0-9_]*\s*\)", "(*)", param)
        return normalize_type_spacing(param)

    array_match = re.match(r"^(?P<type>.+?)\s+(?P<name>[A-Za-z_][A-Za-z0-9_]*)\s*(?P<arr>(?:\[\])+)$$", param)
    if array_match:
        return normalize_type_spacing(array_match.group("type") + array_match.group("arr"))

    compact_array_match = re.match(r"^(?P<type>.+?)(?P<stars>\*+)?(?P<name>[A-Za-z_][A-Za-z0-9_]*)\s*(?P<arr>(?:\[\])+)$$", param)
    if compact_array_match and compact_array_match.group("name") not in BUILTIN_TYPE_WORDS:
        base_type = compact_array_match.group("type")
        stars = compact_array_match.group("stars") or ""
        return normalize_type_spacing(base_type + stars + compact_array_match.group("arr"))

    tokens = param.split()
    if len(tokens) == 1:
        token = tokens[0]
        m = re.match(r"(.+\*+)([A-Za-z_][A-Za-z0-9_]*)$", token)
        if m:
            return normalize_type_spacing(m.group(1))
        return token

    last = tokens[-1]

    if re.fullmatch(r"\*+[A-Za-z_][A-Za-z0-9_]*", last):
        star_count = len(last) - len(last.lstrip("*"))
        tokens[-1] = "*" * star_count
        return normalize_type_spacing(" ".join(tokens))

    if re.fullmatch(r"[A-Za-z_][A-Za-z0-9_]*\[\]", last):
        name = last[:-2]
        if name not in BUILTIN_TYPE_WORDS and name not in TYPE_QUALIFIERS:
            return normalize_type_spacing(" ".join(tokens[:-1]) + "[]")

    if re.fullmatch(r"[A-Za-z_][A-Za-z0-9_]*", last):
        if last not in BUILTIN_TYPE_WORDS and last not in TYPE_QUALIFIERS:
            return normalize_type_spacing(" ".join(tokens[:-1]))

    m = re.match(r"(.+\*+)([A-Za-z_][A-Za-z0-9_]*)$", last)
    if m:
        tokens[-1] = m.group(1)
        return normalize_type_spacing(" ".join(tokens))

    return normalize_type_spacing(" ".join(tokens))


def split_params(params: str) -> List[str]:
    params = params.strip()
    if params == "" or params == "void":
        return []

    result = []
    current = []
    paren_depth = 0
    bracket_depth = 0

    for ch in params:
        if ch == "," and paren_depth == 0 and bracket_depth == 0:
            result.append("".join(current).strip())
            current = []
            continue

        current.append(ch)

        if ch == "(":
            paren_depth += 1
        elif ch == ")":
            paren_depth -= 1
        elif ch == "[":
            bracket_depth += 1
        elif ch == "]":
            bracket_depth -= 1

    if current:
        result.append("".join(current).strip())

    return result


def normalize_param_types(params: str) -> str:
    param_items = split_params(params)
    types = [remove_parameter_name(p) for p in param_items]
    types = [t for t in types if t and t != "void"]
    return ",".join(types)


def normalize_return_type(ret: str) -> str:
    ret = normalize_type_spacing(ret)
    words = ret.split()
    filtered = [w for w in words if w not in {"static", "inline", "extern"}]
    return normalize_type_spacing(" ".join(filtered))


def is_probable_function_definition(prefix: str, name: str) -> bool:
    if name in CONTROL_WORDS:
        return False
    if not prefix.strip():
        return False
    if prefix.strip().endswith("="):
        return False
    return True


def extract_top_level_functions(content: str) -> List[Dict[str, str]]:
    cleaned = strip_comments_and_literals(content)
    cleaned = remove_preprocessor_lines(cleaned)

    funcs = []
    pattern = re.compile(
        r"(?P<prefix>[A-Za-z_][A-Za-z0-9_\s\*\(\),\[\]]*?)"
        r"\b(?P<name>[A-Za-z_][A-Za-z0-9_]*)\s*"
        r"\((?P<params>[^;{}()]*(?:\([^)]*\)[^;{}()]*)*)\)\s*\{",
        re.MULTILINE
    )

    for m in pattern.finditer(cleaned):
        prefix = m.group("prefix")
        name = m.group("name")
        params = m.group("params")

        if not is_probable_function_definition(prefix, name):
            continue

        brace_pos = cleaned.find("{", m.end() - 1)
        if brace_pos < 0:
            continue

        before = cleaned[:m.start()]
        if before.count("{") != before.count("}"):
            continue

        end = find_matching_brace(cleaned, brace_pos)
        if end < 0:
            continue

        ret = prefix.strip()
        ret = re.sub(r"\b(static|inline|extern)\b", lambda x: x.group(1), ret).strip()
        ret_words = ret.split()
        if name in ret_words:
            continue

        funcs.append({
            "name": name,
            "return_type": normalize_return_type(ret),
            "params_raw": normalize_ws(params),
            "param_shape": normalize_param_types(params),
            "signature_shape": f"{normalize_return_type(ret)}|{normalize_param_types(params)}",
            "has_static_prefix": bool(re.search(r"\bstatic\b", prefix)),
            "has_inline_prefix": bool(re.search(r"\binline\b", prefix)),
            "start": str(m.start()),
            "end": str(end),
        })

    return funcs


def select_exported_function(functions: List[Dict[str, str]]) -> Optional[Dict[str, str]]:
    candidates = functions

    if IGNORE_STATIC_HELPERS:
        non_static = [f for f in functions if not f["has_static_prefix"]]
        if non_static:
            candidates = non_static

    non_main = [f for f in candidates if f["name"] != "main"]
    if non_main:
        candidates = non_main

    if len(candidates) == 1:
        return candidates[0]

    if len(candidates) > 1:
        return candidates[-1]

    return None


# ============================================================
# Auditor
# ============================================================

class ObfuscatedCleanAuditor:
    def __init__(self, target_dir: Path):
        self.target_dir = target_dir
        self.summary_rows = []
        self.detail_rows = []
        self.failed_folders = []

    def run(self) -> None:
        if not self.target_dir.exists():
            print(f"[ERROR] Directory not found: {self.target_dir}")
            raise SystemExit(1)

        LOG_DIR.mkdir(parents=True, exist_ok=True)

        subdirs = sorted([p for p in self.target_dir.iterdir() if p.is_dir()])

        if VERBOSE:
            print("=" * 80)
            print("LGL-DynT4 Obfuscated Source_Clean Anonymous Signature Audit")
            print(f"Target directory: {self.target_dir}")
            print(f"Seed folders found: {len(subdirs)}")
            print("=" * 80)

        for subdir in subdirs:
            self.audit_folder(subdir)

        self.write_logs()
        self.print_summary(len(subdirs))

    def audit_folder(self, folder: Path) -> None:
        seed = folder.name
        files = sorted([p for p in folder.iterdir() if p.is_file() and p.suffix == ".c"])
        a_files = [p for p in files if re.match(r"^A(0[1-9]|1[0-9]|2[0-1])", p.name)]

        folder_passed = True
        reason = ""

        if len(a_files) != EXPECTED_FILES_PER_SEED:
            folder_passed = False
            reason = f"Expected {EXPECTED_FILES_PER_SEED} A-files, found {len(a_files)}"

        ref_shape = ""
        ref_file = ""
        file_shapes = []

        for f in a_files:
            try:
                content = read_text(f)
                functions = extract_top_level_functions(content)
                exported = select_exported_function(functions)

                if exported is None:
                    folder_passed = False
                    status = "failed"
                    err = "No exported top-level function found"
                    shape = ""
                    func_name = ""
                    ret = ""
                    params = ""
                else:
                    status = "success"
                    err = ""
                    shape = exported["signature_shape"]
                    func_name = exported["name"]
                    ret = exported["return_type"]
                    params = exported["param_shape"]

                self.detail_rows.append({
                    "seed": seed,
                    "file": f.name,
                    "status": status,
                    "function_name": func_name,
                    "return_type": ret,
                    "param_shape": params,
                    "signature_shape": shape,
                    "num_top_level_functions": len(functions),
                    "error": err,
                })

                file_shapes.append((f.name, shape, status))

                if f.name.startswith("A01") and shape:
                    ref_shape = shape
                    ref_file = f.name

            except Exception as exc:
                folder_passed = False
                self.detail_rows.append({
                    "seed": seed,
                    "file": f.name,
                    "status": "failed",
                    "function_name": "",
                    "return_type": "",
                    "param_shape": "",
                    "signature_shape": "",
                    "num_top_level_functions": 0,
                    "error": str(exc),
                })
                file_shapes.append((f.name, "", "failed"))

        if not ref_shape:
            folder_passed = False
            if not reason:
                reason = "A01 reference signature shape missing"

        mismatches = []
        if ref_shape:
            for fname, shape, status in file_shapes:
                if status != "success":
                    mismatches.append(fname)
                elif shape != ref_shape:
                    mismatches.append(fname)

        if mismatches:
            folder_passed = False
            if not reason:
                reason = "Signature-shape mismatch: " + ", ".join(mismatches)

        if folder_passed:
            result = "passed"
        else:
            result = "failed"
            self.failed_folders.append(seed)

        self.summary_rows.append({
            "seed": seed,
            "result": result,
            "num_files": len(a_files),
            "reference_file": ref_file,
            "reference_signature_shape": ref_shape,
            "reason": reason,
        })

        if VERBOSE:
            print(f"\n>>> {seed}")
            print(f"  Files: {len(a_files)}")
            print(f"  Reference: {ref_file if ref_file else 'N/A'}")
            print(f"  Expected shape: {ref_shape if ref_shape else 'N/A'}")
            print(f"  Result: {result.upper()}")
            if reason:
                print(f"  Reason: {reason}")

    def write_logs(self) -> None:
        with SUMMARY_CSV.open("w", encoding="utf-8", newline="") as f:
            writer = csv.DictWriter(
                f,
                fieldnames=[
                    "seed", "result", "num_files", "reference_file",
                    "reference_signature_shape", "reason"
                ],
            )
            writer.writeheader()
            writer.writerows(self.summary_rows)

        with DETAIL_CSV.open("w", encoding="utf-8", newline="") as f:
            writer = csv.DictWriter(
                f,
                fieldnames=[
                    "seed", "file", "status", "function_name", "return_type",
                    "param_shape", "signature_shape", "num_top_level_functions", "error"
                ],
            )
            writer.writeheader()
            writer.writerows(self.detail_rows)

    def print_summary(self, num_subdirs: int) -> None:
        failed_count = len(self.failed_folders)
        passed_count = num_subdirs - failed_count

        print("\n" + "=" * 80)
        print("FINAL AUDIT SUMMARY")
        print("=" * 80)
        print(f"Target directory              : {self.target_dir}")
        print(f"Seed folders scanned          : {num_subdirs}")
        print(f"Expected seed folders         : {EXPECTED_NUM_SEEDS}")
        print(f"Passed                        : {passed_count}")
        print(f"Failed                        : {failed_count}")
        print(f"Summary CSV                   : {SUMMARY_CSV}")
        print(f"Detail CSV                    : {DETAIL_CSV}")

        if num_subdirs != EXPECTED_NUM_SEEDS:
            print(f"[WARN] Expected {EXPECTED_NUM_SEEDS} seed folders, found {num_subdirs}")

        if failed_count > 0:
            print(f"Failed folders                : {', '.join(self.failed_folders)}")
            print("Status                        : FAILED")
            print("=" * 80)
            raise SystemExit(1)

        print("Status                        : ALL PASSED")
        print("=" * 80)


if __name__ == "__main__":
    auditor = ObfuscatedCleanAuditor(TARGET_DIR)
    auditor.run()