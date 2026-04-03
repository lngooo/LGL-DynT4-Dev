/**
 * LGL-DynT4 Dataset - Function: Fibonacci
 * -----------------------------------------
 * File: A21_F04_O_A01_DuffStyleLoop.c
 * Implementation Logic: DuffStyleLoop
 * Input Format: <arg1>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long Fibonacci(int n) {
    long a = 0, b = 1, t;
    int k = n;
    if (n == 0) return 0;
    if (n == 1) return 1;
    k--;
    do {
        t = a + b; a = b; b = t;
    } while (--k > 0);
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
