/**
 * LGL-DynT4 Dataset - Function: GrayCode
 * -----------------------------------------
 * File: A21_F45_O_A01_Proxy.c
 * Implementation Logic: Functional proxying and parameter wrapping derived from A01.
 */
#include <stdio.h>
#include <stdlib.h>

unsigned int k(unsigned int tmQ, unsigned int fZU) {
    return tmQ ^ fZU;
}

unsigned int p3(unsigned int h) {
    return k(h, h >> 1);
}

int main(int dtNV, char* a08p[]) {
    if (dtNV < 2) return 0;
    unsigned int h = (unsigned int)strtoul(a08p[1], NULL, 10);
    printf("%u", p3(h));
    return 0;
}