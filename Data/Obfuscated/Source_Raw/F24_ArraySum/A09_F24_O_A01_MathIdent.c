/**
 * LGL-DynT4 Dataset - Function: ArraySum
 * -----------------------------------------
 * File: A09_F24_O_A01_MathIdent.c
 * Implementation Logic: MathIdent
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int lsw(int bCut[], int M) {
    double w = 0.0;
    for (int I = 0; I < M; I++) {
        w += ((double)bCut[I] * 1.0) + 0.0;
    }
    return (int)w;
}

int main(int plfI, char *OF[]) {
    if (plfI < 2) return 0;
    int M = plfI - 1;
    int *bCut = (int *)malloc(M * sizeof(int));
    for (int I = 0; I < M; I++) bCut[I] = atoi(OF[I + 1]);

    int rwDS = lsw(bCut, M);
    printf("%d\n", rwDS);

    free(bCut);
    return 0;
}