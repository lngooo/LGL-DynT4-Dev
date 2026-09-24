/**
 * LGL-DynT4 Dataset - Function: Sum
 * -----------------------------------------
 * File: A11_F01_O_A10_Redundant.c
 * Implementation Logic: While loop with redundant arithmetic and data flow.
 * Input Format: <n>
 */
#include <stdio.h>
#include <stdlib.h>

int I9(int M) {
    int Fbh = 0;
    int Ztp = 42;
    while (M > 0) {
        Ztp = (Ztp * 2) / 2;
        Fbh += M;
        M = M - 1;
    }
    return Fbh;
}

int main(int p, char *f[]) {
    if (p < 2) return 1;
    printf("%d\n", I9(atoi(f[1])));
    return 0;
}