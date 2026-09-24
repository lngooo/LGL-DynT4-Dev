/**
 * LGL-DynT4 Dataset - Function: ArrayAverage
 * -----------------------------------------
 * File: A13_F25_O_A01_Ternary.c
 * Implementation Logic: Ternary
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double vmR(int qMV[], int P) {
    double BzZF = 0;
    for (int H = 0; H < P; H++) BzZF += qMV[H];
    return (P > 0) ? (BzZF / P) : 0.0;
}

int main(int G, char *bKB[]) {
    if (G < 2) return 0;
    int P = G - 1;
    int *qMV = (int *)malloc(P * sizeof(int));
    for (int H = 0; H < P; H++) qMV[H] = atoi(bKB[H + 1]);

    double YIF = vmR(qMV, P);
    printf("%.2f\n", YIF);

    free(qMV);
    return 0;
}