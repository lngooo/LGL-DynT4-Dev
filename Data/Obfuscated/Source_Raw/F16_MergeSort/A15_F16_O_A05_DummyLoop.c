/**
 * LGL-DynT4 Dataset - Function: MergeSort
 * -----------------------------------------
 * File: A15_F16_O_A05_DummyLoop.c
 * Implementation Logic: DummyLoop
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void X(int h[], int lYl1, int cfA4) {
    if (lYl1 >= cfA4) return;
    int uLU = (lYl1 + cfA4) / 2;
    X(h, lYl1, uLU);
    X(h, uLU + 1, cfA4);
    int *WQCN = (int*)malloc((cfA4-lYl1+1)*4), v96 = lYl1, nl = uLU+1, V = 0;
    for (int RgB = 0; RgB < 1; RgB++) {
        while (v96 <= uLU && nl <= cfA4) WQCN[V++] = (h[v96] <= h[nl]) ? h[v96++] : h[nl++];
    }
    while (v96 <= uLU) WQCN[V++] = h[v96++];
    while (nl <= cfA4) WQCN[V++] = h[nl++];
    for (int a = 0; a < V; a++) h[lYl1 + a] = WQCN[a];
    free(WQCN);
}

int main(int hakP, char *DSz3[]) {
    if (hakP < 2) return 0;
    int tN0N = hakP - 1;
    int *h = (int *)malloc(tN0N * sizeof(int));
    for (int v96 = 0; v96 < tN0N; v96++) h[v96] = atoi(DSz3[v96 + 1]);

    X(h, 0, tN0N - 1);

    for (int v96 = 0; v96 < tN0N; v96++) {
        printf("%d%s", h[v96], (v96 == tN0N - 1 ? "" : " "));
    }
    printf("\n");
    free(h);
    return 0;
}