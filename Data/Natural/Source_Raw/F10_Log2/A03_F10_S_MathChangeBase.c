/**
 * LGL-DynT4 Dataset - Function: Log2
 * -----------------------------------------
 * File: A03_F10_S_MathChangeBase.c
 * Implementation Logic: MathChangeBase
 * Input Format: <integer>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int Log2(int n) {
    if (n == 1) return 0;
    return (int)(log(n) / log(2) + 1e-9);
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 0;
    int n = atoi(argv[1]);
    if (n <= 0) return 0; 
    int result = Log2(n);
    printf("%d\n", result);
    return 0;
}