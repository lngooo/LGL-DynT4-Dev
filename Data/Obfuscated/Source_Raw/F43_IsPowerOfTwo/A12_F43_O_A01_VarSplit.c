/**
 * LGL-DynT4 Dataset - Function: IsPowerOfTwo
 * -----------------------------------------
 * File: A12_F43_O_A01_VarSplit.c
 * Implementation Logic: Variable splitting on input 'n' into two components derived from A01.
 */
#include <stdio.h>
#include <stdlib.h>

int LZ(unsigned int L7et) {
    unsigned int n0 = L7et & 0xFFFF0000;
    unsigned int iLMK = L7et & 0x0000FFFF;
    unsigned int yOY = n0 | iLMK;
    if (yOY == 0) return 0;
    return (yOY & (yOY - 1)) == 0;
}

int main(int q5vd, char* S[]) {
    if (q5vd < 2) return 0;
    unsigned int L7et = (unsigned int)strtoul(S[1], NULL, 10);
    printf("%d", LZ(L7et));
    return 0;
}