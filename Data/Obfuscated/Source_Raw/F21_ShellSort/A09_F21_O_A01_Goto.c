/**
 * LGL-DynT4 Dataset - Function: ShellSort
 * -----------------------------------------
 * File: A09_F21_O_A01_Goto.c
 * Implementation Logic: 基于 A01 的 Goto 标签链重构 [cite: 20, 28]
 * Input Format: <int1> <int2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void K(int *peI, int r) {
    int NS=r/2;zzgo:if(NS<=0)goto Fnk;int wO=NS;TMs:if(wO>=r){NS/=2;goto zzgo;}int G6=peI[wO],Vt26=wO;ku:if(Vt26>=NS&&peI[Vt26-NS]>G6){peI[Vt26]=peI[Vt26-NS];Vt26-=NS;goto ku;}peI[Vt26]=G6;wO++;goto TMs;Fnk:;
}

int main(int k, char *v5[]) {
    if (k < 2) return 0;
    int r = k - 1;
    int *peI = (int *)malloc(r * sizeof(int));
    for (int wO = 0; wO < r; wO++) peI[wO] = atoi(v5[wO+1]);
    K(peI, r);
    for (int wO = 0; wO < r; wO++) printf("%d%c", peI[wO], wO == r - 1 ? '\n' : ' ');
    free(peI);
    return 0;
}
