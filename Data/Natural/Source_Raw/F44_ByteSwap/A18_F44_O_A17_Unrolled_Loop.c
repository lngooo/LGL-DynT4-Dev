/**
 * LGL-DynT4 Dataset - Function: ByteSwap
 * -----------------------------------------
 * File: A18_F44_O_A17_Unrolled_Loop.c
 * Implementation Logic: Unrolled loop obfuscation of A17 using index offsets to rebuild value.
 * Input Format: <uint32_t>
 */
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

uint32_t ByteSwap(uint32_t x) {
    uint32_t res = 0;
    uint32_t b;
    b = (x >> 0) & 0xFF; res |= (b << 24);
    b = (x >> 8) & 0xFF; res |= (b << 16);
    b = (x >> 16) & 0xFF; res |= (b << 8);
    b = (x >> 24) & 0xFF; res |= (b << 0);
    return res;
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    uint32_t val = (uint32_t)strtoul(argv[1], NULL, 10);
    printf("%u\n", ByteSwap(val));
    return 0;
}