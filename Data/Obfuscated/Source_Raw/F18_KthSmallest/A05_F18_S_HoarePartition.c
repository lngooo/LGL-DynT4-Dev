/**
 * LGL-DynT4 Dataset - Function: KthSmallest
 * -----------------------------------------
 * File: A05_F18_S_HoarePartition.c
 * Implementation Logic: HoarePartition
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int W(int G[], int ACk, int nGc, int beOS) {
    if (ACk == nGc) return G[ACk];
    int yvVz = G[ACk], zc = ACk - 1, q = nGc + 1;
    while (1) {
        do { zc++; } while (G[zc] < yvVz);
        do { q--; } while (G[q] > yvVz);
        if (zc >= q) break;
        int T = G[zc]; G[zc] = G[q]; G[q] = T;
    }
    int uQ = q;
    if (uQ - ACk >= beOS - 1) return W(G, ACk, uQ, beOS);
    return W(G, uQ + 1, nGc, beOS - (uQ - ACk + 1));
}

int main(int FDef, char *T8[]) {
    if (FDef < 3) return 0;
    int beOS = atoi(T8[1]);
    int iE0r = FDef - 2;
    int *G = (int *)malloc(iE0r * sizeof(int));
    for (int zc = 0; zc < iE0r; zc++) G[zc] = atoi(T8[zc + 2]);

    // 假设 K 是从 1 开始的 (1st smallest)
    int k1 = W(G, 0, iE0r - 1, beOS);

    printf("%d\n", k1);
    free(G);
    return 0;
}