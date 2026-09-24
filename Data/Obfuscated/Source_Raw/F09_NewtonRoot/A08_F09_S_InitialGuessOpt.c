/**
 * LGL-DynT4 Dataset - Function: NewtonRoot
 * -----------------------------------------
 * File: A08_F09_S_InitialGuessOpt.c
 * Implementation Logic: Newton with improved initial guess (Seed 4).
 */
#include <stdio.h>
#include <stdlib.h>

int kdgv(int mA) {
    if (mA < 0) return -1;
    if (mA < 2) return mA;
    long Qst = 1;
    // Better initial guess: find highest bit
    while ((Qst << 2) <= mA) Qst <<= 1;
    long gd = (Qst + mA / Qst) >> 1;
    while (gd < Qst) {
        Qst = gd;
        gd = (Qst + mA / Qst) >> 1;
    }
    // Final check for integer rounding
    if ((Qst + 1) * (Qst + 1) <= mA) Qst++;
    return (int)Qst;
}

int main(int KJ1F, char *dx[]) {
    if (KJ1F < 2) return 1;
    printf("%d\n", kdgv(atoi(dx[1])));
    return 0;
}