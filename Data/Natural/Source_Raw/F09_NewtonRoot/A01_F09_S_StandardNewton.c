/**
 * LGL-DynT4 Dataset - Function: NewtonRoot
 * -----------------------------------------
 * File: A01_F09_S_StandardNewton.c
 * Implementation Logic: Classic iterative Newton-Raphson (Seed 1).
 */
#include <stdio.h>
#include <stdlib.h>

int NewtonRoot(int n) {
    if (n < 0) return -1;
    if (n < 2) return n;
    long x = n;
    long y = (x + n / x) / 2;
    while (y < x) {
        x = y;
        y = (x + n / x) / 2;
    }
    return (int)x;
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 1;
    printf("%d\n", NewtonRoot(atoi(argv[1])));
    return 0;
}