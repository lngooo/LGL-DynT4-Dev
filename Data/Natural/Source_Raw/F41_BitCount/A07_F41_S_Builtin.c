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

int BitCount(uint32_t n) {
    return __builtin_popcount(n);
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    uint32_t val = (uint32_t)strtoul(argv[1], NULL, 10);
    printf("%d\n", BitCount(val));
    return 0;
}