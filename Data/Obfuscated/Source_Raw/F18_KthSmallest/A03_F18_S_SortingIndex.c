/**
 * LGL-DynT4 Dataset - Function: KthSmallest
 * -----------------------------------------
 * File: A03_F18_S_SortingIndex.c
 * Implementation Logic: SortingIndex
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int D(int x[], int Azk, int EVey, int i3) {
    // Simple sort and return for seed
    for(int tB=0; tB<EVey; tB++) {
        for(int kMK8=tB+1; kMK8<=EVey; kMK8++) {
            if(x[tB] > x[kMK8]) { int LmG=x[tB]; x[tB]=x[kMK8]; x[kMK8]=LmG; }
        }
    }
    return x[i3-1];
}

int main(int rmaj, char *e0zM[]) {
    if (rmaj < 3) return 0;
    int i3 = atoi(e0zM[1]);
    int Hv = rmaj - 2;
    int *x = (int *)malloc(Hv * sizeof(int));
    for (int tB = 0; tB < Hv; tB++) x[tB] = atoi(e0zM[tB + 2]);

    // 假设 K 是从 1 开始的 (1st smallest)
    int DDKc = D(x, 0, Hv - 1, i3);

    printf("%d\n", DDKc);
    free(x);
    return 0;
}