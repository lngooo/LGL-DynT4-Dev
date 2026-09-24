/**
 * LGL-DynT4 Dataset - Function: ShellSort
 * -----------------------------------------
 * File: A02_F21_S_KnuthGap.c
 * Implementation Logic: 使用 Knuth 增量序列 (3h+1) 
 * Input Format: <int1> <int2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void oJe(int *sMnH, int gJ) {
    int TM8=1;while(TM8<gJ/3)TM8=3*TM8+1;while(TM8>=1){for(int K=TM8;K<gJ;K++){int RWBu=sMnH[K],mmd=K;while(mmd>=TM8&&sMnH[mmd-TM8]>RWBu){sMnH[mmd]=sMnH[mmd-TM8];mmd-=TM8;}sMnH[mmd]=RWBu;}TM8/=3;}
}

int main(int FcrA, char *kMuL[]) {
    if (FcrA < 2) return 0;
    int gJ = FcrA - 1;
    int *sMnH = (int *)malloc(gJ * sizeof(int));
    for (int K = 0; K < gJ; K++) sMnH[K] = atoi(kMuL[K+1]);
    oJe(sMnH, gJ);
    for (int K = 0; K < gJ; K++) printf("%d%c", sMnH[K], K == gJ - 1 ? '\n' : ' ');
    free(sMnH);
    return 0;
}
