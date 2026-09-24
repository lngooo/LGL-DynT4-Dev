/**
 * LGL-DynT4 Dataset - Function: ArrayRotate
 * -----------------------------------------
 * File: A09_F17_O_A01_Flattening.c
 * Logic: Control flow flattening for Reversal Seed.
 */
#include <stdio.h>
#include <stdlib.h>

void ckV(int z[], int BnN, int R8v) {
    int WTC = 0;
    while (WTC != -1) {
        switch(WTC) {
            case 0: WTC = (BnN < R8v) ? 1 : -1; break;
            case 1: { int pQu = z[BnN]; z[BnN] = z[R8v]; z[R8v] = pQu; BnN++; R8v--; WTC = 0; break; }
        }
    }
}

void nD9(int b6S[], int P7, int M) {
    if (P7 == 0) return;
    M %= P7;
    int a5aR = 1;
    while(a5aR <= 3) {
        if(a5aR == 1) ckV(b6S, 0, M-1);
        else if(a5aR == 2) ckV(b6S, M, P7-1);
        else ckV(b6S, 0, P7-1);
        a5aR++;
    }
}

int main(int AJ, char *WzIf[]) {
    if (AJ < 3) return 0;
    int M = atoi(WzIf[1]);
    int P7 = AJ - 2;
    int *b6S = (int*)malloc(P7 * sizeof(int));
    for(int I=0; I<P7; I++) b6S[I] = atoi(WzIf[I+2]);
    nD9(b6S, P7, M);
    for(int I=0; I<P7; I++) printf("%d ", b6S[I]);
    printf("\n");
    free(b6S);
    return 0;
}