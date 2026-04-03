/**
 * LGL-DynT4 Dataset - Function: Fibonacci
 * -----------------------------------------
 * File: A17_F04_O_A02_TailRecursionSim.c
 * Implementation Logic: TailRecursionSim
 * Input Format: <arg1>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long Fibonacci(int n) {
    long a = 0, b = 1, t;
    r_step:
    if (n == 0) return a;
    if (n == 1) return b;
    t = a + b; a = b; b = t; n--;
    goto r_step;
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
