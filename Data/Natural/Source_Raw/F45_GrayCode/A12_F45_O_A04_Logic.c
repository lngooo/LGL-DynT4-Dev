/**
 * LGL-DynT4 Dataset - Function: GrayCode
 * -----------------------------------------
 * File: A12_F45_O_A04_Logic.c
 * Implementation Logic: Replacing arithmetic subtraction with bitwise NOT and AND derived from A04.
 */
#include <stdio.h>
#include <stdlib.h>

unsigned int GrayCode(unsigned int n) {
    unsigned int a = n;
    unsigned int b = n >> 1;
    // (a|b)-(a&b) equivalent to (a|b) & ~(a&b)
    return (a | b) & ~(a & b);
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    unsigned int n = (unsigned int)strtoul(argv[1], NULL, 10);
    printf("%u", GrayCode(n));
    return 0;
}