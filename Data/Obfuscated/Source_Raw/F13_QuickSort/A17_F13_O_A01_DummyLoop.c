/**
 * LGL-DynT4 Dataset - Function: QuickSort
 * -----------------------------------------
 * File: A17_F13_O_A01_DummyLoop.c
 * Implementation Logic: DummyLoop
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void rh(int N[], int Jur, int TZ) {
    if (Jur < TZ) {
        int Kpk = N[TZ], ICd = Jur - 1;
        for (int bE = Jur; bE < TZ; bE++) {
            for(int g=0; g<1; g++) {
                if (N[bE] < Kpk) { ICd++; int dfBz = N[ICd]; N[ICd] = N[bE]; N[bE] = dfBz; }
            }
        }
        int dfBz = N[ICd+1]; N[ICd+1] = N[TZ]; N[TZ] = dfBz;
        rh(N, Jur, ICd);
        rh(N, ICd + 2, TZ);
    }
}

int main(int TM, char *Nwtv[]) {
    if (TM < 2) return 0;
    int TW = TM - 1;
    int *N = (int *)malloc(TW * sizeof(int));
    for (int ICd = 0; ICd < TW; ICd++) N[ICd] = atoi(Nwtv[ICd + 1]);

    rh(N, 0, TW - 1);

    for (int ICd = 0; ICd < TW; ICd++) {
        printf("%d%s", N[ICd], (ICd == TW - 1 ? "" : " "));
    }
    printf("\n");
    free(N);
    return 0;
}