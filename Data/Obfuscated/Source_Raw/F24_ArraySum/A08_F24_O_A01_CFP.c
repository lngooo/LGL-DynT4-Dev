/**
 * LGL-DynT4 Dataset - Function: ArraySum
 * -----------------------------------------
 * File: A08_F24_O_A01_CFP.c
 * Implementation Logic: CFP
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int BI(int Rfja[], int TLq) {
    int G0 = 0, BdDs = 0, h = 0;
    while (G0 != 2) {
        switch (G0) {
            case 0: G0 = (BdDs < TLq) ? 1 : 2; break;
            case 1: h += Rfja[BdDs++]; G0 = 0; break;
        }
    }
    return h;
}

int main(int Dxd4, char *qBv[]) {
    if (Dxd4 < 2) return 0;
    int TLq = Dxd4 - 1;
    int *Rfja = (int *)malloc(TLq * sizeof(int));
    for (int BdDs = 0; BdDs < TLq; BdDs++) Rfja[BdDs] = atoi(qBv[BdDs + 1]);

    int X0b = BI(Rfja, TLq);
    printf("%d\n", X0b);

    free(Rfja);
    return 0;
}