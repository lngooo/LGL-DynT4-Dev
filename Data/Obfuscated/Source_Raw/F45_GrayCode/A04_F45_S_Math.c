/**
 * LGL-DynT4 Dataset - Function: GrayCode
 * -----------------------------------------
 * File: A04_F45_S_Math.c
 * Implementation Logic: Using mathematical identity (a|b)-(a&b) to simulate XOR operation.
 * Input Format: <uint>
 */
#include <stdio.h>
#include <stdlib.h>

unsigned int k(unsigned int VU) {
    unsigned int R8Vj = VU >> 1;
    return (VU | R8Vj) - (VU & R8Vj);
}

int main(int w, char* a4n[]) {
    if (w < 2) return 0;
    unsigned int VU = (unsigned int)strtoul(a4n[1], NULL, 10);
    printf("%u", k(VU));
    return 0;
}