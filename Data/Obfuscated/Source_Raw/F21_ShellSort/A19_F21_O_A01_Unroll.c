/**
 * LGL-DynT4 Dataset - Function: ShellSort
 * -----------------------------------------
 * File: A19_F21_O_A01_Unroll.c
 * Implementation Logic: 基于 A01 实施部分循环展开 [cite: 21, 28]
 * Input Format: <int1> <int2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void cPP(int *c66w, int D4) {
    for(int rakw=D4/2;rakw>0;rakw/=2){for(int w5=rakw;w5<D4;w5++){int GelP=c66w[w5],wP=w5;while(wP>=rakw){if(c66w[wP-rakw]>GelP){c66w[wP]=c66w[wP-rakw];wP-=rakw;}else break;if(wP>=rakw&&c66w[wP-rakw]>GelP){c66w[wP]=c66w[wP-rakw];wP-=rakw;}else break;}c66w[wP]=GelP;}}
}

int main(int DT2, char *rY[]) {
    if (DT2 < 2) return 0;
    int D4 = DT2 - 1;
    int *c66w = (int *)malloc(D4 * sizeof(int));
    for (int w5 = 0; w5 < D4; w5++) c66w[w5] = atoi(rY[w5+1]);
    cPP(c66w, D4);
    for (int w5 = 0; w5 < D4; w5++) printf("%d%c", c66w[w5], w5 == D4 - 1 ? '\n' : ' ');
    free(c66w);
    return 0;
}
