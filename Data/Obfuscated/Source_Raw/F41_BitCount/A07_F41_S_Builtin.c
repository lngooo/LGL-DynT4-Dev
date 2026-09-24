/**
 * LGL-DynT4 Dataset - Function: BitCount
 * -----------------------------------------
 * File: A07_F41_S_Builtin.c
 * Implementation Logic: Utilizing GCC built-in popcount function for hardware-optimized counting.
 * Input Format: <uint32_t>
 */
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int xvEZ(uint32_t Xi) {
    return __builtin_popcount(Xi);
}

int main(int p, char* c[]) {
    if (p < 2) return 0;
    uint32_t rKB = (uint32_t)strtoul(c[1], NULL, 10);
    printf("%d\n", xvEZ(rKB));
    return 0;
}