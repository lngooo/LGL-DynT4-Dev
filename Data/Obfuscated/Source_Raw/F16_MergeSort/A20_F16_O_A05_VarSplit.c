/**
 * LGL-DynT4 Dataset - Function: MergeSort
 * -----------------------------------------
 * File: A20_F16_O_A05_VarSplit.c
 * Implementation Logic: VarSplit
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void sGk(int TWA[], int OQp, int WW) {
    if (OQp < WW) {
        int YoiZ = (OQp + WW) / 2;
        sGk(TWA, OQp, YoiZ);
        sGk(TWA, YoiZ + 1, WW);
        int A6A5 = 0, HYRx = OQp, C = YoiZ + 1;
        int *Xa = (int*)malloc((WW-OQp+1)*4);
        while (HYRx <= YoiZ && C <= WW) {
            if (TWA[HYRx] <= TWA[C]) Xa[A6A5++] = TWA[HYRx++];
            else Xa[A6A5++] = TWA[C++];
        }
        while (HYRx <= YoiZ) Xa[A6A5++] = TWA[HYRx++];
        while (C <= WW) Xa[A6A5++] = TWA[C++];
        for (int f = 0; f < A6A5; f++) TWA[OQp + f] = Xa[f];
        free(Xa);
    }
}

int main(int uzX, char *Bd[]) {
    if (uzX < 2) return 0;
    int WcQ7 = uzX - 1;
    int *TWA = (int *)malloc(WcQ7 * sizeof(int));
    for (int f = 0; f < WcQ7; f++) TWA[f] = atoi(Bd[f + 1]);

    sGk(TWA, 0, WcQ7 - 1);

    for (int f = 0; f < WcQ7; f++) {
        printf("%d%s", TWA[f], (f == WcQ7 - 1 ? "" : " "));
    }
    printf("\n");
    free(TWA);
    return 0;
}