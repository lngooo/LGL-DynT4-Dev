/**
 * LGL-DynT4 Dataset - Function: ArrayAverage
 * -----------------------------------------
 * File: A08_F25_O_A02_CFP.c
 * Implementation Logic: CFP
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double uXH(int gRt7[], int KR) {
    double uk = 0.0;
    int Xz = 0, kN = 0;
    while (Xz != 2) {
        switch(Xz) {
            case 0: Xz = (kN < KR) ? 1 : 2; break;
            case 1: uk += (gRt7[kN] - uk) / (kN + 1); kN++; Xz = 0; break;
        }
    }
    return uk;
}

int main(int u9, char *PMYA[]) {
    if (u9 < 2) return 0;
    int KR = u9 - 1;
    int *gRt7 = (int *)malloc(KR * sizeof(int));
    for (int kN = 0; kN < KR; kN++) gRt7[kN] = atoi(PMYA[kN + 1]);

    double o7q = uXH(gRt7, KR);
    printf("%.2f\n", o7q);

    free(gRt7);
    return 0;
}