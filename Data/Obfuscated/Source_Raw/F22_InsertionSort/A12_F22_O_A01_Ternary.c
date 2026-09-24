/**
 * LGL-DynT4 Dataset - Function: InsertionSort
 * -----------------------------------------
 * File: A12_F22_O_A01_Ternary.c
 * Implementation Logic: Ternary
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void KQu(int lCD[], int C) {
    for (int D = 1; D < C; D++) {
        int w = lCD[D], O2Jn = D - 1;
        for (; (O2Jn >= 0 ? lCD[O2Jn] > w : 0); O2Jn--) lCD[O2Jn+1] = lCD[O2Jn];
        lCD[O2Jn+1] = w;
    }
}

int main(int dL8f, char *NJu[]) {
    if (dL8f < 2) return 0;
    int C = dL8f - 1;
    int *lCD = (int *)malloc(C * sizeof(int));
    for (int D = 0; D < C; D++) lCD[D] = atoi(NJu[D + 1]);

    KQu(lCD, C);

    for (int D = 0; D < C; D++) {
        printf("%d%s", lCD[D], (D == C - 1 ? "" : " "));
    }
    printf("\n");
    free(lCD);
    return 0;
}