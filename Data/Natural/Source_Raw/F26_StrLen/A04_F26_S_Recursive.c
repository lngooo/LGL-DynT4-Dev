/**
 * LGL-DynT4 Dataset - Function: StrLen
 * -----------------------------------------
 * File: A04_F26_S_Recursive.c
 * Implementation Logic: Simple recursion (Seed 3).
 */
#include <stdio.h>

int StrLen(const char *s) {
    if (*s == '\0') return 0;
    return 1 + StrLen(s + 1);
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 0;
    printf("%d\n", StrLen(argv[1]));
    return 0;
}