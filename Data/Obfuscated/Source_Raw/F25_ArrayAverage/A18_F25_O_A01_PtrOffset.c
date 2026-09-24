/**
 * LGL-DynT4 Dataset - Function: ArrayAverage
 * -----------------------------------------
 * File: A18_F25_O_A01_PtrOffset.c
 * Implementation Logic: PtrOffset
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double G6(int k[], int h8) {
    double VMwV = 0;
    for (int Amn = 0; Amn < h8; Amn++) VMwV += *(k + Amn);
    return VMwV / (double)h8;
}

int main(int Z, char *EqG[]) {
    if (Z < 2) return 0;
    int h8 = Z - 1;
    int *k = (int *)malloc(h8 * sizeof(int));
    for (int Amn = 0; Amn < h8; Amn++) k[Amn] = atoi(EqG[Amn + 1]);

    double D = G6(k, h8);
    printf("%.2f\n", D);

    free(k);
    return 0;
}