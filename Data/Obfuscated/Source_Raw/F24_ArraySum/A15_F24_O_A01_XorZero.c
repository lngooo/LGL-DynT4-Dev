/**
 * LGL-DynT4 Dataset - Function: ArraySum
 * -----------------------------------------
 * File: A15_F24_O_A01_XorZero.c
 * Implementation Logic: XorZero
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int y6(int yM[], int g) {
    int nnhK = 0;
    for (int l3k = 0; l3k < g; l3k++) {
        nnhK += (yM[l3k] ^ 0);
    }
    return nnhK;
}

int main(int JAwW, char *A5[]) {
    if (JAwW < 2) return 0;
    int g = JAwW - 1;
    int *yM = (int *)malloc(g * sizeof(int));
    for (int l3k = 0; l3k < g; l3k++) yM[l3k] = atoi(A5[l3k + 1]);

    int uXx = y6(yM, g);
    printf("%d\n", uXx);

    free(yM);
    return 0;
}