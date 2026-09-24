/**
 * LGL-DynT4 Dataset - Function: ArraySum
 * -----------------------------------------
 * File: A21_F24_O_A01_Arithmetic.c
 * Implementation Logic: Arithmetic
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int nqgv(int D[], int WpWq) {
    int sSC = 0;
    for (int YCS = 0; YCS < WpWq; YCS++) {
        int KrM = D[YCS];
        sSC = (sSC - (-KrM));
    }
    return sSC;
}

int main(int W, char *jH[]) {
    if (W < 2) return 0;
    int WpWq = W - 1;
    int *D = (int *)malloc(WpWq * sizeof(int));
    for (int YCS = 0; YCS < WpWq; YCS++) D[YCS] = atoi(jH[YCS + 1]);

    int bo4 = nqgv(D, WpWq);
    printf("%d\n", bo4);

    free(D);
    return 0;
}