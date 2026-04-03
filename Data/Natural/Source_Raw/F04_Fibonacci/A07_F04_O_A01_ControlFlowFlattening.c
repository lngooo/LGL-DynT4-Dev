/**
 * LGL-DynT4 Dataset - Function: Fibonacci
 * -----------------------------------------
 * File: A07_F04_O_A01_ControlFlowFlattening.c
 * Implementation Logic: ControlFlowFlattening
 * Input Format: <arg1>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long Fibonacci(int n) {
    int state = 0;
    long a = 0, b = 1, t;
    int i = 2;
    while (state != 3) {
        switch (state) {
            case 0: if (n == 0) return 0; state = 1; break;
            case 1: state = (i <= n) ? 2 : 3; break;
            case 2: t = a + b; a = b; b = t; i++; state = 1; break;
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
