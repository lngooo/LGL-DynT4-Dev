/**
 * LGL-DynT4 Dataset - Function: BitCount
 * -----------------------------------------
 * File: A05_F41_S_Lookup_Table.c
 * Implementation Logic: Precomputed 4-bit lookup table used to calculate bits nibble by nibble.
 * Input Format: <uint32_t>
 */
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

static const int LOOKUP[16] = {0, 1, 1, 2, 1, 2, 2, 3, 1, 2, 2, 3, 2, 3, 3, 4};

int BitCount(uint32_t n) {
    int count = 0;
    for (int i = 0; i < 8; i++) {
        count += LOOKUP[n & 0xF];
        n >>= 4;
    }
    return count;
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    uint32_t val = (uint32_t)strtoul(argv[1], NULL, 10);
    printf("%d\n", BitCount(val));
    return 0;
}