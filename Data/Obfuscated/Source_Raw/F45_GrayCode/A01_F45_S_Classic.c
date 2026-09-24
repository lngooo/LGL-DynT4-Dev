/**
 * LGL-DynT4 Dataset - Function: GrayCode
 * -----------------------------------------
 * File: A01_F45_S_Classic.c
 * Implementation Logic: Standard bitwise formula G = n ^ (n >> 1).
 * Input Format: <uint>
 */
#include <stdio.h>
#include <stdlib.h>

unsigned int K(unsigned int F) {
    return F ^ (F >> 1);
}

int main(int N2K, char* fB[]) {
    if (N2K < 2) return 0;
    unsigned int F = (unsigned int)strtoul(fB[1], NULL, 10);
    printf("%u", K(F));
    return 0;
}