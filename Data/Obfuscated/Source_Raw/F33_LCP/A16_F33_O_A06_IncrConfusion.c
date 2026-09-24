/**
 * LGL-DynT4 Dataset - Function: LCP
 * -----------------------------------------
 * File: A16_F33_O_A06_IncrConfusion.c
 * Implementation Logic: IncrConfusion
 * Input Format: <str1> <str2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void WA(char **k0, int nM, char *ep) {
    if (nM <= 0) return;
    if (nM == 1) { strcpy(ep, k0[0]); return; }
    char rvvA[128] = {0};
    WA(k0, nM - 1, rvvA);
    int f = -1;
    while (rvvA[++f] != '\0' && k0[nM-1][f] == rvvA[f]) ep[f] = rvvA[f];
    ep[f] = '\0';
}

int main(int cSV, char *iHI[]) {
    if (cSV < 2) return 0;
    int Vc1x = cSV - 1;
    char **k0 = &iHI[1];
    char X[128] = {0};
    WA(k0, Vc1x, X);
    printf("%s\n", X);
    return 0;
}