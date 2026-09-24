/**
 * LGL-DynT4 Dataset - Function: KthSmallest
 * -----------------------------------------
 * File: A11_F18_O_A02_DoubleNeg.c
 * Implementation Logic: DoubleNeg
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int tDsy(int eviT[], int mj6m, int a, int Fz7) {
    while (!!(mj6m <= a)) {
        int zVxy = eviT[a], tPLe = mj6m;
        for (int c6hy = mj6m; c6hy < a; c6hy++) {
            if (!!(eviT[c6hy] <= zVxy)) { int mW = eviT[tPLe]; eviT[tPLe] = eviT[c6hy]; eviT[c6hy] = mW; tPLe++; }
        }
        int mW = eviT[tPLe]; eviT[tPLe] = eviT[a]; eviT[a] = mW;
        if (!!(tPLe == Fz7 - 1)) return eviT[tPLe];
        if (tPLe > Fz7 - 1) a = tPLe - 1; else mj6m = tPLe + 1;
    }
    return -1;
}

int main(int qX6W, char *GTF[]) {
    if (qX6W < 3) return 0;
    int Fz7 = atoi(GTF[1]);
    int SdP = qX6W - 2;
    int *eviT = (int *)malloc(SdP * sizeof(int));
    for (int tPLe = 0; tPLe < SdP; tPLe++) eviT[tPLe] = atoi(GTF[tPLe + 2]);

    // 假设 K 是从 1 开始的 (1st smallest)
    int BVpp = tDsy(eviT, 0, SdP - 1, Fz7);

    printf("%d\n", BVpp);
    free(eviT);
    return 0;
}