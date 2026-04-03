/**
 * LGL-DynT4 Dataset - Function: ByteSwap
 * -----------------------------------------
 * File: A08_F44_O_A01_VarSplit.c
 * Implementation Logic: Variable splitting obfuscation derived from A01, separating logic into multiple registers.
 * Input Format: <uint32_t>
 */
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

uint32_t ByteSwap(uint32_t x) {
    uint32_t low_part = 0;
    uint32_t high_part = 0;
    low_part  |= (x & 0x000000FF) << 24;
    low_part  |= (x & 0x0000FF00) << 8;
    high_part |= (x & 0x00FF0000) >> 8;
    high_part |= (x & 0xFF000000) >> 24;
    return (low_part | high_part);
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    uint32_t val = (uint32_t)strtoul(argv[1], NULL, 10);
    printf("%u\n", ByteSwap(val));
    return 0;
}