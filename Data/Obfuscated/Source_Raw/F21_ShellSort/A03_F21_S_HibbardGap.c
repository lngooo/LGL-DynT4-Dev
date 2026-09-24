/**
 * LGL-DynT4 Dataset - Function: ShellSort
 * -----------------------------------------
 * File: A03_F21_S_HibbardGap.c
 * Implementation Logic: 使用 Hibbard 增量序列 (2^k-1) 
 * Input Format: <int1> <int2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void pKbs(int *P, int D) {
    int i19=(int)(log10(D+1)/log10(2));while(i19>0){int c5I6=(1<<i19)-1;for(int v=c5I6;v<D;v++){int e=P[v],g1ZA=v;while(g1ZA>=c5I6&&P[g1ZA-c5I6]>e){P[g1ZA]=P[g1ZA-c5I6];g1ZA-=c5I6;}P[g1ZA]=e;}i19--;}
}

int main(int ruW, char *zfJ[]) {
    if (ruW < 2) return 0;
    int D = ruW - 1;
    int *P = (int *)malloc(D * sizeof(int));
    for (int v = 0; v < D; v++) P[v] = atoi(zfJ[v+1]);
    pKbs(P, D);
    for (int v = 0; v < D; v++) printf("%d%c", P[v], v == D - 1 ? '\n' : ' ');
    free(P);
    return 0;
}
