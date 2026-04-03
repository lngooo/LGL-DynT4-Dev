/**
 * LGL-DynT4 Dataset - Function: Fibonacci
 * -----------------------------------------
 * File: A19_F04_O_A01_AlgebraicIdentity.c
 * Implementation Logic: AlgebraicIdentity
 * Input Format: <arg1>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long Fibonacci(int n) {
    long x = 0, y = 1;
    if (n == 0) return 0;
    for (int i = 2; i <= n; i++) {
        y = x + y; x = y - x;
    }
    return (n == 1) ? 1 : y;
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        return 1;
    }
    int n = atoi(argv[1]);
    if (n < 0) {
        printf("0\n");
        return 0;
    }
    long result = Fibonacci(n);
    printf("%ld\n", result);
    return 0;
}
