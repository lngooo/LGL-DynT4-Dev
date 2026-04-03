/**
 * LGL-DynT4 Dataset - Function: Fibonacci
 * -----------------------------------------
 * File: A15_F04_O_A06_BitwiseShiftReplace.c
 * Implementation Logic: BitwiseShiftReplace
 * Input Format: <arg1>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long Fibonacci(int n) {
    if (n == 0) return 0;
    long a = 0, b = 1;
    for (int m = 1 << (31 - __builtin_clz(n)); m > 0; m >>= 1) {
        long t1 = a * ((b << 1) - a), t2 = a * a + b * b;
        a = t1; b = t2;
        if (n & m) {
            long s = a + b; a = b; b = s;
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
