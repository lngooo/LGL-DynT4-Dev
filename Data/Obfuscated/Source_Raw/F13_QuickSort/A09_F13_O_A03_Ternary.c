/**
 * LGL-DynT4 Dataset - Function: QuickSort
 * -----------------------------------------
 * File: A09_F13_O_A03_Ternary.c
 * Implementation Logic: Ternary
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void UYGN(int yJ[], int cXk6, int K3Q) {
    if (cXk6 >= K3Q) return;
    int k3 = cXk6, lX = K3Q, A = yJ[(cXk6+K3Q)/2];
    while (k3 <= lX) {
        while (yJ[k3] < A) k3++;
        while (yJ[lX] > A) lX--;
        (k3 <= lX) ? ({ int tUX=yJ[k3]; yJ[k3]=yJ[lX]; yJ[lX]=tUX; k3++; lX--; 0; }) : 0;
    }
    (cXk6 < lX) ? (UYGN(yJ, cXk6, lX), 0) : 0;
    (k3 < K3Q) ? (UYGN(yJ, k3, K3Q), 0) : 0;
}

int main(int sOlh, char *ma[]) {
    if (sOlh < 2) return 0;
    int aDF = sOlh - 1;
    int *yJ = (int *)malloc(aDF * sizeof(int));
    for (int k3 = 0; k3 < aDF; k3++) yJ[k3] = atoi(ma[k3 + 1]);

    UYGN(yJ, 0, aDF - 1);

    for (int k3 = 0; k3 < aDF; k3++) {
        printf("%d%s", yJ[k3], (k3 == aDF - 1 ? "" : " "));
    }
    printf("\n");
    free(yJ);
    return 0;
}