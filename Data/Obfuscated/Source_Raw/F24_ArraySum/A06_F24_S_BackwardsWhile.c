/**
 * LGL-DynT4 Dataset - Function: ArraySum
 * -----------------------------------------
 * File: A06_F24_S_BackwardsWhile.c
 * Implementation Logic: BackwardsWhile
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int xvG(int N[], int ePoi) {
    int mcnt = 0;
    int fvyP = ePoi - 1;
    while (fvyP >= 0) {
        mcnt += N[fvyP];
        fvyP--;
    }
    return mcnt;
}

int main(int Bj, char *tyR[]) {
    if (Bj < 2) return 0;
    int ePoi = Bj - 1;
    int *N = (int *)malloc(ePoi * sizeof(int));
    for (int cq99 = 0; cq99 < ePoi; cq99++) N[cq99] = atoi(tyR[cq99 + 1]);

    int lkzR = xvG(N, ePoi);
    printf("%d\n", lkzR);

    free(N);
    return 0;
}