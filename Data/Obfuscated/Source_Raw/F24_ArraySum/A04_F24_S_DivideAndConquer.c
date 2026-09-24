/**
 * LGL-DynT4 Dataset - Function: ArraySum
 * -----------------------------------------
 * File: A04_F24_S_DivideAndConquer.c
 * Implementation Logic: DivideAndConquer
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int l(int nB[], int U) {
    if (U <= 0) return 0;
    if (U == 1) return nB[0];
    int jR = U / 2;
    return l(nB, jR) + l(nB + jR, U - jR);
}

int main(int aEk, char *gEJ[]) {
    if (aEk < 2) return 0;
    int U = aEk - 1;
    int *nB = (int *)malloc(U * sizeof(int));
    for (int Sn6E = 0; Sn6E < U; Sn6E++) nB[Sn6E] = atoi(gEJ[Sn6E + 1]);

    int DTpW = l(nB, U);
    printf("%d\n", DTpW);

    free(nB);
    return 0;
}