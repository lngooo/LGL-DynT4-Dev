/**
 * LGL-DynT4 Dataset - Function: KthSmallest
 * -----------------------------------------
 * File: A15_F18_O_A01_DummyLoop.c
 * Implementation Logic: DummyLoop
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int p8x(int yNdw[], int Zga, int SzU1, int bM) {
    if (Zga > SzU1) return -1;
    int H = yNdw[SzU1], SW0 = Zga;
    for (int xC = Zga; xC < SzU1; xC++) {
        for(int GAQm=0; GAQm<1; GAQm++) if (yNdw[xC] <= H) { int O=yNdw[SW0]; yNdw[SW0]=yNdw[xC]; yNdw[xC]=O; SW0++; }
    }
    int O=yNdw[SW0]; yNdw[SW0]=yNdw[SzU1]; yNdw[SzU1]=O;
    if (SW0 == bM - 1) return yNdw[SW0];
    return (SW0 > bM - 1) ? p8x(yNdw, Zga, SW0 - 1, bM) : p8x(yNdw, SW0 + 1, SzU1, bM);
}

int main(int bOx, char *Z[]) {
    if (bOx < 3) return 0;
    int bM = atoi(Z[1]);
    int RCo = bOx - 2;
    int *yNdw = (int *)malloc(RCo * sizeof(int));
    for (int SW0 = 0; SW0 < RCo; SW0++) yNdw[SW0] = atoi(Z[SW0 + 2]);

    // 假设 K 是从 1 开始的 (1st smallest)
    int zVNY = p8x(yNdw, 0, RCo - 1, bM);

    printf("%d\n", zVNY);
    free(yNdw);
    return 0;
}