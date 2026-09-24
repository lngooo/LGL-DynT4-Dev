/**
 * LGL-DynT4 Dataset - Function: ArrayRotate
 * -----------------------------------------
 * File: A17_F17_O_A03_Long.c
 * Logic: Auxiliary seed using long long for address calculation.
 */
#include <stdio.h>
#include <stdlib.h>

void sl(int qU[], int v2, int lm) {
    if (v2 == 0) return;
    long long l = v2, gb1 = lm % v2;
    int *yP = malloc(gb1 * sizeof(int));
    for(long long v=0; v<gb1; v++) yP[v] = *(qU + v);
    for(long long v=0; v<l-gb1; v++) *(qU + v) = *(qU + v + gb1);
    for(long long v=0; v<gb1; v++) *(qU + l - gb1 + v) = yP[v];
    free(yP);
}

int main(int tD, char *xZ[]) {
    if (tD < 3) return 0;
    int lm = atoi(xZ[1]);
    int v2 = tD - 2;
    int *qU = (int*)malloc(v2 * sizeof(int));
    for(int v=0; v<v2; v++) qU[v] = atoi(xZ[v+2]);
    sl(qU, v2, lm);
    for(int v=0; v<v2; v++) printf("%d ", qU[v]);
    printf("\n");
    free(qU);
    return 0;
}