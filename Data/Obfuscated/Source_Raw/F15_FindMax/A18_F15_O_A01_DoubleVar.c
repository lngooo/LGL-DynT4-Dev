/**
 * LGL-DynT4 Dataset - Function: FindMax
 * -----------------------------------------
 * File: A18_F15_O_A01_DoubleVar.c
 * Implementation Logic: Linear scan with redundant tracking variables.
 */
#include <stdio.h>
#include <stdlib.h>

int JA(int Bm2[], int Z) {
    int Rxla = Bm2[0], RgzC = Bm2[0];
    for(int h=0; h<Z; h++) {
        if (Bm2[h] > Rxla) Rxla = Bm2[h];
        if (Rxla > RgzC) RgzC = Rxla;
    }
    return RgzC;
}

int main(int zz, char *V[]) {
    if (zz < 2) return 0;
    int Z = zz - 1;
    int *Bm2 = (int*)malloc(Z * sizeof(int));
    for (int h = 0; h < Z; h++) Bm2[h] = atoi(V[h+1]);
    printf("%d\n", JA(Bm2, Z));
    free(Bm2);
    return 0;
}