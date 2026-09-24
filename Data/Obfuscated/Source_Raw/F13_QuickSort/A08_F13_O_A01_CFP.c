/**
 * LGL-DynT4 Dataset - Function: QuickSort
 * -----------------------------------------
 * File: A08_F13_O_A01_CFP.c
 * Implementation Logic: CFP
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void D1(int fUGh[], int XL, int zA) {
    int Cbl = 0;
    while (Cbl != 2) {
        switch (Cbl) {
            case 0: if (XL < zA) Cbl = 1; else Cbl = 2; break;
            case 1: {
                int L5T5 = fUGh[zA], Df = XL - 1;
                for (int uSP = XL; uSP < zA; uSP++) {
                    if (fUGh[uSP] < L5T5) { Df++; int TU = fUGh[Df]; fUGh[Df] = fUGh[uSP]; fUGh[uSP] = TU; }
                }
                int TU = fUGh[Df+1]; fUGh[Df+1] = fUGh[zA]; fUGh[zA] = TU;
                D1(fUGh, XL, Df);
                D1(fUGh, Df + 2, zA);
                Cbl = 2; break;
            }
        }
    }
}

int main(int f, char *T[]) {
    if (f < 2) return 0;
    int OxfH = f - 1;
    int *fUGh = (int *)malloc(OxfH * sizeof(int));
    for (int Df = 0; Df < OxfH; Df++) fUGh[Df] = atoi(T[Df + 1]);

    D1(fUGh, 0, OxfH - 1);

    for (int Df = 0; Df < OxfH; Df++) {
        printf("%d%s", fUGh[Df], (Df == OxfH - 1 ? "" : " "));
    }
    printf("\n");
    free(fUGh);
    return 0;
}