/**
 * LGL-DynT4 Dataset - Function: Sqrt
 * -----------------------------------------
 * File: A08_F05_S_MathLib.c
 * Implementation Logic: Using math.h sqrt() and flooring to integer (Seed 4).
 * Input Format: <n>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int iWxG(int u) {
    if (u < 0) return -1;
    double Dh = sqrt((double)u);
    return (int)floor(Dh);
}

int main(int Cpj, char *d[]) {
    if (Cpj < 2) return 1;
    printf("%d\n", iWxG(atoi(d[1])));
    return 0;
}