/**
 * LGL-DynT4 Dataset - Function: QuickSort
 * -----------------------------------------
 * File: A03_F13_S_MiddlePivot.c
 * Implementation Logic: MiddlePivot
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void y(int q[], int ds, int YS) {
    int dDP = ds, e = YS;
    int QrQ2 = q[(ds + YS) / 2];
    while (dDP <= e) {
        while (q[dDP] < QrQ2) dDP++;
        while (q[e] > QrQ2) e--;
        if (dDP <= e) {
            int gbs = q[dDP]; q[dDP] = q[e]; q[e] = gbs;
            dDP++; e--;
        }
    }
    if (ds < e) y(q, ds, e);
    if (dDP < YS) y(q, dDP, YS);
}

int main(int oyGT, char *u[]) {
    if (oyGT < 2) return 0;
    int MIfl = oyGT - 1;
    int *q = (int *)malloc(MIfl * sizeof(int));
    for (int dDP = 0; dDP < MIfl; dDP++) q[dDP] = atoi(u[dDP + 1]);

    y(q, 0, MIfl - 1);

    for (int dDP = 0; dDP < MIfl; dDP++) {
        printf("%d%s", q[dDP], (dDP == MIfl - 1 ? "" : " "));
    }
    printf("\n");
    free(q);
    return 0;
}