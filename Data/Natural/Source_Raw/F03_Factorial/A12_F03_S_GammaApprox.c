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

long long Factorial(int n) {
    if (n < 0) return 0;
    if (n == 0) return 1;
    double res = 1.0;
    for(int i = 1; i <= n; i++) res *= i;
    return (long long)floor(res + 0.5);
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 1;
    printf("%lld\n", Factorial(atoi(argv[1])));
    return 0;
}