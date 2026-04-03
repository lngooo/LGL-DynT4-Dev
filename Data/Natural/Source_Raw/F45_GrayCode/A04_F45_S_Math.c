/**
 * LGL-DynT4 Dataset - Function: GrayCode
 * -----------------------------------------
 * File: A04_F45_S_Math.c
 * Implementation Logic: Using mathematical identity (a|b)-(a&b) to simulate XOR operation.
 * Input Format: <uint>
 */
#include <stdio.h>
#include <stdlib.h>

unsigned int GrayCode(unsigned int n) {
    unsigned int shift = n >> 1;
    return (n | shift) - (n & shift);
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    unsigned int n = (unsigned int)strtoul(argv[1], NULL, 10);
    printf("%u", GrayCode(n));
    return 0;
}