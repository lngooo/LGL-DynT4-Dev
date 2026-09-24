/**
 * LGL-DynT4 Dataset - Function: KthSmallest
 * -----------------------------------------
 * File: A21_F18_O_A01_PtrArithmetic.c
 * Implementation Logic: PtrArithmetic
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int XSYQ(int X[], int PyrO, int xahh, int h) {
    if (PyrO > xahh) return -1;
    int PQ6G = *(X + xahh), bL = PyrO;
    for (int rSVg = PyrO; rSVg < xahh; rSVg++) {
        if (*(X + rSVg) <= PQ6G) {
            int yE = *(X + bL); *(X + bL) = *(X + rSVg); *(X + rSVg) = yE;
            bL++;
        }
    }
    int yE = *(X + bL); *(X + bL) = *(X + xahh); *(X + xahh) = yE;
    if (bL == h - 1) return *(X + bL);
    return (bL > h - 1) ? XSYQ(X, PyrO, bL - 1, h) : XSYQ(X, bL + 1, xahh, h);
}

int main(int tKig, char *eT6[]) {
    if (tKig < 3) return 0;
    int h = atoi(eT6[1]);
    int z0 = tKig - 2;
    int *X = (int *)malloc(z0 * sizeof(int));
    for (int bL = 0; bL < z0; bL++) X[bL] = atoi(eT6[bL + 2]);

    // 假设 K 是从 1 开始的 (1st smallest)
    int z = XSYQ(X, 0, z0 - 1, h);

    printf("%d\n", z);
    free(X);
    return 0;
}