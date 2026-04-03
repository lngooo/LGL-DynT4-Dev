/**
 * LGL-DynT4 Dataset - Function: ByteSwap
 * -----------------------------------------
 * File: A17_F44_S_Register_Simulation.c
 * Implementation Logic: Simulates low-level register byte isolation and reconstruction steps.
 * Input Format: <uint32_t>
 */
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

uint32_t ByteSwap(uint32_t x) {
    uint32_t r0, r1, r2, r3;
    r0 = (x >> 0) & 0xFF;
    r1 = (x >> 8) & 0xFF;
    r2 = (x >> 16) & 0xFF;
    r3 = (x >> 24) & 0xFF;
    return (r0 << 24) | (r1 << 16) | (r2 << 8) | r3;
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    uint32_t val = (uint32_t)strtoul(argv[1], NULL, 10);
    printf("%u\n", ByteSwap(val));
    return 0;
}