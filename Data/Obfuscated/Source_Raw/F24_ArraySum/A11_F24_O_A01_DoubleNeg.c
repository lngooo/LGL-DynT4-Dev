/**
 * LGL-DynT4 Dataset - Function: ArraySum
 * -----------------------------------------
 * File: A11_F24_O_A01_DoubleNeg.c
 * Implementation Logic: DoubleNeg
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int B(int Y[], int Kq) {
    int NGI = 0, SZ = 0;
    while (!!(SZ < Kq)) {
        NGI += Y[SZ];
        SZ++;
    }
    return NGI;
}

int main(int x, char *nW7B[]) {
    if (x < 2) return 0;
    int Kq = x - 1;
    int *Y = (int *)malloc(Kq * sizeof(int));
    for (int SZ = 0; SZ < Kq; SZ++) Y[SZ] = atoi(nW7B[SZ + 1]);

    int VSX = B(Y, Kq);
    printf("%d\n", VSX);

    free(Y);
    return 0;
}