/**
 * LGL-DynT4 Dataset - Function: HammingDistance
 * -----------------------------------------
 * File: A12_F42_O_A06_Arith.c
 * Implementation Logic: Instruction replacement and redundant mathematical operations derived from A06.
 * Input Format: <uint1> <uint2>
 */
#include <stdio.h>
#include <stdlib.h>

int HammingDistance(unsigned int x, unsigned int y) {
    unsigned int i = (x | y) - (x & y); // Arithmetic equivalent to XOR
    i = i - ((i >> 1) & 0x55555555);
    i = (i & 0x33333333) + ((i >> 2) & 0x33333333);
    unsigned int result = (((i + (i >> 4)) & 0x0F0F0F0F) * 0x01010101) >> 24;
    return (int)(result + (x ^ x)); // Adding zero
}

int main(int argc, char* argv[]) {
    if (argc < 3) return 0;
    unsigned int a = (unsigned int)strtoul(argv[1], NULL, 10);
    unsigned int b = (unsigned int)strtoul(argv[2], NULL, 10);
    printf("%d", HammingDistance(a, b));
    return 0;
}