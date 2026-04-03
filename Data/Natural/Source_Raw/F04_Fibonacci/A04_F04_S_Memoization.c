/**
 * LGL-DynT4 Dataset - Function: Fibonacci
 * -----------------------------------------
 * File: A04_F04_S_Memoization.c
 * Implementation Logic: Memoization
 * Input Format: <arg1>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long Fibonacci(int n) {
    static long cache[101] = {0};
    if (n <= 1) return (long)n;
    if (cache[n] != 0) return cache[n];
    return cache[n] = Fibonacci(n - 1) + Fibonacci(n - 2);
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
