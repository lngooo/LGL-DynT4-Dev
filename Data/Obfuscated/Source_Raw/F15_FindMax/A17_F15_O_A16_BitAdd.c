/**
 * LGL-DynT4 Dataset - Function: FindMax
 * -----------------------------------------
 * File: A17_F15_O_A16_BitAdd.c
 * Implementation Logic: Backwards scan with bitwise index decrement.
 */
#include <stdio.h>
#include <stdlib.h>

int xSLl(int R9gl, int yBn) {
    while (yBn != 0) { int Ah = (~R9gl) & yBn; R9gl = R9gl ^ yBn; yBn = Ah << 1; }
    return R9gl;
}

int hDh(int FW[], int TsJ) {
    int f = FW[xSLl(TsJ, 1)];
    for(int Fhy = xSLl(TsJ, 2); Fhy >= 0; Fhy = xSLl(Fhy, 1)) {
        if (FW[Fhy] > f) f = FW[Fhy];
    }
    return f;
}

int main(int DMV, char *R1C[]) {
    if (DMV < 2) return 0;
    int TsJ = DMV - 1;
    int *FW = (int*)malloc(TsJ * sizeof(int));
    for (int Fhy = 0; Fhy < TsJ; Fhy++) FW[Fhy] = atoi(R1C[Fhy+1]);
    printf("%d\n", hDh(FW, TsJ));
    free(FW);
    return 0;
}