/**
 * LGL-DynT4 Dataset - Function: NewtonRoot
 * -----------------------------------------
 * File: A15_F09_O_A14_ShiftLoops.c
 * Implementation Logic: Fixed-point Newton with nested shift loops.
 */
#include <stdio.h>
#include <stdlib.h>

int WH3x(int G) {
    if (G < 0) return -1;
    if (G < 2) return G;
    long et = G;
    long iX2H = 1;
    while (et > 0) {
        et >>= 2;
        iX2H <<= 1;
    }
    for (int l = 0; l < 10; l++) {
        if (iX2H <= 0) iX2H = 1;
        iX2H = (iX2H + G / iX2H) >> 1;
    }
    while ((long long)iX2H * iX2H > G) {
        iX2H--;
    }
    while ((long long)(iX2H + 1) * (iX2H + 1) <= G) {
        iX2H++;
    }
    return (int)iX2H;
}

int main(int m1, char *p[]) {
    if (m1 < 2) return 1;
    printf("%d\n", WH3x(atoi(p[1])));
    return 0;
}