/**
 * LGL-DynT4 Dataset - Function: Fibonacci
 * -----------------------------------------
 * File: A16_F04_O_A01_DeadCodeInjection.c
 * Implementation Logic: DeadCodeInjection
 * Input Format: <arg1>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long Fibonacci(int n) {
    long a = 0, b = 1, t;
    if (n == 0) return 0;
    for (int i = 2; i <= n; i++) {
        t = a + b; a = b; b = t;
        if (0) { printf("never"); n++; }
    }
    return (n == 1) ? 1 : b;
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
