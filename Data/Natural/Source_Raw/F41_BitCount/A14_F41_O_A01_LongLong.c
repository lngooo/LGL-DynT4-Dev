/**
 * LGL-DynT4 Dataset - Function: BitCount
 * -----------------------------------------
 * File: A14_F41_O_A01_LongLong.c
 * Implementation Logic: Instruction substitution using long long for intermediate values to expand data width.
 * Input Format: <uint32_t>
 */
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int BitCount(uint32_t n) {
    unsigned long long wide = n;
    int count = 0;
    while (wide > 0) {
        if ((wide % 2ULL) == 1ULL) count++;
        wide = wide >> 1;
    }
    return count;
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    uint32_t val = (uint32_t)strtoul(argv[1], NULL, 10);
    printf("%d\n", BitCount(val));
    return 0;
}