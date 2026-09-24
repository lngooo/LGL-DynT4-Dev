/**
 * LGL-DynT4 Dataset - Function: ArrayRotate
 * -----------------------------------------
 * File: A04_F17_S_StepByStep.c
 * Logic: Rotate the array by one position k times.
 */
#include <stdio.h>
#include <stdlib.h>

void bYjj(int d75t[], int nl0) {
    int ahJw = d75t[0], c;
    for (c = 0; c < nl0 - 1; c++) d75t[c] = d75t[c + 1];
    d75t[nl0 - 1] = ahJw;
}

void EKtK(int d75t[], int nl0, int vYyE) {
    if (nl0 == 0) return;
    vYyE = vYyE % nl0;
    for (int c = 0; c < vYyE; c++) bYjj(d75t, nl0);
}

int main(int Wi, char *WCQC[]) {
    if (Wi < 3) return 0;
    int vYyE = atoi(WCQC[1]);
    int nl0 = Wi - 2;
    int *d75t = (int*)malloc(nl0 * sizeof(int));
    for(int c=0; c<nl0; c++) d75t[c] = atoi(WCQC[c+2]);
    EKtK(d75t, nl0, vYyE);
    for(int c=0; c<nl0; c++) printf("%d ", d75t[c]);
    printf("\n");
    free(d75t);
    return 0;
}