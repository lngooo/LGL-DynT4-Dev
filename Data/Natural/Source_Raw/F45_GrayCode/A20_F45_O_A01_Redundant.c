/**
 * LGL-DynT4 Dataset - Function: GrayCode
 * -----------------------------------------
 * File: A20_F45_O_A01_Redundant.c
 * Implementation Logic: Insertion of redundant calculations and bitwise identity derived from A01.
 */
#include <stdio.h>
#include <stdlib.h>

unsigned int GrayCode(unsigned int n) {
    unsigned int a = n;
    unsigned int b = n >> 1;
    unsigned int junk = (a & 0) | (b & 0);
    unsigned int res = (a ^ b) | junk;
    return res & 0xFFFFFFFF;
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    unsigned int n = (unsigned int)strtoul(argv[1], NULL, 10);
    printf("%u", GrayCode(n));
    return 0;
}