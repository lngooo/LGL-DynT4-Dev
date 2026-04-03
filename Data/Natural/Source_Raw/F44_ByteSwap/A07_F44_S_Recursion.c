/**
 * LGL-DynT4 Dataset - Function: ByteSwap
 * -----------------------------------------
 * File: A07_F44_S_Recursion.c
 * Implementation Logic: Recursive extraction and shifting of bytes to rebuild the integer in reverse order.
 * Input Format: <uint32_t>
 */
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

uint32_t solve(uint32_t x, int n) {
    if (n == 0) return 0;
    return ((x & 0xFF) << (8 * (n - 1))) | solve(x >> 8, n - 1);
}

uint32_t ByteSwap(uint32_t x) {
    return solve(x, 4);
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    uint32_t val = (uint32_t)strtoul(argv[1], NULL, 10);
    printf("%u\n", ByteSwap(val));
    return 0;
}