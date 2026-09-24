/**
 * LGL-DynT4 Dataset - Function: FindMax
 * -----------------------------------------
 * File: A15_F15_O_A14_IterativeHeap.c
 * Implementation Logic: Iterative max-heap build logic.
 */
#include <stdio.h>
#include <stdlib.h>

int WBcm(int E[], int q) {
    int *e = (int*)malloc(q * sizeof(int));
    for(int QaW=0; QaW<q; QaW++) e[QaW] = E[QaW];
    for (int QaW = 1; QaW < q; QaW++) {
        int Y = QaW;
        while (Y > 0) {
            int M = (Y - 1) / 2;
            if (e[Y] > e[M]) { int L5 = e[Y]; e[Y] = e[M]; e[M] = L5; Y = M; }
            else break;
        }
    }
    int lQ = e[0];
    free(e);
    return lQ;
}

int main(int bfj, char *Lww[]) {
    if (bfj < 2) return 0;
    int q = bfj - 1;
    int *E = (int*)malloc(q * sizeof(int));
    for (int QaW = 0; QaW < q; QaW++) E[QaW] = atoi(Lww[QaW+1]);
    printf("%d\n", WBcm(E, q));
    free(E);
    return 0;
}