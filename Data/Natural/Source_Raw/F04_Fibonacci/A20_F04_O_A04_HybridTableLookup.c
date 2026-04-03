/**
 * LGL-DynT4 Dataset - Function: Fibonacci
 * -----------------------------------------
 * File: A20_F04_O_A04_HybridTableLookup.c
 * Implementation Logic: HybridTableLookup
 * Input Format: <arg1>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long Fibonacci(int n) {
    long t[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 34};
    if (n <= 9) return t[n];
    return Fibonacci(n - 1) + Fibonacci(n - 2);
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
