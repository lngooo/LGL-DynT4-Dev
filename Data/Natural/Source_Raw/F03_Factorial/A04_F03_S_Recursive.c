/**
 * LGL-DynT4 Dataset - Function: Factorial
 * -----------------------------------------
 * File: A04_F03_S_Recursive.c
 * Implementation Logic: Classic recursive implementation (Seed 2).
 * Input Format: <n>
 */
#include <stdio.h>
#include <stdlib.h>

long long Factorial(int n) {
    if (n <= 0) return 1;
    return (long long)n * Factorial(n - 1);
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 1;
    int n = atoi(argv[1]);
    if (n < 0) printf("0\n");
    else printf("%lld\n", Factorial(n));
    return 0;
}