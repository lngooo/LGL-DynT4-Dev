/**
 * LGL-DynT4 Dataset - Function: Power
 * -----------------------------------------
 * File: A08_F07_S_DivideConquer.c
 * Implementation Logic: Recursive binary exponentiation.
 * Input Format: <base> <exp>
 */
#include <stdio.h>
#include <stdlib.h>

int xS(int Gy, int exp) {
    if (exp == 0) return 1;
    int MiKy = xS(Gy, exp / 2);
    if (exp % 2 == 0) return MiKy * MiKy;
    return Gy * MiKy * MiKy;
}

int main(int lFOI, char *Jk[]) {
    if (lFOI < 3) return 1;
    printf("%d\n", xS(atoi(Jk[1]), atoi(Jk[2])));
    return 0;
}