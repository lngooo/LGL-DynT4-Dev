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

uint32_t ByteSwap(uint32_t x) {
    uint32_t rotated = ((x << 8) & 0xFF00FF00) | ((x >> 8) & 0x00FF00FF);
    return (rotated << 16) | (rotated >> 16);
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    uint32_t val = (uint32_t)strtoul(argv[1], NULL, 10);
    printf("%u\n", ByteSwap(val));
    return 0;
}