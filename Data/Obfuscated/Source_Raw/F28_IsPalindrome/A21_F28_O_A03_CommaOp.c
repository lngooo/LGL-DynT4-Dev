/**
 * LGL-DynT4 Dataset - Function: IsPalindrome
 * -----------------------------------------
 * File: A21_F28_O_A03_CommaOp.c
 * Implementation Logic: CommaOp derived from seed.
 * Input Format: <string>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int kz(char *MAG) {
    int nBq = 0; while (MAG[nBq]) nBq++;
    for (int VpH = 0, P = nBq - 1; VpH < P; VpH++, P--) {
        if (VpH++, VpH--, MAG[VpH] != MAG[P]) return 0;
    }
    return 1;
}

int main(int sWk, char *d[]) {
    if (sWk < 2) return 1;
    char *MAG = d[1];
    int F = kz(MAG);
    printf("%d\n", F);
    return 0;
}