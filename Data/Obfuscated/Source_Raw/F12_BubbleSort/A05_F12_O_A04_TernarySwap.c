/**
 * LGL-DynT4 Dataset - Function: BubbleSort
 * -----------------------------------------
 * File: A05_F12_O_A04_TernarySwap.c
 * Implementation Logic: Recursive BS with logic hidden in ternary expressions.
 */
#include <stdio.h>
#include <stdlib.h>

void qxx(int wbA[], int w) {
    if (w <= 1) return;
    for (int KK = 0; KK < w - 1; KK++) {
        (wbA[KK] > wbA[KK+1]) ? ({int Xs=wbA[KK]; wbA[KK]=wbA[KK+1]; wbA[KK+1]=Xs; 0;}) : 0;
    }
    qxx(wbA, w - 1);
}

int main(int uRG, char *XVC4[]) {
    if (uRG < 2) return 0;
    int w = uRG - 1;
    int *wbA = (int*)malloc(w * sizeof(int));
    for (int KK = 0; KK < w; KK++) wbA[KK] = atoi(XVC4[KK+1]);
    qxx(wbA, w);
    for (int KK = 0; KK < w; KK++) printf("%d ", wbA[KK]);
    printf("\n");
    free(wbA);
    return 0;
}