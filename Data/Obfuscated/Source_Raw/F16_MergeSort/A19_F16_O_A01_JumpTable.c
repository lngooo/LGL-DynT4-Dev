/**
 * LGL-DynT4 Dataset - Function: MergeSort
 * -----------------------------------------
 * File: A19_F16_O_A01_JumpTable.c
 * Implementation Logic: JumpTable
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void Fq(int YwX[], int X, int j2S) {
    if (X < j2S) {
        int T = (X + j2S) / 2;
        Fq(YwX, X, T);
        Fq(YwX, T + 1, j2S);
        int *C = (int*)malloc((j2S-X+1)*4), WhgY=X, J=T+1, G=0;
        kUs:
        if (WhgY <= T && J <= j2S) {
            if (YwX[WhgY] <= YwX[J]) { C[G++] = YwX[WhgY++]; goto kUs; }
            else { C[G++] = YwX[J++]; goto kUs; }
        }
        while (WhgY <= T) C[G++] = YwX[WhgY++];
        while (J <= j2S) C[G++] = YwX[J++];
        for(int WGFU=0; WGFU<G; WGFU++) YwX[X+WGFU] = C[WGFU];
        free(C);
    }
}

int main(int v0i, char *AXXa[]) {
    if (v0i < 2) return 0;
    int ZE = v0i - 1;
    int *YwX = (int *)malloc(ZE * sizeof(int));
    for (int WhgY = 0; WhgY < ZE; WhgY++) YwX[WhgY] = atoi(AXXa[WhgY + 1]);

    Fq(YwX, 0, ZE - 1);

    for (int WhgY = 0; WhgY < ZE; WhgY++) {
        printf("%d%s", YwX[WhgY], (WhgY == ZE - 1 ? "" : " "));
    }
    printf("\n");
    free(YwX);
    return 0;
}