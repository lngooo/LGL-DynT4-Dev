/**
 * LGL-DynT4 Dataset - Function: ArraySum
 * -----------------------------------------
 * File: A18_F24_O_A05_VarSplit.c
 * Implementation Logic: VarSplit
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int V(int JG3m[], int Dx) {
    int lE = 0, ui = 0;
    for (int e5b = 0; e5b < Dx; e5b++) {
        if (e5b % 2 == 0) lE += JG3m[e5b];
        else ui += JG3m[e5b];
    }
    return lE + ui;
}

int main(int KD, char *pRMC[]) {
    if (KD < 2) return 0;
    int Dx = KD - 1;
    int *JG3m = (int *)malloc(Dx * sizeof(int));
    for (int e5b = 0; e5b < Dx; e5b++) JG3m[e5b] = atoi(pRMC[e5b + 1]);

    int Yl = V(JG3m, Dx);
    printf("%d\n", Yl);

    free(JG3m);
    return 0;
}