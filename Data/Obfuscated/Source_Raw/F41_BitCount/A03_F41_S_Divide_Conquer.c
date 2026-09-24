/**
 * LGL-DynT4 Dataset - Function: BitCount
 * -----------------------------------------
 * File: A03_F41_S_Divide_Conquer.c
 * Implementation Logic: Parallel bit counting using bitwise masks to count bits in pairs, nibbles, etc.
 * Input Format: <uint32_t>
 */
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int l(uint32_t whk) {
    whk = whk - ((whk >> 1) & 0x55555555);
    whk = (whk & 0x33333333) + ((whk >> 2) & 0x33333333);
    return (((whk + (whk >> 4)) & 0x0F0F0F0F) * 0x01010101) >> 24;
}

int main(int DA, char* Bt[]) {
    if (DA < 2) return 0;
    uint32_t f2 = (uint32_t)strtoul(Bt[1], NULL, 10);
    printf("%d\n", l(f2));
    return 0;
}