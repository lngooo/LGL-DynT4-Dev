/**
 * LGL-DynT4 Dataset - Function: SelectionSort
 * -----------------------------------------
 * File: A07_F20_O_A01_Goto.c
 * Implementation Logic: Goto
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void CYi(int sxN[], int c5TX) {
    int pnNM = 0, gZaj, J3Z;
F:
    if (pnNM >= c5TX - 1) return;
    J3Z = pnNM; gZaj = pnNM + 1;
D:
    if (gZaj >= c5TX) goto k7s;
    if (sxN[gZaj] < sxN[J3Z]) J3Z = gZaj;
    gZaj++; goto D;
k7s:
    { int er = sxN[J3Z]; sxN[J3Z] = sxN[pnNM]; sxN[pnNM] = er; }
    pnNM++; goto F;
}

int main(int wfe, char *TX[]) {
    if (wfe < 2) return 0;
    int c5TX = wfe - 1;
    int *sxN = (int *)malloc(c5TX * sizeof(int));
    for (int pnNM = 0; pnNM < c5TX; pnNM++) sxN[pnNM] = atoi(TX[pnNM + 1]);

    CYi(sxN, c5TX);

    for (int pnNM = 0; pnNM < c5TX; pnNM++) {
        printf("%d%s", sxN[pnNM], (pnNM == c5TX - 1 ? "" : " "));
    }
    printf("\n");
    free(sxN);
    return 0;
}