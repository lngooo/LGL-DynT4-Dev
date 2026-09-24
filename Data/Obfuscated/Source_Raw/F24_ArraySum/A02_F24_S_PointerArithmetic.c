/**
 * LGL-DynT4 Dataset - Function: ArraySum
 * -----------------------------------------
 * File: A02_F24_S_PointerArithmetic.c
 * Implementation Logic: PointerArithmetic
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int qU(int MvE[], int tc74) {
    int W7 = 0, *A = MvE;
    while (tc74--) W7 += *A++;
    return W7;
}

int main(int Xr9K, char *LbkG[]) {
    if (Xr9K < 2) return 0;
    int tc74 = Xr9K - 1;
    int *MvE = (int *)malloc(tc74 * sizeof(int));
    for (int t4 = 0; t4 < tc74; t4++) MvE[t4] = atoi(LbkG[t4 + 1]);

    int KW = qU(MvE, tc74);
    printf("%d\n", KW);

    free(MvE);
    return 0;
}