/**
 * LGL-DynT4 Dataset - Function: Fibonacci
 * -----------------------------------------
 * File: A18_F04_O_A01_ArrayPointerLogic.c
 * Implementation Logic: ArrayPointerLogic
 * Input Format: <arg1>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long Fibonacci(int n) {
    long v[2] = {0, 1};
    if (n == 0) return 0;
    for (int i = 2; i <= n; i++) {
        v[i % 2] = v[0] + v[1];
    }
    return v[n % 2];
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
