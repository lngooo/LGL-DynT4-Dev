/**
 * LGL-DynT4 Dataset - Function: Factorial
 * -----------------------------------------
 * File: A10_F03_S_BinarySplit.c
 * Implementation Logic: Binary splitting method for range product (Seed 5).
 * Input Format: <n>
 */
#include <stdio.h>
#include <stdlib.h>

long long i(int g32, int gH6D) {
    if (g32 > gH6D) return 1;
    if (g32 == gH6D) return g32;
    int U = g32 + (gH6D - g32) / 2;
    return i(g32, U) * i(U + 1, gH6D);
}

long long A3(int eE) {
    if (eE < 0) return 0;
    if (eE == 0) return 1;
    return i(1, eE);
}

int main(int vNS, char *Pf2v[]) {
    if (vNS < 2) return 1;
    printf("%lld\n", A3(atoi(Pf2v[1])));
    return 0;
}