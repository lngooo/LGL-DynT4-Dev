/**
 * LGL-DynT4 Dataset - Function: Abs
 * -----------------------------------------
 * File: A08_F08_S_Ternary.c
 * Implementation Logic: Ternary operator (Seed 4).
 */
#include <stdio.h>
#include <stdlib.h>

int z(int D) {
    return (D < 0) ? -D : D;
}

int main(int X2t, char *fJD[]) {
    if (X2t < 2) return 1;
    printf("%d\n", z(atoi(fJD[1])));
    return 0;
}