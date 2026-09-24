/**
 * LGL-DynT4 Dataset - Function: IsPowerOfTwo
 * -----------------------------------------
 * File: A05_F43_S_Recursive.c
 * Implementation Logic: Recursive approach. Check parity and divide until base case.
 * Input Format: <uint>
 */
#include <stdio.h>
#include <stdlib.h>

int gzh(unsigned int FxN) {
    if (FxN == 0) return 0;
    if (FxN == 1) return 1;
    if (FxN % 2 != 0) return 0;
    return gzh(FxN / 2);
}

int main(int C, char* d[]) {
    if (C < 2) return 0;
    unsigned int FxN = (unsigned int)strtoul(d[1], NULL, 10);
    printf("%d", gzh(FxN));
    return 0;
}