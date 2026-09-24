/**
 * LGL-DynT4 Dataset - Function: KthSmallest
 * -----------------------------------------
 * File: A01_F18_S_QuickSelectRecursive.c
 * Implementation Logic: QuickSelectRecursive
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int aXt(int wYz[], int LWPa, int PGW8, int zo) {
    if (zo > 0 && zo <= PGW8 - LWPa + 1) {
        int UV = wYz[PGW8], Eo = LWPa;
        for (int U0Dv = LWPa; U0Dv < PGW8; U0Dv++) {
            if (wYz[U0Dv] <= UV) {
                int u = wYz[Eo]; wYz[Eo] = wYz[U0Dv]; wYz[U0Dv] = u;
                Eo++;
            }
        }
        int u = wYz[Eo]; wYz[Eo] = wYz[PGW8]; wYz[PGW8] = u;
        int BX = Eo;
        if (BX - LWPa == zo - 1) return wYz[BX];
        if (BX - LWPa > zo - 1) return aXt(wYz, LWPa, BX - 1, zo);
        return aXt(wYz, BX + 1, PGW8, zo - BX + LWPa - 1);
    }
    return -1;
}

int main(int nCC2, char *x[]) {
    if (nCC2 < 3) return 0;
    int zo = atoi(x[1]);
    int K3 = nCC2 - 2;
    int *wYz = (int *)malloc(K3 * sizeof(int));
    for (int Eo = 0; Eo < K3; Eo++) wYz[Eo] = atoi(x[Eo + 2]);

    // 假设 K 是从 1 开始的 (1st smallest)
    int t8 = aXt(wYz, 0, K3 - 1, zo);

    printf("%d\n", t8);
    free(wYz);
    return 0;
}