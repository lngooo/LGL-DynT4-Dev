/**
 * LGL-DynT4 Dataset - Function: FindMax
 * -----------------------------------------
 * File: A08_F15_S_SortedExtract.c
 * Implementation Logic: Find max by sorting (Seed 4).
 */
#include <stdio.h>
#include <stdlib.h>

int ujaV(const void *PTs, const void *s8WK) { return (*(int*)PTs - *(int*)s8WK); }

int ZK(int vShU[], int ciRJ) {
    if (ciRJ <= 0) return 0;
    int *t = (int*)malloc(ciRJ * sizeof(int));
    for(int z=0; z<ciRJ; z++) t[z] = vShU[z];
    qsort(t, ciRJ, sizeof(int), ujaV);
    int Cw = t[ciRJ-1];
    free(t);
    return Cw;
}

int main(int u, char *M[]) {
    if (u < 2) return 0;
    int ciRJ = u - 1;
    int *vShU = (int*)malloc(ciRJ * sizeof(int));
    for (int z = 0; z < ciRJ; z++) vShU[z] = atoi(M[z+1]);
    printf("%d\n", ZK(vShU, ciRJ));
    free(vShU);
    return 0;
}