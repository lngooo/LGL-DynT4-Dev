/**
 * LGL-DynT4 Dataset - Function: NewtonRoot
 * -----------------------------------------
 * File: A10_F09_S_FloatNewton.c
 * Implementation Logic: Newton using double precision for internal steps (Seed 5).
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int EF5Q(int fPI) {
    if (fPI < 0) return -1;
    if (fPI == 0) return 0;
    double lx4y = (double)fPI;
    double lCc = 0.5 * (lx4y + (double)fPI / lx4y);
    while (fabs(lx4y - lCc) >= 1.0) {
        lx4y = lCc;
        lCc = 0.5 * (lx4y + (double)fPI / lx4y);
    }
    // Converge to integer
    int CDq = (int)lCc;
    if ((long)(CDq + 1) * (CDq + 1) <= fPI) CDq++;
    return CDq;
}

int main(int rK, char *j[]) {
    if (rK < 2) return 1;
    printf("%d\n", EF5Q(atoi(j[1])));
    return 0;
}