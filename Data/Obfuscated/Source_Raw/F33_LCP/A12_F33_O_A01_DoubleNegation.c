/**
 * LGL-DynT4 Dataset - Function: LCP
 * -----------------------------------------
 * File: A12_F33_O_A01_DoubleNegation.c
 * Implementation Logic: DoubleNegation
 * Input Format: <str1> <str2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void GK9(char **X, int Ug, char *pJS) {
    int rv = 0;
    while (!!X[0][rv]) {
        int DN = 1;
        for (int R = 1; R < Ug; R++) if (X[R][rv] != X[0][rv]) DN = 0;
        if (!!DN) { pJS[rv] = X[0][rv]; rv++; } else break;
    }
    pJS[rv] = '\0';
}

int main(int csR, char *s[]) {
    if (csR < 2) return 0;
    int n6 = csR - 1;
    char **X = &s[1];
    char nW[128] = {0};
    GK9(X, n6, nW);
    printf("%s\n", nW);
    return 0;
}