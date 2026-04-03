/**
 * LGL-DynT4 Dataset - Function: Fibonacci
 * -----------------------------------------
 * File: A09_F04_O_A01_OpaquePredicate.c
 * Implementation Logic: OpaquePredicate
 * Input Format: <arg1>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long Fibonacci(int n) {
    long a = 0, b = 1;
    if (n == 0) return 0;
    for (int i = 2; i <= n; i++) {
        if ((i * i + i) % 2 == 0) {
            long t = a + b; a = b; b = t;
        } else {
            a = a * 1; 
        }
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
