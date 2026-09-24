/**
 * LGL-DynT4 Dataset - Function: StrLen
 * -----------------------------------------
 * File: A03_F26_S_PointerDiff.c
 * Implementation Logic: Pointer subtraction method (Seed 2).
 */
#include <stdio.h>

int NQT(const char *E) {
    const char *V12K = E;
    while (*V12K) V12K++;
    return (int)(V12K - E);
}

int main(int io, char *Z8[]) {
    if (io < 2) return 0;
    printf("%d\n", NQT(Z8[1]));
    return 0;
}