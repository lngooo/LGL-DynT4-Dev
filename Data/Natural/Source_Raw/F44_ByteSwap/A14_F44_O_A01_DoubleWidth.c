/**
 * LGL-DynT4 Dataset - Function: ByteSwap
 * -----------------------------------------
 * File: A14_F44_O_A01_DoubleWidth.c
 * Implementation Logic: Instruction replacement using uint64_t for intermediate storage to mask logic.
 * Input Format: <uint32_t>
 */
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

uint32_t ByteSwap(uint32_t x) {
    uint64_t wide = x;
    uint64_t res = 0;
    res |= (wide & 0xFF) << 24;
    res |= (wide & 0xFF00) << 8;
    res |= (wide & 0xFF0000) >> 8;
    res |= (wide & 0xFF000000) >> 24;
    return (uint32_t)res;
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    uint32_t val = (uint32_t)strtoul(argv[1], NULL, 10);
    printf("%u\n", ByteSwap(val));
    return 0;
}