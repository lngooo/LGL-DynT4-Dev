/**
 * LGL-DynT4 Dataset - Function: ArrayAverage
 * -----------------------------------------
 * File: A07_F25_O_A01_Goto.c
 * Implementation Logic: Goto
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double vr(int OCh[], int Fa) {
    if (Fa <= 0) return 0.0;
    double GEF = 0.0; int le = 0;
Rtg7:
    if (le >= Fa) goto vORI;
    GEF += OCh[le++];
    goto Rtg7;
vORI:
    return GEF / Fa;
}

int main(int mX, char *W[]) {
    if (mX < 2) return 0;
    int Fa = mX - 1;
    int *OCh = (int *)malloc(Fa * sizeof(int));
    for (int le = 0; le < Fa; le++) OCh[le] = atoi(W[le + 1]);

    double nt = vr(OCh, Fa);
    printf("%.2f\n", nt);

    free(OCh);
    return 0;
}