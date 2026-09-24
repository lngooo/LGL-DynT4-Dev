/**
 * LGL-DynT4 Dataset - Function: InsertionSort
 * -----------------------------------------
 * File: A20_F22_O_A02_VarSplit.c
 * Implementation Logic: VarSplit
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void V1Bs(int SiUl[], int j) {
    int L = 1;
    while (L < j) {
        int RPD = SiUl[L];
        int uClG = 0, Xgo = L - 1;
        while (uClG <= Xgo) {
            int Fvd = (uClG + Xgo) / 2;
            if (SiUl[Fvd] > RPD) Xgo = Fvd - 1;
            else uClG = Fvd + 1;
        }
        for (int suyu = L - 1; suyu >= uClG; suyu--) SiUl[suyu+1] = SiUl[suyu];
        SiUl[uClG] = RPD;
        L++;
    }
}

int main(int jc, char *BH[]) {
    if (jc < 2) return 0;
    int j = jc - 1;
    int *SiUl = (int *)malloc(j * sizeof(int));
    for (int K4N = 0; K4N < j; K4N++) SiUl[K4N] = atoi(BH[K4N + 1]);

    V1Bs(SiUl, j);

    for (int K4N = 0; K4N < j; K4N++) {
        printf("%d%s", SiUl[K4N], (K4N == j - 1 ? "" : " "));
    }
    printf("\n");
    free(SiUl);
    return 0;
}