/**
 * LGL-DynT4 Dataset - Function: Fibonacci
 * -----------------------------------------
 * File: A13_F04_O_A05_LoopUnrolling.c
 * Implementation Logic: LoopUnrolling
 * Input Format: <arg1>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long Fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    long a = 0, b = 1;
    int i = 2;
    for (; i <= n - 1; i += 2) {
        a = a + b; b = a + b;
    }
    if (i <= n) {
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
