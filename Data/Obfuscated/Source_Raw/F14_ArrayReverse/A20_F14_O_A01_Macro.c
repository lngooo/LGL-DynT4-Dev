/**
 * LGL-DynT4 Dataset - Function: ArrayReverse
 * -----------------------------------------
 * File: A20_F14_O_A01_Macro.c
 * Implementation Logic: Reversal logic hidden in macros.
 */
#include <stdio.h>
#include <stdlib.h>

#define SWAP(a,b) {int t=a; a=b; b=t;}

void d4Bj(int ND[], int yx) {
    int DU = 0, Ow = yx - 1;
    while(DU < Ow) {
        SWAP(ND[DU], ND[Ow]);
        DU++; Ow--;
    }
}

int main(int mvi, char *S[]) {
    if (mvi < 2) return 0;
    int yx = mvi - 1;
    int *ND = (int*)malloc(yx * sizeof(int));
    for(int DU=0; DU<yx; DU++) ND[DU] = atoi(S[DU+1]);
    d4Bj(ND, yx);
    for(int DU=0; DU<yx; DU++) printf("%d ", ND[DU]);
    printf("\n");
    free(ND);
    return 0;
}