/**
 * LGL-DynT4 Dataset - Function: ByteSwap
 * -----------------------------------------
 * File: A13_F44_S_XOR_Swap.c
 * Implementation Logic: In-place byte swapping using the XOR algorithm on memory locations.
 * Input Format: <uint32_t>
 */
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

uint32_t ByteSwap(uint32_t x) {
    uint8_t *p = (uint8_t *)&x;
    p[0] ^= p[3]; p[3] ^= p[0]; p[0] ^= p[3];
    p[1] ^= p[2]; p[2] ^= p[1]; p[1] ^= p[2];
    return x;
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    uint32_t val = (uint32_t)strtoul(argv[1], NULL, 10);
    printf("%u\n", ByteSwap(val));
    return 0;
}