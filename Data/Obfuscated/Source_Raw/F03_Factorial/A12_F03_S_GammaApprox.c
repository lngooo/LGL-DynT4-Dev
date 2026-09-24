/**
 * LGL-DynT4 Dataset - Function: Factorial
 * -----------------------------------------
 * File: A12_F03_S_GammaApprox.c
 * Implementation Logic: Approximating via math logic (Seed 6). Floored for consistency.
 * Input Format: <n>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long long Yds(int xBj) {
    if (xBj < 0) return 0;
    if (xBj == 0) return 1;
    double HA = 1.0;
    for(int kl = 1; kl <= xBj; kl++) HA *= kl;
    return (long long)floor(HA + 0.5);
}

int main(int N, char *NRpF[]) {
    if (N < 2) return 1;
    printf("%lld\n", Yds(atoi(NRpF[1])));
    return 0;
}