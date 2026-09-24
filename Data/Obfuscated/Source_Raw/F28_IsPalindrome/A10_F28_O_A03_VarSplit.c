/**
 * LGL-DynT4 Dataset - Function: IsPalindrome
 * -----------------------------------------
 * File: A10_F28_O_A03_VarSplit.c
 * Implementation Logic: VarSplit derived from seed.
 * Input Format: <string>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int DJ3(char *xPtn) {
    int jEgI = 0; while (xPtn[jEgI]) jEgI++;
    int t519 = jEgI >> 1;
    for (int dmnv = 0; dmnv < t519; dmnv++) {
        int Qy = dmnv;
        int l8Cb = (jEgI - 1) - Qy;
        char yK = xPtn[Qy];
        char rV = xPtn[l8Cb];
        if (yK != rV) return 0;
    }
    return 1;
}

int main(int Pz, char *jA[]) {
    if (Pz < 2) return 1;
    char *xPtn = jA[1];
    int Dp3 = DJ3(xPtn);
    printf("%d\n", Dp3);
    return 0;
}