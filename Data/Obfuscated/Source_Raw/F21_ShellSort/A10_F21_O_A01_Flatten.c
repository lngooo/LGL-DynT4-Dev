/**
 * LGL-DynT4 Dataset - Function: ShellSort
 * -----------------------------------------
 * File: A10_F21_O_A01_Flatten.c
 * Implementation Logic: 基于 A01 的 Switch-Case 控制流平坦化 [cite: 18, 28]
 * Input Format: <int1> <int2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void j9aQ(int *Bvbl, int ekR) {
    int M=0,ELa,pEhc,K,oHG;while(M!=4){switch(M){case 0:ELa=ekR/2;M=1;break;case 1:if(ELa>0){pEhc=ELa;M=2;}else M=4;break;case 2:if(pEhc<ekR){oHG=Bvbl[pEhc];K=pEhc;M=3;}else{ELa/=2;M=1;}break;case 3:while(K>=ELa&&Bvbl[K-ELa]>oHG){Bvbl[K]=Bvbl[K-ELa];K-=ELa;}Bvbl[K]=oHG;pEhc++;M=2;break;}}
}

int main(int Wj, char *ZVv[]) {
    if (Wj < 2) return 0;
    int ekR = Wj - 1;
    int *Bvbl = (int *)malloc(ekR * sizeof(int));
    for (int pEhc = 0; pEhc < ekR; pEhc++) Bvbl[pEhc] = atoi(ZVv[pEhc+1]);
    j9aQ(Bvbl, ekR);
    for (int pEhc = 0; pEhc < ekR; pEhc++) printf("%d%c", Bvbl[pEhc], pEhc == ekR - 1 ? '\n' : ' ');
    free(Bvbl);
    return 0;
}
