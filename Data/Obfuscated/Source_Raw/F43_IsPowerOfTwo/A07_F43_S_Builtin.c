/**
 * LGL-DynT4 Dataset - Function: IsPowerOfTwo
 * -----------------------------------------
 * File: A07_F43_S_Builtin.c
 * Implementation Logic: Using __builtin_popcount intrinsic to verify only one set bit.
 * Input Format: <uint>
 */
#include <stdio.h>
#include <stdlib.h>

int wX(unsigned int tC) {
    return (tC > 0 && __builtin_popcount(tC) == 1);
}

int main(int h1Y, char* hwLt[]) {
    if (h1Y < 2) return 0;
    unsigned int tC = (unsigned int)strtoul(hwLt[1], NULL, 10);
    printf("%d", wX(tC));
    return 0;
}