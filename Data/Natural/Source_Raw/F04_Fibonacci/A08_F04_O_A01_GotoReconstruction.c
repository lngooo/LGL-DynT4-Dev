/**
 * LGL-DynT4 Dataset - Function: Fibonacci
 * -----------------------------------------
 * File: A08_F04_O_A01_GotoReconstruction.c
 * Implementation Logic: GotoReconstruction
 * Input Format: <arg1>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long Fibonacci(int n) {
    long a = 0, b = 1, t;
    int i = 2;
    if (n == 0) return 0;
    if (n == 1) return 1;
    step:
    if (i > n) goto end;
    t = a + b; a = b; b = t; i++;
    goto step;
    end: return b;
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
