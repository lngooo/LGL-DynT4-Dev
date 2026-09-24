/**
 * LGL-DynT4 Dataset - Function: LCP
 * -----------------------------------------
 * File: A05_F33_S_PointerArithmetic.c
 * Implementation Logic: PointerArithmetic
 * Input Format: <str1> <str2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void J(char **z6PL, int dH, char *I4) {
    if (dH <= 0) return;
    for (int Zi = 0; ; Zi++) {
        char dG = *(z6PL[0] + Zi);
        if (dG == '\0') { *(I4 + Zi) = '\0'; break; }
        int p = 1;
        for (int v = 1; v < dH; v++) {
            if (*(z6PL[v] + Zi) != dG) { p = 0; break; }
        }
        if (!p) { *(I4 + Zi) = '\0'; break; }
        *(I4 + Zi) = dG;
    }
}

int main(int q, char *vJi[]) {
    if (q < 2) return 0;
    int cB = q - 1;
    char **z6PL = &vJi[1];
    char niZY[128] = {0};
    J(z6PL, cB, niZY);
    printf("%s\n", niZY);
    return 0;
}