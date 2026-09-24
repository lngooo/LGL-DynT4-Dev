/**
 * LGL-DynT4 Dataset - Function: QuickSort
 * -----------------------------------------
 * File: A06_F13_S_PointerSwap.c
 * Implementation Logic: PointerSwap
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void CV7(int jXm[], int bW, int MKN) {
    if (bW >= MKN) return;
    int *Mo = jXm + MKN;
    int *Rb = jXm + bW;
    for (int *fSX = jXm + bW; fSX < Mo; fSX++) {
        if (*fSX < *Mo) {
            int iG2M = *fSX; *fSX = *Rb; *Rb = iG2M;
            Rb++;
        }
    }
    int iG2M = *Rb; *Rb = *Mo; *Mo = iG2M;
    CV7(jXm, bW, (int)(Rb - jXm) - 1);
    CV7(jXm, (int)(Rb - jXm) + 1, MKN);
}

int main(int TPxl, char *FEik[]) {
    if (TPxl < 2) return 0;
    int oc = TPxl - 1;
    int *jXm = (int *)malloc(oc * sizeof(int));
    for (int Wa7r = 0; Wa7r < oc; Wa7r++) jXm[Wa7r] = atoi(FEik[Wa7r + 1]);

    CV7(jXm, 0, oc - 1);

    for (int Wa7r = 0; Wa7r < oc; Wa7r++) {
        printf("%d%s", jXm[Wa7r], (Wa7r == oc - 1 ? "" : " "));
    }
    printf("\n");
    free(jXm);
    return 0;
}