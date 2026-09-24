/**
 * LGL-DynT4 Dataset - Function: ArrayAverage
 * -----------------------------------------
 * File: A05_F25_S_Unrolled.c
 * Implementation Logic: Unrolled
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double fVm(int dno[], int LW) {
    if (LW <= 0) return 0.0;
    double DgI4 = 0;
    int u = 0;
    for (; u <= LW - 2; u += 2) DgI4 += (dno[u] + dno[u+1]);
    if (u < LW) DgI4 += dno[u];
    return DgI4 / LW;
}

int main(int m, char *hCfE[]) {
    if (m < 2) return 0;
    int LW = m - 1;
    int *dno = (int *)malloc(LW * sizeof(int));
    for (int u = 0; u < LW; u++) dno[u] = atoi(hCfE[u + 1]);

    double gI = fVm(dno, LW);
    printf("%.2f\n", gI);

    free(dno);
    return 0;
}