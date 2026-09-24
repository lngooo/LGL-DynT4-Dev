/**
 * LGL-DynT4 Dataset - Function: ArrayRotate
 * -----------------------------------------
 * File: A12_F17_O_A01_Arithmetic.c
 * Logic: Reversal with XOR swapping and pointer arithmetic.
 */
#include <stdio.h>
#include <stdlib.h>

void a8BP(int *u, int *ArhR) {
    while(u < ArhR) {
        *u ^= *ArhR; *ArhR ^= *u; *u ^= *ArhR;
        u++; ArhR--;
    }
}

void FxHW(int U[], int dr, int ICua) {
    if (dr == 0) return;
    ICua %= dr;
    a8BP(U, U + ICua - 1);
    a8BP(U + ICua, U + dr - 1);
    a8BP(U, U + dr - 1);
}

int main(int mvf4, char *V[]) {
    if (mvf4 < 3) return 0;
    int ICua = atoi(V[1]);
    int dr = mvf4 - 2;
    int *U = (int*)malloc(dr * sizeof(int));
    for(int SB=0; SB<dr; SB++) U[SB] = atoi(V[SB+2]);
    FxHW(U, dr, ICua);
    for(int SB=0; SB<dr; SB++) printf("%d ", U[SB]);
    printf("\n");
    free(U);
    return 0;
}