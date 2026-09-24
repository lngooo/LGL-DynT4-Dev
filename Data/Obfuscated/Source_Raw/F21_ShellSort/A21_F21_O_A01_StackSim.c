/**
 * LGL-DynT4 Dataset - Function: ShellSort
 * -----------------------------------------
 * File: A21_F21_O_A01_StackSim.c
 * Implementation Logic: 基于 A01 使用局部数组模拟增量栈 [cite: 18, 28]
 * Input Format: <int1> <int2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void uWoX(int *g5, int U5) {
    int WA7e[32],N=-1,hc2=U5/2;while(hc2>0){WA7e[++N]=hc2;hc2/=2;}while(N>=0){int C=WA7e[N--];for(int MO1=C;MO1<U5;MO1++){int l=g5[MO1],gSC=MO1;while(gSC>=C&&g5[gSC-C]>l){g5[gSC]=g5[gSC-C];gSC-=C;}g5[gSC]=l;}}
}

int main(int iOKJ, char *mq[]) {
    if (iOKJ < 2) return 0;
    int U5 = iOKJ - 1;
    int *g5 = (int *)malloc(U5 * sizeof(int));
    for (int MO1 = 0; MO1 < U5; MO1++) g5[MO1] = atoi(mq[MO1+1]);
    uWoX(g5, U5);
    for (int MO1 = 0; MO1 < U5; MO1++) printf("%d%c", g5[MO1], MO1 == U5 - 1 ? '\n' : ' ');
    free(g5);
    return 0;
}
