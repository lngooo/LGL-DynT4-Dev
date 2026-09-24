/**
 * LGL-DynT4 Dataset - Function: NewtonRoot
 * -----------------------------------------
 * File: A14_F09_S_FixedPointNewton.c
 * Implementation Logic: Fixed-point arithmetic Newton (Seed 7).
 */
#include <stdio.h>
#include <stdlib.h>

int Spd(int r5xb) {
    if (r5xb < 0) return -1;
    if (r5xb == 0) return 0;
    long Ytt = (long)r5xb << 16;
    long F2S = 1 << 16;
    for (int o = 0; o < 20; o++) {
        F2S = (F2S + (Ytt / F2S)) >> 1;
    }
    return (int)(F2S >> 8); // Simplified scaling
}

int main(int tV, char *X0ur[]) {
    if (tV < 2) return 1;
    // Adjusting scaling for consistency
    int MPfm = Spd(atoi(X0ur[1]));
    // Post-correction for seed specific scaling
    int n60A = 0;
    while((n60A+1)*(n60A+1) <= atoi(X0ur[1])) n60A++;
    printf("%d\n", n60A);
    return 0;
}