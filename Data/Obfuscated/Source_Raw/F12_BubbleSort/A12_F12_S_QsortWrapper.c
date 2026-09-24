/**
 * LGL-DynT4 Dataset - Function: BubbleSort
 * -----------------------------------------
 * File: A12_F12_S_QsortWrapper.c
 * Implementation Logic: Using qsort with bubble-style comparison (Seed 6).
 */
#include <stdio.h>
#include <stdlib.h>

int yX(const void *pVcm, const void *VXgH) {
    return (*(int*)pVcm - *(int*)VXgH);
}

void Ey(int ukO[], int V) {
    qsort(ukO, V, sizeof(int), yX);
}

int main(int q, char *Otmx[]) {
    if (q < 2) return 0;
    int V = q - 1;
    int *ukO = (int*)malloc(V * sizeof(int));
    for (int Q = 0; Q < V; Q++) ukO[Q] = atoi(Otmx[Q+1]);
    Ey(ukO, V);
    for (int Q = 0; Q < V; Q++) printf("%d ", ukO[Q]);
    printf("\n");
    free(ukO);
    return 0;
}