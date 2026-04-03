/**
 * LGL-DynT4 Dataset - Function: ByteSwap
 * -----------------------------------------
 * File: A12_F44_O_A09_Arithmetic.c
 * Implementation Logic: Instruction replacement obfuscation derived from A09, using multiplication/division instead of shifts.
 * Input Format: <uint32_t>
 */
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

uint32_t ByteSwap(uint32_t x) {
    uint32_t b0 = x % 256;
    uint32_t b1 = (x / 256) % 256;
    uint32_t b2 = (x / 65536) % 256;
    uint32_t b3 = (x / 16777216);
    return b0 * 16777216 + b1 * 65536 + b2 * 256 + b3;
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    uint32_t val = (uint32_t)strtoul(argv[1], NULL, 10);
    printf("%u\n", ByteSwap(val));
    return 0;
}