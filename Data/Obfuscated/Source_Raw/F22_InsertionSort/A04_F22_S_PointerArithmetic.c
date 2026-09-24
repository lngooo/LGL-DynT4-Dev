/**
 * LGL-DynT4 Dataset - Function: InsertionSort
 * -----------------------------------------
 * File: A04_F22_S_PointerArithmetic.c
 * Implementation Logic: PointerArithmetic
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void WQ6(int eZ8K[], int w) {
    int *A, *J, irUc;
    for (A = eZ8K + 1; A < eZ8K + w; A++) {
        irUc = *A;
        J = A - 1;
        while (J >= eZ8K && *J > irUc) {
            *(J + 1) = *J;
            J--;
        }
        *(J + 1) = irUc;
    }
}

int main(int c, char *GoPw[]) {
    if (c < 2) return 0;
    int w = c - 1;
    int *eZ8K = (int *)malloc(w * sizeof(int));
    for (int EtY2 = 0; EtY2 < w; EtY2++) eZ8K[EtY2] = atoi(GoPw[EtY2 + 1]);

    WQ6(eZ8K, w);

    for (int EtY2 = 0; EtY2 < w; EtY2++) {
        printf("%d%s", eZ8K[EtY2], (EtY2 == w - 1 ? "" : " "));
    }
    printf("\n");
    free(eZ8K);
    return 0;
}