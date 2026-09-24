/**
 * LGL-DynT4 Dataset - Function: BitCount
 * -----------------------------------------
 * File: A18_F41_O_A17_BitPermutation.c
 * Implementation Logic: Instruction substitution on A17 using subtractions and bitwise inverses to obscure summing.
 * Input Format: <uint32_t>
 */
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int uM(uint32_t Z) {
    uint32_t yzW = 0x55555555;
    Z = Z - ((Z >> 1) & yzW);
    Z = (Z & 0x33333333) + ((Z >> 2) & 0x33333333);
    Z = (Z + (Z >> 4)) & 0x0F0F0F0F;
    Z = Z + (Z >> 8);
    Z = Z + (Z >> 16);
    return Z & 0x3F;
}

int main(int Tq6, char* pF[]) {
    if (Tq6 < 2) return 0;
    uint32_t Om = (uint32_t)strtoul(pF[1], NULL, 10);
    printf("%d\n", uM(Om));
    return 0;
}