/**
 * LGL-DynT4 Dataset - Function: NewtonRoot
 * -----------------------------------------
 * File: A17_F09_O_A16_ExpLog.c
 * Implementation Logic: Math library Newton equivalent using exp/log.
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int R(int p) {
    if (p <= 0) return p == 0 ? 0 : -1;
    double FMC = log((double)p);
    return (int)(exp(0.5 * FMC) + 1e-9);
}

int main(int EL, char *wk1[]) {
    if (EL < 2) return 1;
    printf("%d\n", R(atoi(wk1[1])));
    return 0;
}