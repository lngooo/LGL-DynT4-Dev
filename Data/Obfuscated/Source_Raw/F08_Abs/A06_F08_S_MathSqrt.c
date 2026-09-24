/**
 * LGL-DynT4 Dataset - Function: Abs
 * -----------------------------------------
 * File: A06_F08_S_MathSqrt.c
 * Implementation Logic: sqrt(n^2) approach (Seed 3).
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int o(int c) {
    double p = (double)c;
    return (int)sqrt(p * p);
}

int main(int E, char *y6j[]) {
    if (E < 2) return 1;
    printf("%d\n", o(atoi(y6j[1])));
    return 0;
}