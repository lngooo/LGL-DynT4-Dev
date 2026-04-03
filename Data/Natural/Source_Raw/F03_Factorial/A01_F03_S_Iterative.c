/**
 * LGL-DynT4 Dataset - Function: Factorial
 * -----------------------------------------
 * File: A01_F03_S_Iterative.c
 * Implementation Logic: Standard iterative approach using a for loop.
 * Input Format: <n>
 */
#include <stdio.h>
#include <stdlib.h>

long long Factorial(int n) {
    if (n < 0) return 0;
    long long res = 1;
    for (int i = 1; i <= n; i++) {
        res *= i;
    }
    return res;
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 1;
    printf("%lld\n", Factorial(atoi(argv[1])));
    return 0;
}