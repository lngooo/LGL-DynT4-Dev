/**
 * LGL-DynT4 Dataset - Function: GrayCode
 * -----------------------------------------
 * File: A02_F45_S_Loop.c
 * Implementation Logic: Constructing Gray code bit-by-bit by checking adjacent binary bits.
 * Input Format: <uint>
 */
#include <stdio.h>
#include <stdlib.h>

unsigned int GrayCode(unsigned int n) {
    unsigned int gray = 0;
    for (int i = 0; i < 31; i++) {
        if (((n >> i) & 1) ^ ((n >> (i + 1)) & 1)) {
            gray |= (1U << i);
        }
    }
    gray |= (n & 0x80000000); // Preserve MSB
    return gray;
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    unsigned int n = (unsigned int)strtoul(argv[1], NULL, 10);
    printf("%u", GrayCode(n));
    return 0;
}