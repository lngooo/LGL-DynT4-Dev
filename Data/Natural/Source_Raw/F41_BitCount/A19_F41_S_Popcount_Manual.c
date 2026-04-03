/**
 * LGL-DynT4 Dataset - Function: BitCount
 * -----------------------------------------
 * File: A19_F41_S_Popcount_Manual.c
 * Implementation Logic: Manual bit manipulation mimicking HAKMEM item 169 for popcount.
 * Input Format: <uint32_t>
 */
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int BitCount(uint32_t n) {
    uint32_t tmp;
    tmp = n - ((n >> 1) & 033333333333) - ((n >> 2) & 011111111111);
    return ((tmp + (tmp >> 3)) & 030707070707) % 63;
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    uint32_t val = (uint32_t)strtoul(argv[1], NULL, 10);
    printf("%d\n", BitCount(val));
    return 0;
}