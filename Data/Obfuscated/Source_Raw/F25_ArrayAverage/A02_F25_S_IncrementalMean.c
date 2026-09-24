/**
 * LGL-DynT4 Dataset - Function: ArrayAverage
 * -----------------------------------------
 * File: A02_F25_S_IncrementalMean.c
 * Implementation Logic: IncrementalMean
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double Lt(int La[], int xUG) {
    if (xUG <= 0) return 0.0;
    double EN5k = 0;
    for (int PjL = 0; PjL < xUG; PjL++) {
        EN5k += (La[PjL] - EN5k) / (PjL + 1);
    }
    return EN5k;
}

int main(int Hxy, char *Pk3H[]) {
    if (Hxy < 2) return 0;
    int xUG = Hxy - 1;
    int *La = (int *)malloc(xUG * sizeof(int));
    for (int PjL = 0; PjL < xUG; PjL++) La[PjL] = atoi(Pk3H[PjL + 1]);

    double lE5y = Lt(La, xUG);
    printf("%.2f\n", lE5y);

    free(La);
    return 0;
}