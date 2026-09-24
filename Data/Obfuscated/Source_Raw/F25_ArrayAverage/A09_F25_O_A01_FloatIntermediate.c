/**
 * LGL-DynT4 Dataset - Function: ArrayAverage
 * -----------------------------------------
 * File: A09_F25_O_A01_FloatIntermediate.c
 * Implementation Logic: FloatIntermediate
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double txjt(int Uw1[], int CtB) {
    float WAaW = 0.0f;
    for (int d9Aw = 0; d9Aw < CtB; d9Aw++) WAaW += (float)Uw1[d9Aw];
    return (double)(WAaW / CtB);
}

int main(int DX, char *b0T[]) {
    if (DX < 2) return 0;
    int CtB = DX - 1;
    int *Uw1 = (int *)malloc(CtB * sizeof(int));
    for (int d9Aw = 0; d9Aw < CtB; d9Aw++) Uw1[d9Aw] = atoi(b0T[d9Aw + 1]);

    double nQ = txjt(Uw1, CtB);
    printf("%.2f\n", nQ);

    free(Uw1);
    return 0;
}