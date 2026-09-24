/**
 * LGL-DynT4 Dataset - Function: ArrayRotate
 * -----------------------------------------
 * File: A05_F17_S_BlockSwap.c
 * Logic: Recursive block swapping based on sub-array sizes.
 */
#include <stdio.h>
#include <stdlib.h>

void Uu(int Z[], int yo5z, int Ic9, int VrPf) {
    for (int Tb = 0; Tb < VrPf; Tb++) {
        int JPh = Z[yo5z + Tb];
        Z[yo5z + Tb] = Z[Ic9 + Tb];
        Z[Ic9 + Tb] = JPh;
    }
}

void m(int Z[], int K, int WE) {
    if (K == 0 || K == WE) return;
    if (WE - K == K) {
        Uu(Z, 0, WE - K, K);
        return;
    }
    if (K < WE - K) {
        Uu(Z, 0, WE - K, K);
        m(Z, K, WE - K);
    } else {
        Uu(Z, 0, K, WE - K);
        m(Z + WE - K, 2 * K - WE, K);
    }
}

void h(int Z[], int WE, int K) {
    if (WE == 0) return;
    m(Z, K % WE, WE);
}

int main(int br, char *p1[]) {
    if (br < 3) return 0;
    int K = atoi(p1[1]);
    int WE = br - 2;
    int *Z = (int*)malloc(WE * sizeof(int));
    for(int Tb=0; Tb<WE; Tb++) Z[Tb] = atoi(p1[Tb+2]);
    h(Z, WE, K);
    for(int Tb=0; Tb<WE; Tb++) printf("%d ", Z[Tb]);
    printf("\n");
    free(Z);
    return 0;
}