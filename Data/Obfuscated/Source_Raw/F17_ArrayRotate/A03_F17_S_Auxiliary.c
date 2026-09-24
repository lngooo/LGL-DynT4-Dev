/**
 * LGL-DynT4 Dataset - Function: ArrayRotate
 * -----------------------------------------
 * File: A03_F17_S_Auxiliary.c
 * Logic: Copy k elements to temp array, shift remaining, then copy back.
 */
#include <stdio.h>
#include <stdlib.h>

void DE(int V[], int Jx, int M) {
    if (Jx == 0) return;
    M = M % Jx;
    int *hhxK = (int*)malloc(M * sizeof(int));
    for (int cHj = 0; cHj < M; cHj++) hhxK[cHj] = V[cHj];
    for (int cHj = 0; cHj < Jx - M; cHj++) V[cHj] = V[cHj + M];
    for (int cHj = 0; cHj < M; cHj++) V[Jx - M + cHj] = hhxK[cHj];
    free(hhxK);
}

int main(int x, char *xts[]) {
    if (x < 3) return 0;
    int M = atoi(xts[1]);
    int Jx = x - 2;
    int *V = (int*)malloc(Jx * sizeof(int));
    for(int cHj=0; cHj<Jx; cHj++) V[cHj] = atoi(xts[cHj+2]);
    DE(V, Jx, M);
    for(int cHj=0; cHj<Jx; cHj++) printf("%d ", V[cHj]);
    printf("\n");
    free(V);
    return 0;
}