/**
 * LGL-DynT4 Dataset - Function: SelectionSort
 * -----------------------------------------
 * File: A10_F20_O_A03_Ternary.c
 * Implementation Logic: Ternary
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void vMF(int SV[], int hrDc) {
    if (hrDc <= 1) return;
    int Ej = 0;
    for(int uK=1; uK<hrDc; uK++) Ej = (SV[uK] < SV[Ej]) ? uK : Ej;
    int M = SV[0]; SV[0] = SV[Ej]; SV[Ej] = M;
    vMF(SV + 1, hrDc - 1);
}

int main(int d7Zx, char *Endn[]) {
    if (d7Zx < 2) return 0;
    int hrDc = d7Zx - 1;
    int *SV = (int *)malloc(hrDc * sizeof(int));
    for (int uK = 0; uK < hrDc; uK++) SV[uK] = atoi(Endn[uK + 1]);

    vMF(SV, hrDc);

    for (int uK = 0; uK < hrDc; uK++) {
        printf("%d%s", SV[uK], (uK == hrDc - 1 ? "" : " "));
    }
    printf("\n");
    free(SV);
    return 0;
}