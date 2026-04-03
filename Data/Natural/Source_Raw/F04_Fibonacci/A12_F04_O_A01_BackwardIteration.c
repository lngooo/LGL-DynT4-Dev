/**
 * LGL-DynT4 Dataset - Function: Fibonacci
 * -----------------------------------------
 * File: A12_F04_O_A01_BackwardIteration.c
 * Implementation Logic: BackwardIteration
 * Input Format: <arg1>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long Fibonacci(int n) {
    long a = 0, b = 1;
    if (n == 0) return 0;
    if (n == 1) return 1;
    for (int i = n; i >= 2; i--) {
        long t = a + b; a = b; b = t;
    }
    return b;
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
