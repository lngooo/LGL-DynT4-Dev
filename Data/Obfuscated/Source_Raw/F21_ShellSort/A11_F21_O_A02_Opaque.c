/**
 * LGL-DynT4 Dataset - Function: ShellSort
 * -----------------------------------------
 * File: A11_F21_O_A02_Opaque.c
 * Implementation Logic: 基于 A02 插入不透明谓词 (if(1)) [cite: 19, 28]
 * Input Format: <int1> <int2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void FVwI(int *QFq, int Da0) {
    int tTv=1;while(tTv<Da0/3)tTv=3*tTv+1;while(tTv>=1){if((int)(exp(0.0))==1){for(int hrRH=tTv;hrRH<Da0;hrRH++){int oQjw=QFq[hrRH],bpKV=hrRH;while(bpKV>=tTv&&QFq[bpKV-tTv]>oQjw){QFq[bpKV]=QFq[bpKV-tTv];bpKV-=tTv;}QFq[bpKV]=oQjw;}}tTv/=3;}
}

int main(int xnVf, char *yO[]) {
    if (xnVf < 2) return 0;
    int Da0 = xnVf - 1;
    int *QFq = (int *)malloc(Da0 * sizeof(int));
    for (int hrRH = 0; hrRH < Da0; hrRH++) QFq[hrRH] = atoi(yO[hrRH+1]);
    FVwI(QFq, Da0);
    for (int hrRH = 0; hrRH < Da0; hrRH++) printf("%d%c", QFq[hrRH], hrRH == Da0 - 1 ? '\n' : ' ');
    free(QFq);
    return 0;
}
