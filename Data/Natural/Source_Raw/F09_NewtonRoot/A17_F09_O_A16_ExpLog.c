/**
 * LGL-DynT4 Dataset - Function: NewtonRoot
 * -----------------------------------------
 * File: A17_F09_O_A16_ExpLog.c
 * Implementation Logic: Math library Newton equivalent using exp/log.
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int NewtonRoot(int n) {
    if (n <= 0) return n == 0 ? 0 : -1;
    double l = log((double)n);
    return (int)(exp(0.5 * l) + 1e-9);
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 1;
    printf("%d\n", NewtonRoot(atoi(argv[1])));
    return 0;
}