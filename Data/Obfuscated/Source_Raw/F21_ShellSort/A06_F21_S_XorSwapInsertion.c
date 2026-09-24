/**
 * LGL-DynT4 Dataset - Function: ShellSort
 * -----------------------------------------
 * File: A06_F21_S_XorSwapInsertion.c
 * Implementation Logic: 利用组内异或交换模拟插入排序 [cite: 22]
 * Input Format: <int1> <int2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void QP(int *Se, int F) {
    for(int Q=F/2;Q>0;Q/=2){for(int D0=Q;D0<F;D0++){for(int mFgv=D0;mFgv>=Q&&Se[mFgv-Q]>Se[mFgv];mFgv-=Q){Se[mFgv]^=Se[mFgv-Q];Se[mFgv-Q]^=Se[mFgv];Se[mFgv]^=Se[mFgv-Q];}}}
}

int main(int LW, char *W8t[]) {
    if (LW < 2) return 0;
    int F = LW - 1;
    int *Se = (int *)malloc(F * sizeof(int));
    for (int D0 = 0; D0 < F; D0++) Se[D0] = atoi(W8t[D0+1]);
    QP(Se, F);
    for (int D0 = 0; D0 < F; D0++) printf("%d%c", Se[D0], D0 == F - 1 ? '\n' : ' ');
    free(Se);
    return 0;
}
