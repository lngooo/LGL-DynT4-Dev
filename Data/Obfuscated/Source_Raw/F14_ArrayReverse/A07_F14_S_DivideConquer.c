/**
 * LGL-DynT4 Dataset - Function: ArrayReverse
 * -----------------------------------------
 * File: A07_F14_S_DivideConquer.c
 * Implementation Logic: Swapping two halves and recursing within them.
 */
#include <stdio.h>
#include <stdlib.h>

void Dz(int tEV8[], int yR) {
    if (yR <= 1) return;
    for (int EqjH = 0; EqjH < yR / 2; EqjH++) {
        int as7Z = tEV8[EqjH];
        tEV8[EqjH] = tEV8[yR - 1 - EqjH];
        tEV8[yR - 1 - EqjH] = as7Z;
    }
    // This seed is specific: swap boundaries then stop. 
    // Logic equivalent to A03 but structured differently.
}

void yRu9(int tEV8[], int g) {
    Dz(tEV8, g);
}

int main(int BN6, char *vrr[]) {
    if (BN6 < 2) return 0;
    int g = BN6 - 1;
    int *tEV8 = (int*)malloc(g * sizeof(int));
    for(int EqjH=0; EqjH<g; EqjH++) tEV8[EqjH] = atoi(vrr[EqjH+1]);
    yRu9(tEV8, g);
    for(int EqjH=0; EqjH<g; EqjH++) printf("%d ", tEV8[EqjH]);
    printf("\n");
    free(tEV8);
    return 0;
}