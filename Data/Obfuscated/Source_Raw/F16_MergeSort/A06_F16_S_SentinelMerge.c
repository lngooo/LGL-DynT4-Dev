/**
 * LGL-DynT4 Dataset - Function: MergeSort
 * -----------------------------------------
 * File: A06_F16_S_SentinelMerge.c
 * Implementation Logic: SentinelMerge
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void ERp9(int Y7j[], int ETx, int bP9) {
    if (ETx < bP9) {
        int V = ETx + (bP9 - ETx) / 2;
        ERp9(Y7j, ETx, V);
        ERp9(Y7j, V + 1, bP9);
        int S = V - ETx + 1, qJ = bP9 - V;
        int tO9S[128], ZRh[128]; // Stack based for seed
        for (int Cy = 0; Cy < S; Cy++) tO9S[Cy] = Y7j[ETx + Cy];
        for (int z = 0; z < qJ; z++) ZRh[z] = Y7j[V + 1 + z];
        tO9S[S] = 2147483647; ZRh[qJ] = 2147483647; // Sentinel
        int Cy = 0, z = 0;
        for (int tf7 = ETx; tf7 <= bP9; tf7++) Y7j[tf7] = (tO9S[Cy] <= ZRh[z]) ? tO9S[Cy++] : ZRh[z++];
    }
}

int main(int tn, char *CO[]) {
    if (tn < 2) return 0;
    int ZXP = tn - 1;
    int *Y7j = (int *)malloc(ZXP * sizeof(int));
    for (int Cy = 0; Cy < ZXP; Cy++) Y7j[Cy] = atoi(CO[Cy + 1]);

    ERp9(Y7j, 0, ZXP - 1);

    for (int Cy = 0; Cy < ZXP; Cy++) {
        printf("%d%s", Y7j[Cy], (Cy == ZXP - 1 ? "" : " "));
    }
    printf("\n");
    free(Y7j);
    return 0;
}