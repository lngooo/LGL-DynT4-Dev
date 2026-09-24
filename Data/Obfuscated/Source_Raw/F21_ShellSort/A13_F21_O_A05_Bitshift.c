/**
 * LGL-DynT4 Dataset - Function: ShellSort
 * -----------------------------------------
 * File: A13_F21_O_A05_Bitshift.c
 * Implementation Logic: 基于 A05 使用位移代替乘除指令 [cite: 22, 28]
 * Input Format: <int1> <int2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void D(int *Lhd, int taBw) {
    for(int d=taBw>>1;d>0;d>>=1){for(int *iw4=Lhd+d;iw4<Lhd+taBw;iw4++){int Y2G=*iw4,*fT=iw4;while(fT>=Lhd+d&&*(fT-d)>Y2G){*fT=*(fT-d);fT-=d;}*fT=Y2G;}}
}

int main(int jUm, char *L6fs[]) {
    if (jUm < 2) return 0;
    int taBw = jUm - 1;
    int *Lhd = (int *)malloc(taBw * sizeof(int));
    for (int cE = 0; cE < taBw; cE++) Lhd[cE] = atoi(L6fs[cE+1]);
    D(Lhd, taBw);
    for (int cE = 0; cE < taBw; cE++) printf("%d%c", Lhd[cE], cE == taBw - 1 ? '\n' : ' ');
    free(Lhd);
    return 0;
}
