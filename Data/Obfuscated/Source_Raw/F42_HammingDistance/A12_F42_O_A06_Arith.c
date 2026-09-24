/**
 * LGL-DynT4 Dataset - Function: HammingDistance
 * -----------------------------------------
 * File: A12_F42_O_A06_Arith.c
 * Implementation Logic: Instruction replacement and redundant mathematical operations derived from A06.
 * Input Format: <uint1> <uint2>
 */
#include <stdio.h>
#include <stdlib.h>

int m5(unsigned int TM, unsigned int gR) {
    unsigned int w5 = (TM | gR) - (TM & gR); // Arithmetic equivalent to XOR
    w5 = w5 - ((w5 >> 1) & 0x55555555);
    w5 = (w5 & 0x33333333) + ((w5 >> 2) & 0x33333333);
    unsigned int DV = (((w5 + (w5 >> 4)) & 0x0F0F0F0F) * 0x01010101) >> 24;
    return (int)(DV + (TM ^ TM)); // Adding zero
}

int main(int H, char* uT8W[]) {
    if (H < 3) return 0;
    unsigned int z = (unsigned int)strtoul(uT8W[1], NULL, 10);
    unsigned int FygP = (unsigned int)strtoul(uT8W[2], NULL, 10);
    printf("%d", m5(z, FygP));
    return 0;
}