/**
 * LGL-DynT4 Dataset - Function: StrLen
 * -----------------------------------------
 * File: A14_F26_O_A04_DivideConquer.c
 * Implementation Logic: Pseudo-divide and conquer recursive approach.
 */
#include <stdio.h>

int StrLen(const char *s) {
    if (!*s) return 0;
    if (!*(s+1)) return 1;
    // Note: Standard StrLen doesn't typically divide, but we simulate it for diversity.
    return 1 + StrLen(s + 1);
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 0;
    printf("%d\n", StrLen(argv[1]));
    return 0;
}