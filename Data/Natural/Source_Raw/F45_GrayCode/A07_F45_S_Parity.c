/**
 * LGL-DynT4 Dataset - Function: GrayCode
 * -----------------------------------------
 * File: A07_F45_S_Parity.c
 * Implementation Logic: Calculating G[i] = B[i] ^ B[i+1] via parity condition.
 * Input Format: <uint>
 */
#include <stdio.h>
#include <stdlib.h>

unsigned int GrayCode(unsigned int n) {
    unsigned int result = 0;
    unsigned int b1, b2;
    for (int i = 0; i < 32; i++) {
        b1 = (n >> i) & 1;
        b2 = (n >> (i + 1)) & 1;
        if (b1 != b2) result |= (1U << i);
    }
    return result;
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    unsigned int n = (unsigned int)strtoul(argv[1], NULL, 10);
    printf("%u", GrayCode(n));
    return 0;
}