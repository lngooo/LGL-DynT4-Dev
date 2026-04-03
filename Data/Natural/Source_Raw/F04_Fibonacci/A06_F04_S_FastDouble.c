/**
 * LGL-DynT4 Dataset - Function: Fibonacci
 * -----------------------------------------
 * File: A06_F04_S_FastDouble.c
 * Implementation Logic: FastDouble
 * Input Format: <arg1>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long Fibonacci(int n) {
    if (n == 0) return 0;
    long a = 0, b = 1;
    for (int i = 31 - __builtin_clz(n); i >= 0; i--) {
        long c = a * (2 * b - a);
        long d = a * a + b * b;
        a = c; b = d;
        if ((n >> i) & 1) {
            long t = a + b;
            a = b; b = t;
        }
    }
    return a;
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
