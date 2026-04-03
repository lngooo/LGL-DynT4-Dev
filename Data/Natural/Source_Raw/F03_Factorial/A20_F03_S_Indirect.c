/**
 * LGL-DynT4 Dataset - Function: Factorial
 * -----------------------------------------
 * File: A20_F03_S_Indirect.c
 * Implementation Logic: Indirect function calls to calculate product (Seed 10).
 * Input Format: <n>
 */
#include <stdio.h>
#include <stdlib.h>

typedef long long (*op_func)(int, long long);

long long step(int i, long long current) {
    return i * current;
}

long long Factorial(int n) {
    if (n < 0) return 0;
    op_func f = step;
    long long res = 1;
    for (int i = 1; i <= n; i++) res = f(i, res);
    return res;
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 1;
    printf("%lld\n", Factorial(atoi(argv[1])));
    return 0;
}