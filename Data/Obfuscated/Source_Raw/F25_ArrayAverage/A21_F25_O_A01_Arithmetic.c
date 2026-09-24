/**
 * LGL-DynT4 Dataset - Function: ArrayAverage
 * -----------------------------------------
 * File: A21_F25_O_A01_Arithmetic.c
 * Implementation Logic: Arithmetic
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double x4(int Y[], int bF) {
    double tz = 0;
    for (int qNu = 0; qNu < bF; qNu++) {
        tz = tz - (-Y[qNu]);
    }
    return tz / (double)bF;
}

int main(int v, char *E[]) {
    if (v < 2) return 0;
    int bF = v - 1;
    int *Y = (int *)malloc(bF * sizeof(int));
    for (int qNu = 0; qNu < bF; qNu++) Y[qNu] = atoi(E[qNu + 1]);

    double V = x4(Y, bF);
    printf("%.2f\n", V);

    free(Y);
    return 0;
}