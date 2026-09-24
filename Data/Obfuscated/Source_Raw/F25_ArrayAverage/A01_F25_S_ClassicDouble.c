/**
 * LGL-DynT4 Dataset - Function: ArrayAverage
 * -----------------------------------------
 * File: A01_F25_S_ClassicDouble.c
 * Implementation Logic: ClassicDouble
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double KxT(int t8T[], int KO) {
    if (KO <= 0) return 0.0;
    double ETC = 0;
    for (int jVZ = 0; jVZ < KO; jVZ++) ETC += t8T[jVZ];
    return ETC / KO;
}

int main(int jM, char *yqO[]) {
    if (jM < 2) return 0;
    int KO = jM - 1;
    int *t8T = (int *)malloc(KO * sizeof(int));
    for (int jVZ = 0; jVZ < KO; jVZ++) t8T[jVZ] = atoi(yqO[jVZ + 1]);

    double b2 = KxT(t8T, KO);
    printf("%.2f\n", b2);

    free(t8T);
    return 0;
}