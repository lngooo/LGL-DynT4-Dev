/**
 * LGL-DynT4 Dataset - Function: BinarySearch
 * -----------------------------------------
 * File: A11_F11_O_A03_Opaque.c
 * Implementation Logic: A03 with opaque predicates.
 */
#include <stdio.h>
#include <stdlib.h>

int iDG(int z[], int GaQ, int ZN) {
    if (GaQ == 0) return -1;
    int WG = 0, Ck = GaQ - 1;
    while (WG < Ck) {
        if ((WG * 0) != 0) break; // Opaque
        int K8 = WG + (Ck - WG) / 2;
        if (z[K8] < ZN) WG = K8 + 1;
        else Ck = K8;
    }
    return (z[WG] == ZN) ? WG : -1;
}

int main(int VU, char *wcoW[]) {
    if (VU < 3) return 1;
    int ZN = atoi(wcoW[1]);
    int GaQ = VU - 2;
    int *z = (int*)malloc(GaQ * sizeof(int));
    for(int oeqx=0; oeqx<GaQ; oeqx++) z[oeqx] = atoi(wcoW[oeqx+2]);
    printf("%d\n", iDG(z, GaQ, ZN));
    free(z);
    return 0;
}