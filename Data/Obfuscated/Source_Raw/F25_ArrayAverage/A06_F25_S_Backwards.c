/**
 * LGL-DynT4 Dataset - Function: ArrayAverage
 * -----------------------------------------
 * File: A06_F25_S_Backwards.c
 * Implementation Logic: Backwards
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double MF(int KaL[], int hU4C) {
    if (hU4C <= 0) return 0.0;
    double LZ = 0;
    for (int aqWA = hU4C - 1; aqWA >= 0; aqWA--) LZ += KaL[aqWA];
    return LZ / (double)hU4C;
}

int main(int FOl, char *GEG[]) {
    if (FOl < 2) return 0;
    int hU4C = FOl - 1;
    int *KaL = (int *)malloc(hU4C * sizeof(int));
    for (int aqWA = 0; aqWA < hU4C; aqWA++) KaL[aqWA] = atoi(GEG[aqWA + 1]);

    double Ptq = MF(KaL, hU4C);
    printf("%.2f\n", Ptq);

    free(KaL);
    return 0;
}