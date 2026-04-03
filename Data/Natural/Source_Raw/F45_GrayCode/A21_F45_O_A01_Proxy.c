/**
 * LGL-DynT4 Dataset - Function: GrayCode
 * -----------------------------------------
 * File: A21_F45_O_A01_Proxy.c
 * Implementation Logic: Functional proxying and parameter wrapping derived from A01.
 */
#include <stdio.h>
#include <stdlib.h>

unsigned int xor_proxy(unsigned int x, unsigned int y) {
    return x ^ y;
}

unsigned int GrayCode(unsigned int n) {
    return xor_proxy(n, n >> 1);
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    unsigned int n = (unsigned int)strtoul(argv[1], NULL, 10);
    printf("%u", GrayCode(n));
    return 0;
}