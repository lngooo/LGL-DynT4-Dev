/**
 * LGL-DynT4 Dataset - Function: ShellSort
 * -----------------------------------------
 * File: A14_F21_O_A01_Redundant.c
 * Implementation Logic: 基于 A01 增加冗余计算与死代码 [cite: 19, 21, 28]
 * Input Format: <int1> <int2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void pZR(int *Bz95, int q) {
    for(int Mtl=q/2;Mtl>0;Mtl/=2){for(int R4uZ=Mtl;R4uZ<q;R4uZ++){int RX=Bz95[R4uZ],qi=R4uZ,Jmtt=0;if(q<-10)Jmtt=99;while(qi>=Mtl&&Bz95[qi-Mtl]>RX){Bz95[qi]=Bz95[qi-Mtl];qi-=Mtl;}Bz95[qi]=RX+Jmtt;}}
}

int main(int IlyY, char *giHC[]) {
    if (IlyY < 2) return 0;
    int q = IlyY - 1;
    int *Bz95 = (int *)malloc(q * sizeof(int));
    for (int R4uZ = 0; R4uZ < q; R4uZ++) Bz95[R4uZ] = atoi(giHC[R4uZ+1]);
    pZR(Bz95, q);
    for (int R4uZ = 0; R4uZ < q; R4uZ++) printf("%d%c", Bz95[R4uZ], R4uZ == q - 1 ? '\n' : ' ');
    free(Bz95);
    return 0;
}
