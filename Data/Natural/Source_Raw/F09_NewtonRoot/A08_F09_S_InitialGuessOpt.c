/**
 * LGL-DynT4 Dataset - Function: NewtonRoot
 * -----------------------------------------
 * File: A08_F09_S_InitialGuessOpt.c
 * Implementation Logic: Newton with improved initial guess (Seed 4).
 */
#include <stdio.h>
#include <stdlib.h>

int NewtonRoot(int n) {
    if (n < 0) return -1;
    if (n < 2) return n;
    long x = 1;
    // Better initial guess: find highest bit
    while ((x << 2) <= n) x <<= 1;
    long y = (x + n / x) >> 1;
    while (y < x) {
        x = y;
        y = (x + n / x) >> 1;
    }
    // Final check for integer rounding
    if ((x + 1) * (x + 1) <= n) x++;
    return (int)x;
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 1;
    printf("%d\n", NewtonRoot(atoi(argv[1])));
    return 0;
}