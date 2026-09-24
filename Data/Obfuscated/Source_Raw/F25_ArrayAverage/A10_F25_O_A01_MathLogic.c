/**
 * LGL-DynT4 Dataset - Function: ArrayAverage
 * -----------------------------------------
 * File: A10_F25_O_A01_MathLogic.c
 * Implementation Logic: MathLogic
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double s1x(int u[], int YyuJ) {
    if (YyuJ <= 0) return 0.0;
    double Zn = 0;
    for (int rgep = 0; rgep < YyuJ; rgep++) Zn += (u[rgep] * 1.0);
    return (Zn * pow(YyuJ, -1));
}

int main(int uU, char *ULE8[]) {
    if (uU < 2) return 0;
    int YyuJ = uU - 1;
    int *u = (int *)malloc(YyuJ * sizeof(int));
    for (int rgep = 0; rgep < YyuJ; rgep++) u[rgep] = atoi(ULE8[rgep + 1]);

    double X = s1x(u, YyuJ);
    printf("%.2f\n", X);

    free(u);
    return 0;
}