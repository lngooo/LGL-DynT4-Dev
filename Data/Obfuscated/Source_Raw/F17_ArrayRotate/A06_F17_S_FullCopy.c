/**
 * LGL-DynT4 Dataset - Function: ArrayRotate
 * -----------------------------------------
 * File: A06_F17_S_FullCopy.c
 * Logic: Map source index i to target index (i-k)%n in a new array.
 */
#include <stdio.h>
#include <stdlib.h>

void fZIM(int zLc[], int bvBl, int b3Hu) {
    if (bvBl == 0) return;
    b3Hu = b3Hu % bvBl;
    int *qfhg = (int*)malloc(bvBl * sizeof(int));
    for (int sj = 0; sj < bvBl; sj++) {
        qfhg[sj] = zLc[(sj + b3Hu) % bvBl];
    }
    for (int sj = 0; sj < bvBl; sj++) zLc[sj] = qfhg[sj];
    free(qfhg);
}

int main(int qX, char *j[]) {
    if (qX < 3) return 0;
    int b3Hu = atoi(j[1]);
    int bvBl = qX - 2;
    int *zLc = (int*)malloc(bvBl * sizeof(int));
    for(int sj=0; sj<bvBl; sj++) zLc[sj] = atoi(j[sj+2]);
    fZIM(zLc, bvBl, b3Hu);
    for(int sj=0; sj<bvBl; sj++) printf("%d ", zLc[sj]);
    printf("\n");
    free(zLc);
    return 0;
}