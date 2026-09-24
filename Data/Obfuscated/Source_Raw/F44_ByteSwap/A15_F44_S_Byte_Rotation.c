/**
 * LGL-DynT4 Dataset - Function: ByteSwap
 * -----------------------------------------
 * File: A15_F44_S_Byte_Rotation.c
 * Implementation Logic: Simulating byte swapping through composite rotation and masking.
 * Input Format: <uint32_t>
 */
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

uint32_t K(uint32_t mA9) {
    uint32_t a = ((mA9 << 8) & 0xFF00FF00) | ((mA9 >> 8) & 0x00FF00FF);
    return (a << 16) | (a >> 16);
}

int main(int DEM, char* bdg[]) {
    if (DEM < 2) return 0;
    uint32_t piv9 = (uint32_t)strtoul(bdg[1], NULL, 10);
    printf("%u\n", K(piv9));
    return 0;
}