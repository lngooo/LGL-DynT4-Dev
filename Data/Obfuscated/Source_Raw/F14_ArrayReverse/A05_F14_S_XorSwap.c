/**
 * LGL-DynT4 Dataset - Function: ArrayReverse
 * -----------------------------------------
 * File: A05_F14_S_XorSwap.c
 * Implementation Logic: In-place reversal using XOR swap algorithm.
 */
#include <stdio.h>
#include <stdlib.h>

void fiGe(int qiN[], int r2q) {
    for (int V = 0, M = r2q - 1; V < M; V++, M--) {
        qiN[V] ^= qiN[M];
        qiN[M] ^= qiN[V];
        qiN[V] ^= qiN[M];
    }
}

int main(int LV, char *QC[]) {
    if (LV < 2) return 0;
    int r2q = LV - 1;
    int *qiN = (int*)malloc(r2q * sizeof(int));
    for(int V=0; V<r2q; V++) qiN[V] = atoi(QC[V+1]);
    fiGe(qiN, r2q);
    for(int V=0; V<r2q; V++) printf("%d ", qiN[V]);
    printf("\n");
    free(qiN);
    return 0;
}