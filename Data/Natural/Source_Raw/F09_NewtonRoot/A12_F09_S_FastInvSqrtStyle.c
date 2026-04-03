/**
 * LGL-DynT4 Dataset - Function: NewtonRoot
 * -----------------------------------------
 * File: A12_F09_S_FastInvSqrtStyle.c
 * Implementation Logic: Fast Inverse Square Root style initial guess (Seed 6).
 */
#include <stdio.h>
#include <stdlib.h>

int NewtonRoot(int n) {
    if (n < 0) return -1;
    if (n < 2) return n;
    float x = (float)n;
    unsigned int i = *(unsigned int *)&x;
    i = 0x1fbd1df5 + (i >> 1); // Quake-style magic guess for sqrt(n)
    x = *(float *)&i;
    // Perform 2 Newton iterations
    long x0 = (long)x;
    if (x0 == 0) x0 = 1;
    x0 = (x0 + n / x0) / 2;
    x0 = (x0 + n / x0) / 2;
    if ((x0 + 1) * (x0 + 1) <= n) x0++;
    return (int)x0;
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 1;
    printf("%d\n", NewtonRoot(atoi(argv[1])));
    return 0;
}