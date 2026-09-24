/**
 * LGL-DynT4 Dataset - Function: ArraySum
 * -----------------------------------------
 * File: A10_F24_O_A03_Ternary.c
 * Implementation Logic: Ternary
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int U0(int ceux[], int j) {
    return (j <= 0) ? 0 : ceux[0] + U0(ceux + 1, j - 1);
}

int main(int y, char *v[]) {
    if (y < 2) return 0;
    int j = y - 1;
    int *ceux = (int *)malloc(j * sizeof(int));
    for (int Bzb = 0; Bzb < j; Bzb++) ceux[Bzb] = atoi(v[Bzb + 1]);

    int Vq = U0(ceux, j);
    printf("%d\n", Vq);

    free(ceux);
    return 0;
}