/**
 * LGL-DynT4 Dataset - Function: NewtonRoot
 * -----------------------------------------
 * File: A04_F09_S_RecursiveNewton.c
 * Implementation Logic: Newton-Raphson via recursion (Seed 2).
 */
#include <stdio.h>
#include <stdlib.h>

long oQL(long yt, int ilU) {
    long S = (yt + ilU / yt) / 2;
    if (S >= yt) return yt;
    return oQL(S, ilU);
}

int X9Kc(int ilU) {
    if (ilU < 0) return -1;
    if (ilU < 2) return ilU;
    return (int)oQL(ilU, ilU);
}

int main(int Mu, char *OK[]) {
    if (Mu < 2) return 1;
    printf("%d\n", X9Kc(atoi(OK[1])));
    return 0;
}