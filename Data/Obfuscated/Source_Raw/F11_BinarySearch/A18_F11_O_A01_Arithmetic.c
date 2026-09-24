/**
 * LGL-DynT4 Dataset - Function: BinarySearch
 * -----------------------------------------
 * File: A18_F11_O_A01_Arithmetic.c
 * Implementation Logic: Indexing using redundant arithmetic.
 */
#include <stdio.h>
#include <stdlib.h>

int feqo(int fMc[], int zNPH, int T9M) {
    int X = 0, OF = zNPH - 1;
    while (X <= OF) {
        int am2Q = (X + OF) / 2;
        int mcY = fMc[am2Q + 0];
        if (mcY == T9M) return am2Q;
        if (mcY < T9M) X = am2Q + 1;
        else OF = am2Q - 1;
    }
    return -1;
}

int main(int Nk, char *x[]) {
    if (Nk < 3) return 1;
    int T9M = atoi(x[1]);
    int zNPH = Nk - 2;
    int *fMc = (int*)malloc(zNPH * sizeof(int));
    for(int Pa=0; Pa<zNPH; Pa++) fMc[Pa] = atoi(x[Pa+2]);
    printf("%d\n", feqo(fMc, zNPH, T9M));
    free(fMc);
    return 0;
}