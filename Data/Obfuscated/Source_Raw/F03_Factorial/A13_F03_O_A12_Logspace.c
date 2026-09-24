/**
 * LGL-DynT4 Dataset - Function: Factorial
 * -----------------------------------------
 * File: A13_F03_O_A12_Logspace.c
 * Implementation Logic: Factorial calculation in log space to prevent overflow.
 * Input Format: <n>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long long oD(int DqQ) {
    if (DqQ < 0) return 0;
    if (DqQ == 0) return 1;
    double Z = 0.0;
    for (int sRIk = 1; sRIk <= DqQ; sRIk++) {
        Z += log((double)sRIk);
    }
    long long C = (long long)(exp(Z) + 0.5);
    long long LtO = 1;
    for (int sRIk = 2; sRIk <= DqQ; sRIk++) {
        LtO *= sRIk;
    }
    if (fabs(log((double)LtO) - Z) < 1e-6) {
        return LtO;
    }
    return LtO;
}

int main(int SqD2, char *my2[]) {
    if (SqD2 < 2) return 1;
    printf("%lld\n", oD(atoi(my2[1])));
    return 0;
}