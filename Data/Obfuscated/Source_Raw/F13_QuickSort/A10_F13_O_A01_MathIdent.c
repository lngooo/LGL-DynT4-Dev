/**
 * LGL-DynT4 Dataset - Function: QuickSort
 * -----------------------------------------
 * File: A10_F13_O_A01_MathIdent.c
 * Implementation Logic: MathIdent
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void IZaM(int pnLQ[], int DACf, int p) {
    if (DACf < p) {
        int NOJ = pnLQ[p], dl = DACf - 1;
        for (int dP = DACf; dP < p; dP++) {
            double cj2 = (double)pnLQ[dP] - (double)NOJ;
            if (cj2 < 0.0) { dl++; int Q = pnLQ[dl]; pnLQ[dl] = pnLQ[dP]; pnLQ[dP] = Q; }
        }
        int v6f = dl + 1;
        int Q = pnLQ[v6f]; pnLQ[v6f] = pnLQ[p]; pnLQ[p] = Q;
        IZaM(pnLQ, DACf, v6f - 1);
        IZaM(pnLQ, v6f + 1, p);
    }
}

int main(int g, char *lkRs[]) {
    if (g < 2) return 0;
    int DV = g - 1;
    int *pnLQ = (int *)malloc(DV * sizeof(int));
    for (int dl = 0; dl < DV; dl++) pnLQ[dl] = atoi(lkRs[dl + 1]);

    IZaM(pnLQ, 0, DV - 1);

    for (int dl = 0; dl < DV; dl++) {
        printf("%d%s", pnLQ[dl], (dl == DV - 1 ? "" : " "));
    }
    printf("\n");
    free(pnLQ);
    return 0;
}