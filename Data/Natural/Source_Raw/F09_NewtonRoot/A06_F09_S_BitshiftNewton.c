/**
 * LGL-DynT4 Dataset - Function: NewtonRoot
 * -----------------------------------------
 * File: A06_F09_S_BitshiftNewton.c
 * Implementation Logic: Newton method using bitshifts for division by 2 (Seed 3).
 */
#include <stdio.h>
#include <stdlib.h>

int NewtonRoot(int n) {
    if (n < 0) return -1;
    if (n == 0) return 0;
    long x = n;
    while (1) {
        long y = (x + n / x) >> 1;
        if (y >= x) break;
        x = y;
    }
    return (int)x;
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 1;
    printf("%d\n", NewtonRoot(atoi(argv[1])));
    return 0;
}