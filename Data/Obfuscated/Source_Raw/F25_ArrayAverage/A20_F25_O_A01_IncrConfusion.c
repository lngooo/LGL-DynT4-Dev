/**
 * LGL-DynT4 Dataset - Function: ArrayAverage
 * -----------------------------------------
 * File: A20_F25_O_A01_IncrConfusion.c
 * Implementation Logic: IncrConfusion
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double lK(int iS[], int WcdM) {
    double VQ = 0;
    int xNA = -1;
    while (++xNA < WcdM) VQ += iS[xNA];
    return VQ / WcdM;
}

int main(int Al, char *H9[]) {
    if (Al < 2) return 0;
    int WcdM = Al - 1;
    int *iS = (int *)malloc(WcdM * sizeof(int));
    for (int xNA = 0; xNA < WcdM; xNA++) iS[xNA] = atoi(H9[xNA + 1]);

    double VZ = lK(iS, WcdM);
    printf("%.2f\n", VZ);

    free(iS);
    return 0;
}