/**
 * LGL-DynT4 Dataset - Function: ArrayRotate
 * -----------------------------------------
 * File: A21_F17_O_A01_Recursion.c
 * Logic: Reversal seed with recursive reverse function.
 */
#include <stdio.h>
#include <stdlib.h>

void AxZF(int ryb[], int Co, int Pew) {
    if(Co >= Pew) return;
    int Y = ryb[Co]; ryb[Co] = ryb[Pew]; ryb[Pew] = Y;
    AxZF(ryb, Co+1, Pew-1);
}

void ogh(int x[], int I, int vm) {
    if (I == 0) return;
    vm %= I;
    AxZF(x, 0, vm-1);
    AxZF(x, vm, I-1);
    AxZF(x, 0, I-1);
}

int main(int qtV, char *mTM[]) {
    if (qtV < 3) return 0;
    int vm = atoi(mTM[1]);
    int I = qtV - 2;
    int *x = (int*)malloc(I * sizeof(int));
    for(int WT=0; WT<I; WT++) x[WT] = atoi(mTM[WT+2]);
    ogh(x, I, vm);
    for(int WT=0; WT<I; WT++) printf("%d ", x[WT]);
    printf("\n");
    free(x);
    return 0;
}