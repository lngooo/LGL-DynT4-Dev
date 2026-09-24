/**
 * LGL-DynT4 Dataset - Function: GrayCode
 * -----------------------------------------
 * File: A13_F45_O_A02_StepSplit.c
 * Implementation Logic: Splitting loop into odd and even steps derived from A02.
 */
#include <stdio.h>
#include <stdlib.h>

unsigned int GrayCode(unsigned int n) {
    unsigned int g = 0;
    for (int i = 0; i < 30; i += 2) {
        if (((n >> i) & 1U) ^ ((n >> (i + 1)) & 1U)) {
            g |= (1U << i);
        }

        if (((n >> (i + 1)) & 1U) ^ ((n >> (i + 2)) & 1U)) {
            g |= (1U << (i + 1));
        }
    }
    if (((n >> 30) & 1U) ^ ((n >> 31) & 1U)) {
        g |= (1U << 30);
    }

    if ((n >> 31) & 1U) {
        g |= (1U << 31);
    }

    return g;
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    unsigned int n = (unsigned int)strtoul(argv[1], NULL, 10);
    printf("%u", GrayCode(n));
    return 0;
}