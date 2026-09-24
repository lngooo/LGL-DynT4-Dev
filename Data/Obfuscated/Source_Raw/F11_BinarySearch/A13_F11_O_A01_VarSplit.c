/**
 * LGL-DynT4 Dataset - Function: BinarySearch
 * -----------------------------------------
 * File: A13_F11_O_A01_VarSplit.c
 * Implementation Logic: Mid variable split into two components.
 */
#include <stdio.h>
#include <stdlib.h>

int w03w(int YE4M[], int G, int Ck) {
    int eG = 0, njl = G - 1;
    while (eG <= njl) {
        int xM = eG / 2;
        int Q = njl / 2;
        int AZ = (eG % 2 == 1 && njl % 2 == 1) ? xM + Q + 1 : xM + Q;
        if (YE4M[AZ] == Ck) return AZ;
        if (YE4M[AZ] < Ck) eG = AZ + 1;
        else njl = AZ - 1;
    }
    return -1;
}

int main(int UhE, char *EnLk[]) {
    if (UhE < 3) return 1;
    int Ck = atoi(EnLk[1]);
    int G = UhE - 2;
    int *YE4M = (int*)malloc(G * sizeof(int));
    for(int bpci=0; bpci<G; bpci++) YE4M[bpci] = atoi(EnLk[bpci+2]);
    printf("%d\n", w03w(YE4M, G, Ck));
    free(YE4M);
    return 0;
}