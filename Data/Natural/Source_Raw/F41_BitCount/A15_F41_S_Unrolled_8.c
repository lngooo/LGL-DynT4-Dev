/**
 * LGL-DynT4 Dataset - Function: BitCount
 * -----------------------------------------
 * File: A15_F41_S_Unrolled_8.c
 * Implementation Logic: Manually unrolled loop checking 8 bits at a time to reduce branch overhead.
 * Input Format: <uint32_t>
 */
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int BitCount(uint32_t n) {
    int c = 0;
    while(n) {
        c += (n & 1); c += ((n >> 1) & 1);
        c += ((n >> 2) & 1); c += ((n >> 3) & 1);
        c += ((n >> 4) & 1); c += ((n >> 5) & 1);
        c += ((n >> 6) & 1); c += ((n >> 7) & 1);
        n >>= 8;
    }
    return c;
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    uint32_t val = (uint32_t)strtoul(argv[1], NULL, 10);
    printf("%d\n", BitCount(val));
    return 0;
}