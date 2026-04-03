/**
 * LGL-DynT4 Dataset - Function: Fibonacci
 * -----------------------------------------
 * File: A14_F04_O_A01_VariableSplitting.c
 * Implementation Logic: VariableSplitting
 * Input Format: <arg1>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long Fibonacci(int n) {
    long a_low = 0, a_high = 0, b_low = 1, b_high = 0;
    if (n == 0) return 0;
    for (int i = 2; i <= n; i++) {
        long cur = (a_low + a_high) + (b_low + b_high);
        a_low = b_low; a_high = b_high;
        b_low = cur; b_high = 0;
    }
    return (n == 1) ? 1 : (b_low + b_high);
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
