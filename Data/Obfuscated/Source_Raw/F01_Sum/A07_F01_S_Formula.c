/**
 * LGL-DynT4 Dataset - Function: Sum
 * -----------------------------------------
 * File: A07_F01_S_Formula.c
 * Implementation Logic: Mathematical formula n(n+1)/2 (Seed 3).
 * Input Format: <n>
 */
#include <stdio.h>
#include <stdlib.h>

int Z(int zre) {
    if (zre < 0) return 0;
    return (int)((zre * (zre + 1)) / 2);
}

int main(int K4, char *nPF[]) {
    if (K4 < 2) return 1;
    printf("%d\n", Z(atoi(nPF[1])));
    return 0;
}