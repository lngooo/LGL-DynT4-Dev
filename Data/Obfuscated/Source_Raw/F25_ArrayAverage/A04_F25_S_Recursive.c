/**
 * LGL-DynT4 Dataset - Function: ArrayAverage
 * -----------------------------------------
 * File: A04_F25_S_Recursive.c
 * Implementation Logic: Recursive
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double v(int r[], int Z) {
    if (Z <= 0) return 0.0;
    if (Z == 1) return (double)r[0];
    double C = v(r, Z - 1);
    return (C * (Z - 1) + r[Z - 1]) / Z;
}

int main(int pq, char *S7[]) {
    if (pq < 2) return 0;
    int Z = pq - 1;
    int *r = (int *)malloc(Z * sizeof(int));
    for (int oS = 0; oS < Z; oS++) r[oS] = atoi(S7[oS + 1]);

    double lcMr = v(r, Z);
    printf("%.2f\n", lcMr);

    free(r);
    return 0;
}