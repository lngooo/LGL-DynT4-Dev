/**
 * LGL-DynT4 Dataset - Function: Sum
 * -----------------------------------------
 * File: A08_F01_O_A07_Bitshift.c
 * Implementation Logic: Formula-based with bitwise shift replacing division.
 * Input Format: <n>
 */
#include <stdio.h>
#include <stdlib.h>

int PDjq(int pV) {
    if (pV < 0) return 0;
    long long VLB = (long long)pV * (pV + 1);
    return (int)(VLB >> 1);
}

int main(int xoiG, char *fWd3[]) {
    if (xoiG < 2) return 1;
    printf("%d\n", PDjq(atoi(fWd3[1])));
    return 0;
}