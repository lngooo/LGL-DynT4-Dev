/**
 * LGL-DynT4 Dataset - Function: NewtonRoot
 * -----------------------------------------
 * File: A10_F09_S_FloatNewton.c
 * Implementation Logic: Newton using double precision for internal steps (Seed 5).
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int NewtonRoot(int n) {
    if (n < 0) return -1;
    if (n == 0) return 0;
    double x = (double)n;
    double next = 0.5 * (x + (double)n / x);
    while (fabs(x - next) >= 1.0) {
        x = next;
        next = 0.5 * (x + (double)n / x);
    }
    // Converge to integer
    int res = (int)next;
    if ((long)(res + 1) * (res + 1) <= n) res++;
    return res;
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 1;
    printf("%d\n", NewtonRoot(atoi(argv[1])));
    return 0;
}