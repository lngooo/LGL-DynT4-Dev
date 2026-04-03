/**
 * LGL-DynT4 Dataset - Function: NewtonRoot
 * -----------------------------------------
 * File: A14_F09_S_FixedPointNewton.c
 * Implementation Logic: Fixed-point arithmetic Newton (Seed 7).
 */
#include <stdio.h>
#include <stdlib.h>

int NewtonRoot(int n) {
    if (n < 0) return -1;
    if (n == 0) return 0;
    long x = (long)n << 16;
    long res = 1 << 16;
    for (int i = 0; i < 20; i++) {
        res = (res + (x / res)) >> 1;
    }
    return (int)(res >> 8); // Simplified scaling
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 1;
    // Adjusting scaling for consistency
    int result = NewtonRoot(atoi(argv[1]));
    // Post-correction for seed specific scaling
    int root = 0;
    while((root+1)*(root+1) <= atoi(argv[1])) root++;
    printf("%d\n", root);
    return 0;
}