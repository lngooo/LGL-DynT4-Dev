/**
 * LGL-DynT4 Dataset - Function: LCP
 * -----------------------------------------
 * File: A06_F33_S_RecursiveStep.c
 * Implementation Logic: RecursiveStep
 * Input Format: <str1> <str2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void SO(char **H, int NC, char *B) {
    if (NC == 1) { strcpy(B, H[0]); return; }
    char V[128] = {0};
    SO(H, NC - 1, V);
    int DkR = 0;
    while (V[DkR] && H[NC-1][DkR] && V[DkR] == H[NC-1][DkR]) {
        B[DkR] = V[DkR]; DkR++;
    }
    B[DkR] = '\0';
}

int main(int vbc, char *X[]) {
    if (vbc < 2) return 0;
    int Z = vbc - 1;
    char **H = &X[1];
    char f[128] = {0};
    SO(H, Z, f);
    printf("%s\n", f);
    return 0;
}