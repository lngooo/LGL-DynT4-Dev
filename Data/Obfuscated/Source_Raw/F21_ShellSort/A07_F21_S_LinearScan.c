/**
 * LGL-DynT4 Dataset - Function: ShellSort
 * -----------------------------------------
 * File: A07_F21_S_LinearScan.c
 * Implementation Logic: 在每个间隔组内执行线性查找定位 [cite: 12]
 * Input Format: <int1> <int2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void Pj2G(int *xy, int NGmX) {
    for(int merB=NGmX/2;merB>0;merB/=2){for(int Rt=merB;Rt<NGmX;Rt++){int j=xy[Rt],gVhp=Rt;while(gVhp>=merB&&xy[gVhp-merB]>j)gVhp-=merB;for(int D=Rt;D>gVhp;D-=merB)xy[D]=xy[D-merB];xy[gVhp]=j;}}
}

int main(int rb, char *QHCw[]) {
    if (rb < 2) return 0;
    int NGmX = rb - 1;
    int *xy = (int *)malloc(NGmX * sizeof(int));
    for (int Rt = 0; Rt < NGmX; Rt++) xy[Rt] = atoi(QHCw[Rt+1]);
    Pj2G(xy, NGmX);
    for (int Rt = 0; Rt < NGmX; Rt++) printf("%d%c", xy[Rt], Rt == NGmX - 1 ? '\n' : ' ');
    free(xy);
    return 0;
}
