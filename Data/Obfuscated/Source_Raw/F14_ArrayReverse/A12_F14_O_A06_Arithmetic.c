/**
 * LGL-DynT4 Dataset - Function: ArrayReverse
 * -----------------------------------------
 * File: A12_F14_O_A06_Arithmetic.c
 * Implementation Logic: Pointer version with complex arithmetic.
 */
#include <stdio.h>
#include <stdlib.h>

void ay(int hKI7[], int vRt) {
    int *dO9P = hKI7;
    for(int x = 0; x < (vRt >> 1); x++) {
        int *f1D = dO9P + x;
        int *Pml = dO9P + (vRt - 1 - x);
        *f1D ^= *Pml; *Pml ^= *f1D; *f1D ^= *Pml;
    }
}

int main(int y, char *tS[]) {
    if (y < 2) return 0;
    int vRt = y - 1;
    int *hKI7 = (int*)malloc(vRt * sizeof(int));
    for(int x=0; x<vRt; x++) hKI7[x] = atoi(tS[x+1]);
    ay(hKI7, vRt);
    for(int x=0; x<vRt; x++) printf("%d ", hKI7[x]);
    printf("\n");
    free(hKI7);
    return 0;
}