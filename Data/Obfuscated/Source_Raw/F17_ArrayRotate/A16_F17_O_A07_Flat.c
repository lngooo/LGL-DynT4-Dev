/**
 * LGL-DynT4 Dataset - Function: ArrayRotate
 * -----------------------------------------
 * File: A16_F17_O_A07_Flat.c
 * Logic: Cyclic rotation with flattened state machine.
 */
#include <stdio.h>
#include <stdlib.h>

void NtA(int kgD[], int F, int aO) {
    if (F <= 1) return;
    aO %= F; if(aO==0) return;
    int So = 0, NnpE = 0, ZVy = 0, zl, x;
    while(So < F) {
        switch(ZVy) {
            case 0: zl = NnpE; x = kgD[NnpE]; ZVy = 1; break;
            case 1: {
                int e = (zl - aO + F) % F;
                int bJh = kgD[e]; kgD[e] = x; x = bJh; zl = e; So++;
                if(zl == NnpE) { NnpE++; ZVy = 0; } else ZVy = 1;
                break;
            }
        }
    }
}

int main(int sC, char *OL[]) {
    if (sC < 3) return 0;
    int aO = atoi(OL[1]);
    int F = sC - 2;
    int *kgD = (int*)malloc(F * sizeof(int));
    for(int cbm=0; cbm<F; cbm++) kgD[cbm] = atoi(OL[cbm+2]);
    NtA(kgD, F, aO);
    for(int cbm=0; cbm<F; cbm++) printf("%d ", kgD[cbm]);
    printf("\n");
    free(kgD);
    return 0;
}