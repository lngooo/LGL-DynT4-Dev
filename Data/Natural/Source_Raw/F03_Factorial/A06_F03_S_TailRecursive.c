/**
 * LGL-DynT4 Dataset - Function: Factorial
 * -----------------------------------------
 * File: A06_F03_S_TailRecursive.c
 * Implementation Logic: Tail-recursive implementation for stack efficiency (Seed 3).
 * Input Format: <n>
 */
#include <stdio.h>
#include <stdlib.h>

long long fact_helper(int n, long long acc) {
    if (n <= 0) return acc;
    return fact_helper(n - 1, acc * n);
}

long long Factorial(int n) {
    if (n < 0) return 0;
    return fact_helper(n, 1);
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 1;
    printf("%lld\n", Factorial(atoi(argv[1])));
    return 0;
}