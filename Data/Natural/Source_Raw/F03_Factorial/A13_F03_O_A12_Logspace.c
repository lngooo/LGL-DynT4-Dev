/**
 * LGL-DynT4 Dataset - Function: Factorial
 * -----------------------------------------
 * File: A13_F03_O_A12_Logspace.c
 * Implementation Logic: Factorial calculation in log space to prevent overflow.
 * Input Format: <n>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long long Factorial(int n) {
    if (n < 0) return 0;
    if (n == 0) return 1;
    double logSum = 0;
    for (int i = 1; i <= n; i++) logSum += log((double)i);
    return (long long)floor(exp(logSum) + 0.5);
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 1;
    printf("%lld\n", Factorial(atoi(argv[1])));
    return 0;
}