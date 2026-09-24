/**
 * LGL-DynT4 Dataset - Function: ArrayAverage
 * -----------------------------------------
 * File: A03_F25_S_PointerArithmetic.c
 * Implementation Logic: PointerArithmetic
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double Q(int v[], int tn) {
    if (tn <= 0) return 0.0;
    double jr = 0;
    int P = tn;
    int *wF = v;
    while (P--) jr += *wF++;
    return jr / tn;
}

int main(int K6O6, char *V[]) {
    if (K6O6 < 2) return 0;
    int tn = K6O6 - 1;
    int *v = (int *)malloc(tn * sizeof(int));
    for (int Vm = 0; Vm < tn; Vm++) v[Vm] = atoi(V[Vm + 1]);

    double Qcz = Q(v, tn);
    printf("%.2f\n", Qcz);

    free(v);
    return 0;
}