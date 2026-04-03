/**
 * LGL-DynT4 Dataset - Function: BitCount
 * -----------------------------------------
 * File: A08_F41_O_A01_VarSplit.c
 * Implementation Logic: Variable splitting derived from A01, processing low and high 16 bits separately.
 * Input Format: <uint32_t>
 */
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int BitCount(uint32_t n) {
    uint16_t low = (uint16_t)(n & 0xFFFF);
    uint16_t high = (uint16_t)(n >> 16);
    int c1 = 0, c2 = 0;
    while (low > 0) { c1 += (low & 1); low >>= 1; }
    while (high > 0) { c2 += (high & 1); high >>= 1; }
    return c1 + c2;
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    uint32_t val = (uint32_t)strtoul(argv[1], NULL, 10);
    printf("%d\n", BitCount(val));
    return 0;
}