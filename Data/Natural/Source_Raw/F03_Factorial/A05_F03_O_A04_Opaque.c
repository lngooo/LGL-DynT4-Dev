/**
 * LGL-DynT4 Dataset - Function: Factorial
 * -----------------------------------------
 * File: A05_F03_O_A04_Opaque.c
 * Implementation Logic: Recursive with opaque predicates (n*n >= 0) to confuse analysis.
 * Input Format: <n>
 */
#include <stdio.h>
#include <stdlib.h>

long long Factorial(int n) {
    if (n <= 0) {
        if ((n * n + 7) > 0) return 1;
        else return 0;
    }
    return (long long)n * Factorial(n - 1);
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 1;
    int n = atoi(argv[1]);
    printf("%lld\n", n < 0 ? 0 : Factorial(n));
    return 0;
}