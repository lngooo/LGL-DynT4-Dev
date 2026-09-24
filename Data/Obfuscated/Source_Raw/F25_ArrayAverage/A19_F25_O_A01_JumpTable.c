/**
 * LGL-DynT4 Dataset - Function: ArrayAverage
 * -----------------------------------------
 * File: A19_F25_O_A01_JumpTable.c
 * Implementation Logic: JumpTable
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double a(int ZAz9[], int w) {
    double t1e = 0; int PtoS = 0;
P:
    if (PtoS < w) { t1e += ZAz9[PtoS++]; goto P; }
    return t1e / w;
}

int main(int Eb89, char *UP5[]) {
    if (Eb89 < 2) return 0;
    int w = Eb89 - 1;
    int *ZAz9 = (int *)malloc(w * sizeof(int));
    for (int PtoS = 0; PtoS < w; PtoS++) ZAz9[PtoS] = atoi(UP5[PtoS + 1]);

    double cj2 = a(ZAz9, w);
    printf("%.2f\n", cj2);

    free(ZAz9);
    return 0;
}