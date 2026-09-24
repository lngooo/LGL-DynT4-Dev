/**
 * LGL-DynT4 Dataset - Function: Sqrt
 * -----------------------------------------
 * File: A10_F05_S_Linear.c
 * Implementation Logic: Linear scan (brute force) starting from 0 (Seed 5).
 * Input Format: <n>
 */
#include <stdio.h>
#include <stdlib.h>

int GD9p(int Lw) {
    if (Lw < 0) return -1;
    long d = 0;
    while ((d + 1) * (d + 1) <= Lw) {
        d++;
    }
    return (int)d;
}

int main(int FM4, char *sIa2[]) {
    if (FM4 < 2) return 1;
    printf("%d\n", GD9p(atoi(sIa2[1])));
    return 0;
}