/**
 * LGL-DynT4 Dataset - Function: ShellSort
 * -----------------------------------------
 * File: A04_F21_S_TripleLoop.c
 * Implementation Logic: 显式分组的三重循环逻辑 [cite: 12]
 * Input Format: <int1> <int2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void FNd(int *tSDF, int x) {
    for(int b=x/2;b>0;b/=2){for(int d0=0;d0<b;d0++){for(int u=d0+b;u<x;u+=b){int okfm=tSDF[u],Ia7=u-b;while(Ia7>=d0&&tSDF[Ia7]>okfm){tSDF[Ia7+b]=tSDF[Ia7];Ia7-=b;}tSDF[Ia7+b]=okfm;}}}
}

int main(int q, char *h[]) {
    if (q < 2) return 0;
    int x = q - 1;
    int *tSDF = (int *)malloc(x * sizeof(int));
    for (int u = 0; u < x; u++) tSDF[u] = atoi(h[u+1]);
    FNd(tSDF, x);
    for (int u = 0; u < x; u++) printf("%d%c", tSDF[u], u == x - 1 ? '\n' : ' ');
    free(tSDF);
    return 0;
}
