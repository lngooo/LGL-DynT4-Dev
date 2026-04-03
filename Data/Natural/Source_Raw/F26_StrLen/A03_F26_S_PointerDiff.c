/**
 * LGL-DynT4 Dataset - Function: StrLen
 * -----------------------------------------
 * File: A03_F26_S_PointerDiff.c
 * Implementation Logic: Pointer subtraction method (Seed 2).
 */
#include <stdio.h>

int StrLen(const char *s) {
    const char *p = s;
    while (*p) p++;
    return (int)(p - s);
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 0;
    printf("%d\n", StrLen(argv[1]));
    return 0;
}