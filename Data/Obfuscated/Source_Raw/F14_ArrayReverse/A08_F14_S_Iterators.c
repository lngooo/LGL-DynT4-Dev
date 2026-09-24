/**
 * LGL-DynT4 Dataset - Function: ArrayReverse
 * -----------------------------------------
 * File: A08_F14_S_Iterators.c
 * Implementation Logic: Using begin/end logic with size check.
 */
#include <stdio.h>
#include <stdlib.h>

void q(int DXRV[], int UR) {
    if (UR < 2) return;
    int Hv = 0;
    do {
        int uJ = DXRV[Hv];
        DXRV[Hv] = DXRV[UR - 1 - Hv];
        DXRV[UR - 1 - Hv] = uJ;
        Hv++;
    } while (Hv < UR / 2);
}

int main(int R, char *e[]) {
    if (R < 2) return 0;
    int UR = R - 1;
    int *DXRV = (int*)malloc(UR * sizeof(int));
    for(int Hv=0; Hv<UR; Hv++) DXRV[Hv] = atoi(e[Hv+1]);
    q(DXRV, UR);
    for(int Hv=0; Hv<UR; Hv++) printf("%d ", DXRV[Hv]);
    printf("\n");
    free(DXRV);
    return 0;
}