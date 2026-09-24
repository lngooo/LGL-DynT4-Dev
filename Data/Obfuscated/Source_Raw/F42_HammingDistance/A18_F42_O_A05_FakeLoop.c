/**
 * LGL-DynT4 Dataset - Function: HammingDistance
 * -----------------------------------------
 * File: A18_F42_O_A05_FakeLoop.c
 * Implementation Logic: Wrapping recursive logic in a fake single-iteration loop derived from A05.
 * Input Format: <uint1> <uint2>
 */
#include <stdio.h>
#include <stdlib.h>

int J(unsigned int A3p, unsigned int j) {
    for(int Yx6a = 0; Yx6a < 1; Yx6a++) {
        if (A3p == 0 && j == 0) return 0;
        return ((A3p & 1) != (j & 1)) + J(A3p >> 1, j >> 1);
    }
    return -1;
}

int main(int cR, char* UyW[]) {
    if (cR < 3) return 0;
    unsigned int gL43 = (unsigned int)strtoul(UyW[1], NULL, 10);
    unsigned int Pnb = (unsigned int)strtoul(UyW[2], NULL, 10);
    printf("%d", J(gL43, Pnb));
    return 0;
}