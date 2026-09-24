/**
 * LGL-DynT4 Dataset - Function: ShellSort
 * -----------------------------------------
 * File: A16_F21_O_A01_StepMod.c
 * Implementation Logic: 基于 A01 修改循环步长策略 [cite: 21, 28]
 * Input Format: <int1> <int2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void izQa(int *ZW3H, int dfdr) {
    for(int s=dfdr/2;s>0;s/=2){for(int Sv3d=s;Sv3d<dfdr;Sv3d+=1){int V=ZW3H[Sv3d],S=Sv3d;while(S>=s){if(ZW3H[S-s]>V){ZW3H[S]=ZW3H[S-s];S-=s;}else break;}ZW3H[S]=V;}}
}

int main(int Hj, char *io5R[]) {
    if (Hj < 2) return 0;
    int dfdr = Hj - 1;
    int *ZW3H = (int *)malloc(dfdr * sizeof(int));
    for (int Sv3d = 0; Sv3d < dfdr; Sv3d++) ZW3H[Sv3d] = atoi(io5R[Sv3d+1]);
    izQa(ZW3H, dfdr);
    for (int Sv3d = 0; Sv3d < dfdr; Sv3d++) printf("%d%c", ZW3H[Sv3d], Sv3d == dfdr - 1 ? '\n' : ' ');
    free(ZW3H);
    return 0;
}
