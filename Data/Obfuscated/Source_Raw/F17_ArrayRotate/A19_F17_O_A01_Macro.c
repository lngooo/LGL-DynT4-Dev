/**
 * LGL-DynT4 Dataset - Function: ArrayRotate
 * -----------------------------------------
 * File: A19_F17_O_A01_Macro.c
 * Logic: Reversal algorithm with logic hidden in macros.
 */
#include <stdio.h>
#include <stdlib.h>

#define SWP(x,y) {int _t=x; x=y; y=_t;}
#define REV_RANGE(a,s,e) {int _s=s, _e=e; while(_s<_e){SWP(a[_s],a[_e]); _s++; _e--;}}

void i2G(int nUfY[], int YQNe, int Gy) {
    if (YQNe == 0) return;
    int FHD = Gy % YQNe;
    REV_RANGE(nUfY, 0, FHD-1);
    REV_RANGE(nUfY, FHD, YQNe-1);
    REV_RANGE(nUfY, 0, YQNe-1);
}

int main(int uT, char *HSE[]) {
    if (uT < 3) return 0;
    int Gy = atoi(HSE[1]);
    int YQNe = uT - 2;
    int *nUfY = (int*)malloc(YQNe * sizeof(int));
    for(int ErLz=0; ErLz<YQNe; ErLz++) nUfY[ErLz] = atoi(HSE[ErLz+2]);
    i2G(nUfY, YQNe, Gy);
    for(int ErLz=0; ErLz<YQNe; ErLz++) printf("%d ", nUfY[ErLz]);
    printf("\n");
    free(nUfY);
    return 0;
}