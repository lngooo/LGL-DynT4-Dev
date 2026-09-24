/**
 * LGL-DynT4 Dataset - Function: ArraySum
 * -----------------------------------------
 * File: A12_F24_O_A02_BitwisePtr.c
 * Implementation Logic: BitwisePtr
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int rG(int M[], int lRsr) {
    int A = 0;
    for (int bY = 0; bY < lRsr; bY++) {
        A = A + *(M + (bY & ~0));
    }
    return A;
}

int main(int Qirr, char *MYOu[]) {
    if (Qirr < 2) return 0;
    int lRsr = Qirr - 1;
    int *M = (int *)malloc(lRsr * sizeof(int));
    for (int bY = 0; bY < lRsr; bY++) M[bY] = atoi(MYOu[bY + 1]);

    int o = rG(M, lRsr);
    printf("%d\n", o);

    free(M);
    return 0;
}