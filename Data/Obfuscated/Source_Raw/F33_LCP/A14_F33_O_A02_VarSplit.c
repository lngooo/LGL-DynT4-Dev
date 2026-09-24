/**
 * LGL-DynT4 Dataset - Function: LCP
 * -----------------------------------------
 * File: A14_F33_O_A02_VarSplit.c
 * Implementation Logic: VarSplit
 * Input Format: <str1> <str2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void oc4(char **cUe9, int W, char *W9uy) {
    if (W <= 0) return;
    int D = 0, XJU3 = 0;
    char a[128]; strcpy(a, cUe9[0]);
    for (int n0 = 1; n0 < W; n0++) {
        int Z = 0, L = 0;
        while (a[Z+L] && cUe9[n0][Z+L] && a[Z+L] == cUe9[n0][Z+L]) Z++;
        a[Z+L] = '\0';
    }
    strcpy(W9uy, a);
}

int main(int v, char *hJi1[]) {
    if (v < 2) return 0;
    int p = v - 1;
    char **cUe9 = &hJi1[1];
    char vEOS[128] = {0};
    oc4(cUe9, p, vEOS);
    printf("%s\n", vEOS);
    return 0;
}