/**
 * LGL-DynT4 Dataset - Function: ArrayReverse
 * -----------------------------------------
 * File: A18_F14_O_A01_WhileTrue.c
 * Implementation Logic: Infinite loop with break.
 */
#include <stdio.h>
#include <stdlib.h>

void WIG(int DX[], int rd) {
    int hY = 0, R2 = rd - 1;
    while(1) {
        if(!(hY < R2)) break;
        int FlkQ = DX[hY]; DX[hY] = DX[R2]; DX[R2] = FlkQ;
        hY++; R2--;
    }
}

int main(int d, char *snB[]) {
    if (d < 2) return 0;
    int rd = d - 1;
    int *DX = (int*)malloc(rd * sizeof(int));
    for(int vNZ=0; vNZ<rd; vNZ++) DX[vNZ] = atoi(snB[vNZ+1]);
    WIG(DX, rd);
    for(int vNZ=0; vNZ<rd; vNZ++) printf("%d ", DX[vNZ]);
    printf("\n");
    free(DX);
    return 0;
}