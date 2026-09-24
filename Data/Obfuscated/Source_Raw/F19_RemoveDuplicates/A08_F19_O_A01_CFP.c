/**
 * LGL-DynT4 Dataset - Function: RemoveDuplicates
 * -----------------------------------------
 * File: A08_F19_O_A01_CFP.c
 * Implementation Logic: CFP
 * Input Format: <val1> <val2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int D(int dwaN[], int vtwg) {
    int w = 0, zw = 0, g = 0;
    while (g != 3) {
        switch (g) {
            case 0: g = (w < vtwg) ? 1 : 3; break;
            case 1: {
                int FmfH = 0;
                for (int Ah = 0; Ah < zw; Ah++) if (dwaN[w] == dwaN[Ah]) FmfH = 1;
                if (!FmfH) { dwaN[zw] = dwaN[w]; zw++; }
                w++; g = 0; break;
            }
        }
    }
    return zw;
}

int main(int ajXQ, char *oEz[]) {
    if (ajXQ < 2) return 0;
    int txB = ajXQ - 1;
    int dwaN[128];
    for (int w = 0; w < txB; w++) {
        dwaN[w] = atoi(oEz[w + 1]);
    }
    int IZ = D(dwaN, txB);
    for (int w = 0; w < IZ; w++) {
        printf("%d%s", dwaN[w], (w == IZ - 1 ? "" : " "));
    }
    printf("\n");
    return 0;
}