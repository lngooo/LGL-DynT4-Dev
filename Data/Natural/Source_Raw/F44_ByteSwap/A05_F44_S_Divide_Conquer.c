/**
 * LGL-DynT4 Dataset - Function: ByteSwap
 * -----------------------------------------
 * File: A05_F44_S_Divide_Conquer.c
 * Implementation Logic: Divide and conquer algorithm swapping 16-bit blocks then 8-bit blocks.
 * Input Format: <uint32_t>
 */
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

uint32_t ByteSwap(uint32_t x) {
    x = ((x << 16) & 0xFFFF0000) | ((x >> 16) & 0x0000FFFF);
    x = ((x << 8) & 0xFF00FF00) | ((x >> 8) & 0x00FF00FF);
    return x;
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    uint32_t val = (uint32_t)strtoul(argv[1], NULL, 10);
    printf("%u\n", ByteSwap(val));
    return 0;
}