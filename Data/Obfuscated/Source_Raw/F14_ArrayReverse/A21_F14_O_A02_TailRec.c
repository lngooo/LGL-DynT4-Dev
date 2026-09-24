/**
 * LGL-DynT4 Dataset - Function: ArrayReverse
 * -----------------------------------------
 * File: A21_F14_O_A02_TailRec.c
 * Implementation Logic: Tail-recursive optimization variation.
 */
#include <stdio.h>
#include <stdlib.h>

void r(int h2[], int DAkW, int o4s) {
    while(DAkW < o4s) {
        int YY = h2[DAkW]; h2[DAkW] = h2[o4s]; h2[o4s] = YY;
        DAkW++; o4s--;
    }
}

void KJ(int fA[], int nLE1) {
    if(nLE1 > 1) r(fA, 0, nLE1 - 1);
}

int main(int raUB, char *pu[]) {
    if (raUB < 2) return 0;
    int nLE1 = raUB - 1;
    int *fA = (int*)malloc(nLE1 * sizeof(int));
    for(int Lo57=0; Lo57<nLE1; Lo57++) fA[Lo57] = atoi(pu[Lo57+1]);
    KJ(fA, nLE1);
    for(int Lo57=0; Lo57<nLE1; Lo57++) printf("%d ", fA[Lo57]);
    printf("\n");
    free(fA);
    return 0;
}