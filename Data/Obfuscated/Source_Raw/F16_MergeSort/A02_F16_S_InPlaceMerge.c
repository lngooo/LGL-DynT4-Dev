/**
 * LGL-DynT4 Dataset - Function: MergeSort
 * -----------------------------------------
 * File: A02_F16_S_InPlaceMerge.c
 * Implementation Logic: InPlaceMerge
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void bSE(int u[], int KyuK, int Z) {
    if (KyuK < Z) {
        int gSRn = KyuK + (Z - KyuK) / 2;
        bSE(u, KyuK, gSRn);
        bSE(u, gSRn + 1, Z);
        int FGZ = gSRn + 1;
        if (u[gSRn] <= u[FGZ]) return;
        while (KyuK <= gSRn && FGZ <= Z) {
            if (u[KyuK] <= u[FGZ]) KyuK++;
            else {
                int kNt = u[FGZ];
                int BmF = FGZ;
                while (BmF != KyuK) { u[BmF] = u[BmF - 1]; BmF--; }
                u[KyuK] = kNt;
                KyuK++; gSRn++; FGZ++;
            }
        }
    }
}

int main(int I, char *sq[]) {
    if (I < 2) return 0;
    int t = I - 1;
    int *u = (int *)malloc(t * sizeof(int));
    for (int ZoNV = 0; ZoNV < t; ZoNV++) u[ZoNV] = atoi(sq[ZoNV + 1]);

    bSE(u, 0, t - 1);

    for (int ZoNV = 0; ZoNV < t; ZoNV++) {
        printf("%d%s", u[ZoNV], (ZoNV == t - 1 ? "" : " "));
    }
    printf("\n");
    free(u);
    return 0;
}