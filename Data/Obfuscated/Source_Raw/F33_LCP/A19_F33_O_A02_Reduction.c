/**
 * LGL-DynT4 Dataset - Function: LCP
 * -----------------------------------------
 * File: A19_F33_O_A02_Reduction.c
 * Implementation Logic: Reduction
 * Input Format: <str1> <str2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void Xmvt(char **E3, int Ac, char *oP) {
    if (Ac <= 0) return;
    int NUh = 0;
    while (E3[0][NUh]) { oP[NUh] = E3[0][NUh]; NUh++; }
    oP[NUh] = '\0';
    for (int g = 1; g < Ac; g++) {
        int CSS = 0;
        while (oP[CSS] && E3[g][CSS] && oP[CSS] == E3[g][CSS]) CSS++;
        oP[CSS] = '\0';
        if (!oP[0]) break;
    }
}

int main(int M, char *G[]) {
    if (M < 2) return 0;
    int KLT = M - 1;
    char **E3 = &G[1];
    char Z[128] = {0};
    Xmvt(E3, KLT, Z);
    printf("%s\n", Z);
    return 0;
}