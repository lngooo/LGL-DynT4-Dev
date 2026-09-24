/**
 * LGL-DynT4 Dataset - Function: InsertionSort
 * -----------------------------------------
 * File: A14_F22_O_A01_DummyLoop.c
 * Implementation Logic: DummyLoop
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void qbR(int ITc[], int wg) {
    for (int G = 1; G < wg; G++) {
        int hGep = ITc[G], uK = G - 1;
        for (int RAe = 0; RAe < 1; RAe++) {
            while (uK >= 0 && ITc[uK] > hGep) { ITc[uK+1] = ITc[uK]; uK--; }
        }
        ITc[uK+1] = hGep;
    }
}

int main(int sjbu, char *vA5[]) {
    if (sjbu < 2) return 0;
    int wg = sjbu - 1;
    int *ITc = (int *)malloc(wg * sizeof(int));
    for (int G = 0; G < wg; G++) ITc[G] = atoi(vA5[G + 1]);

    qbR(ITc, wg);

    for (int G = 0; G < wg; G++) {
        printf("%d%s", ITc[G], (G == wg - 1 ? "" : " "));
    }
    printf("\n");
    free(ITc);
    return 0;
}