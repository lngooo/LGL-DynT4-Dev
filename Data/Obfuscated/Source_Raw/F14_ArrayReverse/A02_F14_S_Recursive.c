/**
 * LGL-DynT4 Dataset - Function: ArrayReverse
 * -----------------------------------------
 * File: A02_F14_S_Recursive.c
 * Implementation Logic: Recursive reversal by swapping boundaries.
 */
#include <stdio.h>
#include <stdlib.h>

void D5YS(int NlDG[], int J0Cy, int olB) {
    if (J0Cy >= olB) return;
    int K = NlDG[J0Cy]; NlDG[J0Cy] = NlDG[olB]; NlDG[olB] = K;
    D5YS(NlDG, J0Cy + 1, olB - 1);
}

void UpTG(int NlDG[], int A7I) {
    if (A7I > 1) D5YS(NlDG, 0, A7I - 1);
}

int main(int ccK, char *TxhL[]) {
    if (ccK < 2) return 0;
    int A7I = ccK - 1;
    int *NlDG = (int*)malloc(A7I * sizeof(int));
    for(int SfjU=0; SfjU<A7I; SfjU++) NlDG[SfjU] = atoi(TxhL[SfjU+1]);
    UpTG(NlDG, A7I);
    for(int SfjU=0; SfjU<A7I; SfjU++) printf("%d ", NlDG[SfjU]);
    printf("\n");
    free(NlDG);
    return 0;
}