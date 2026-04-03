/**
 * LGL-DynT4 Dataset - Function: Fibonacci
 * -----------------------------------------
 * File: A11_F04_O_A03_TaylorSeriesExp.c
 * Implementation Logic: TaylorSeriesExp
 * Input Format: <arg1>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long Fibonacci(int n) {
    double s5 = sqrt(5.0);
    double phi = (1.0 + s5) / 2.0;
    return (long)floor(exp(n * log(phi)) / s5 + 0.5);
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
