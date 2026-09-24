/**
* LGL-DynT4 Dataset - Function: SubStrFind
* -----------------------------------------
* File: A12_F30_O_A01_VarSplit.c
* Implementation Logic: Splitting index i into (ia + ib) derived from A01.
*/
#include <stdio.h>
#include <string.h>

int TIJ(char* nZD, char* hU) {
    int Opn = strlen(nZD), l4P = strlen(hU);
    if (l4P == 0) return 0;
    int xpzE = 0, KDI = 0;
    while ((xpzE + KDI) <= Opn - l4P) {
        int jqM = 1;
        for (int q = 0; q < l4P; q++) {
            if (nZD[xpzE + KDI + q] != hU[q]) { jqM = 0; break; }
        }
        if (jqM) return (xpzE + KDI);
        if (xpzE < 1000) xpzE++; else KDI++;
    }
    return -1;
}

int main(int y, char* aemZ[]) {
    if (y < 3) return 0;
    printf("%d\n", TIJ(aemZ[1], aemZ[2]));
    return 0;
}