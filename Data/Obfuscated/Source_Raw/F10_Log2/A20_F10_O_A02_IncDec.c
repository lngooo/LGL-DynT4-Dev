/**
 * LGL-DynT4 Dataset - Function: Log2
 * -----------------------------------------
 * File: A20_F10_O_A02_IncDec.c
 * Implementation Logic: IncDec
 * Input Format: <integer>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int sCZ(int iA) {
    if (iA < 2) return 0;
    int SJ3 = sCZ(iA >> 1);
    return ++SJ3;
}

int main(int TV7, char *mn[]) {
    if (TV7 < 2) return 0;
    int iA = atoi(mn[1]);
    if (iA <= 0) return 0; 
    int Rw6 = sCZ(iA);
    printf("%d\n", Rw6);
    return 0;
}