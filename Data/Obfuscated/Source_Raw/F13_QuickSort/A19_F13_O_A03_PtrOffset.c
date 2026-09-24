/**
 * LGL-DynT4 Dataset - Function: QuickSort
 * -----------------------------------------
 * File: A19_F13_O_A03_PtrOffset.c
 * Implementation Logic: PtrOffset
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void MKi(int z[], int u, int Y) {
    if (u >= Y) return;
    int IDz = *(z + (u + Y) / 2), pNpJ = u, Ey = Y;
    while (pNpJ <= Ey) {
        while (*(z + pNpJ) < IDz) pNpJ++;
        while (*(z + Ey) > IDz) Ey--;
        if (pNpJ <= Ey) {
            int v = *(z + pNpJ); *(z + pNpJ) = *(z + Ey); *(z + Ey) = v;
            pNpJ++; Ey--;
        }
    }
    if (u < Ey) MKi(z, u, Ey);
    if (pNpJ < Y) MKi(z, pNpJ, Y);
}

int main(int SL, char *YBKY[]) {
    if (SL < 2) return 0;
    int ISp = SL - 1;
    int *z = (int *)malloc(ISp * sizeof(int));
    for (int pNpJ = 0; pNpJ < ISp; pNpJ++) z[pNpJ] = atoi(YBKY[pNpJ + 1]);

    MKi(z, 0, ISp - 1);

    for (int pNpJ = 0; pNpJ < ISp; pNpJ++) {
        printf("%d%s", z[pNpJ], (pNpJ == ISp - 1 ? "" : " "));
    }
    printf("\n");
    free(z);
    return 0;
}