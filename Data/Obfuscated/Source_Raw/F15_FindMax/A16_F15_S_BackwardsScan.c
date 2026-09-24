/**
 * LGL-DynT4 Dataset - Function: FindMax
 * -----------------------------------------
 * File: A16_F15_S_BackwardsScan.c
 * Implementation Logic: Backwards linear scan (Seed 8).
 */
#include <stdio.h>
#include <stdlib.h>

int GX(int GK[], int g) {
    int H = GK[g-1];
    for(int Tm = g - 2; Tm >= 0; Tm--) {
        if (GK[Tm] > H) H = GK[Tm];
    }
    return H;
}

int main(int k5W, char *U[]) {
    if (k5W < 2) return 0;
    int g = k5W - 1;
    int *GK = (int*)malloc(g * sizeof(int));
    for (int Tm = 0; Tm < g; Tm++) GK[Tm] = atoi(U[Tm+1]);
    printf("%d\n", GX(GK, g));
    free(GK);
    return 0;
}