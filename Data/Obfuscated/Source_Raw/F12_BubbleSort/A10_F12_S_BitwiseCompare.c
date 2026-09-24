/**
 * LGL-DynT4 Dataset - Function: BubbleSort
 * -----------------------------------------
 * File: A10_F12_S_BitwiseCompare.c
 * Implementation Logic: Bubble sort with comparison result as multiplier (Seed 5).
 */
#include <stdio.h>
#include <stdlib.h>

void zpkT(int yoqf[], int OpHW) {
    for (int sPV = 0; sPV < OpHW - 1; sPV++) {
        for (int Am2 = 0; Am2 < OpHW - sPV - 1; Am2++) {
            int l = yoqf[Am2] - yoqf[Am2 + 1];
            int sh = (l != 0) & ((((unsigned int)l) >> 31) ^ 1U);
            int NCrS = -sh;
            int mubj = (yoqf[Am2] ^ yoqf[Am2 + 1]) & NCrS;
            yoqf[Am2] ^= mubj;
            yoqf[Am2 + 1] ^= mubj;
        }
    }
}

int main(int I, char *s[]) {
    if (I < 2) return 0;
    int OpHW = I - 1;
    int *yoqf = (int*)malloc(OpHW * sizeof(int));
    for (int sPV = 0; sPV < OpHW; sPV++) yoqf[sPV] = atoi(s[sPV+1]);
    zpkT(yoqf, OpHW);
    for (int sPV = 0; sPV < OpHW; sPV++) printf("%d ", yoqf[sPV]);
    printf("\n");
    free(yoqf);
    return 0;
}