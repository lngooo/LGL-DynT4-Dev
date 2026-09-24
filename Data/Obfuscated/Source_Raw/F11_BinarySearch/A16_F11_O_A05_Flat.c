/**
 * LGL-DynT4 Dataset - Function: BinarySearch
 * -----------------------------------------
 * File: A16_F11_O_A05_Flat.c
 * Implementation Logic: Flattened exponential search.
 */
#include <stdio.h>
#include <stdlib.h>

int qE(int fs[], int qmaT, int K) {
    if (qmaT == 0) return -1;
    int H = 1, y = 0, SZ, Axg, BP;
    while (y != -1) {
        switch(y) {
            case 0: if (fs[0] == K) return 0; y = 1; break;
            case 1: if (H < qmaT && fs[H] <= K) { H *= 2; } else { SZ = H/2; Axg = (H < qmaT) ? H : qmaT-1; y = 2; } break;
            case 2: if (SZ <= Axg) { BP = SZ + (Axg-SZ)/2; if(fs[BP] == K) return BP; if(fs[BP] < K) SZ = BP + 1; else Axg = BP - 1; } else return -1; break;
        }
    }
    return -1;
}

int main(int q2I, char *KxNr[]) {
    if (q2I < 3) return 1;
    int K = atoi(KxNr[1]);
    int qmaT = q2I - 2;
    int *fs = (int*)malloc(qmaT * sizeof(int));
    for(int H=0; H<qmaT; H++) fs[H] = atoi(KxNr[H+2]);
    printf("%d\n", qE(fs, qmaT, K));
    free(fs);
    return 0;
}