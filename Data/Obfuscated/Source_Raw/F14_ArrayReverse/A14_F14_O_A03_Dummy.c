/**
 * LGL-DynT4 Dataset - Function: ArrayReverse
 * -----------------------------------------
 * File: A14_F14_O_A03_Dummy.c
 * Implementation Logic: Midpoint swap with junk loops.
 */
#include <stdio.h>
#include <stdlib.h>

void FP(int E[], int p) {
    for (int al = 0; al < p / 2; al++) {
        for(int t=0; t<1; t++) {
            int D = E[al];
            E[al] = E[p - 1 - al];
            E[p - 1 - al] = D;
        }
    }
}

int main(int Le, char *h[]) {
    if (Le < 2) return 0;
    int p = Le - 1;
    int *E = (int*)malloc(p * sizeof(int));
    for(int al=0; al<p; al++) E[al] = atoi(h[al+1]);
    FP(E, p);
    for(int al=0; al<p; al++) printf("%d ", E[al]);
    printf("\n");
    free(E);
    return 0;
}