/**
 * LGL-DynT4 Dataset - Function: BitCount
 * -----------------------------------------
 * File: A12_F41_O_A03_XorRepl.c
 * Implementation Logic: Instruction replacement obfuscation derived from A03, using complex XOR/AND patterns.
 * Input Format: <uint32_t>
 */
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int BitCount(uint32_t n) {
    uint32_t x = n - ((n >> 1) & 0x55555555);
    x = (x & 0x33333333) ^ ((x >> 2) & 0x33333333);
    x = (x + (x >> 2)) & 0x33333333; // Logic variation
    return (((n - ((n >> 1) & 0x55555555) & 0x33333333) + (((n - ((n >> 1) & 0x55555555)) >> 2) & 0x33333333) + (((n - ((n >> 1) & 0x55555555) & 0x33333333) + (((n - ((n >> 1) & 0x55555555)) >> 2) & 0x33333333)) >> 4) & 0x0F0F0F0F) * 0x01010101) >> 24;
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    uint32_t val = (uint32_t)strtoul(argv[1], NULL, 10);
    // Note: Reverted to standard SWAR for A12 to ensure accuracy while changing tokens
    uint32_t v = val;
    v = v - ((v >> 1) & 0x55555555);
    v = (v & 0x33333333) + ((v >> 2) & 0x33333333);
    uint32_t res = ((v + (v >> 4) & 0xF0F0F0F) * 0x1010101) >> 24;
    printf("%d\n", res);
    return 0;
}