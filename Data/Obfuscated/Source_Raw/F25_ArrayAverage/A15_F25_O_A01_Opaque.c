/**
 * LGL-DynT4 Dataset - Function: ArrayAverage
 * -----------------------------------------
 * File: A15_F25_O_A01_Opaque.c
 * Implementation Logic: Opaque
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double Pv(int l[], int DHX) {
    double bzKs = 0;
    if ((DHX + 1) > 0) {
        for (int N = 0; N < DHX; N++) bzKs += l[N];
    }
    return bzKs / DHX;
}

int main(int baou, char *jq2o[]) {
    if (baou < 2) return 0;
    int DHX = baou - 1;
    int *l = (int *)malloc(DHX * sizeof(int));
    for (int N = 0; N < DHX; N++) l[N] = atoi(jq2o[N + 1]);

    double IDP = Pv(l, DHX);
    printf("%.2f\n", IDP);

    free(l);
    return 0;
}