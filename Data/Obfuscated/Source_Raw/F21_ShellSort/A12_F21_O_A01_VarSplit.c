/**
 * LGL-DynT4 Dataset - Function: ShellSort
 * -----------------------------------------
 * File: A12_F21_O_A01_VarSplit.c
 * Implementation Logic: 基于 A01 进行变量拆分混淆 (g=x+y) [cite: 21, 28]
 * Input Format: <int1> <int2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void r(int *Hlq6, int vzL) {
    int rtmc=vzL/4,NhB=vzL/4;for(int K9YY=rtmc+NhB+vzL%2/2;K9YY>0;K9YY/=2){for(int sha=K9YY;sha<vzL;sha++){int RjDR=Hlq6[sha]%10,H9=Hlq6[sha]/10,NJQ=sha;while(NJQ>=K9YY&&Hlq6[NJQ-K9YY]>(H9*10+RjDR)){Hlq6[NJQ]=Hlq6[NJQ-K9YY];NJQ-=K9YY;}Hlq6[NJQ]=(H9*10+RjDR);}}
}

int main(int tF, char *eZs[]) {
    if (tF < 2) return 0;
    int vzL = tF - 1;
    int *Hlq6 = (int *)malloc(vzL * sizeof(int));
    for (int sha = 0; sha < vzL; sha++) Hlq6[sha] = atoi(eZs[sha+1]);
    r(Hlq6, vzL);
    for (int sha = 0; sha < vzL; sha++) printf("%d%c", Hlq6[sha], sha == vzL - 1 ? '\n' : ' ');
    free(Hlq6);
    return 0;
}
