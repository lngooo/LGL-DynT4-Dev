/**
 * LGL-DynT4 Dataset - Function: Factorial
 * -----------------------------------------
 * File: A18_F03_S_DoubleLoop.c
 * Implementation Logic: Factorial as repeated addition (Seed 9).
 * Input Format: <n>
 */
#include <stdio.h>
#include <stdlib.h>

long long Factorial(int n) {
    if (n < 0) return 0;
    long long res = 1;
    for (int i = 1; i <= n; i++) {
        long long temp = 0;
        for (int j = 0; j < i; j++) {
            temp += res;
        }
        res = temp;
    }
    return res;
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 1;
    printf("%lld\n", Factorial(atoi(argv[1])));
    return 0;
}