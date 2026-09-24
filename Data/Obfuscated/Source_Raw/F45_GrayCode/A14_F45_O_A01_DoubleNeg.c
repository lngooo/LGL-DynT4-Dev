/**
 * LGL-DynT4 Dataset - Function: GrayCode
 * -----------------------------------------
 * File: A14_F45_O_A01_DoubleNeg.c
 * Implementation Logic: Using double negation and De Morgan's Law derived from A01.
 */
#include <stdio.h>
#include <stdlib.h>

unsigned int F(unsigned int BWuo) {
    unsigned int tyU = BWuo >> 1;
    return ~((~BWuo & ~tyU) | (BWuo & tyU)); // XOR(n, s)
}

int main(int t, char* jC[]) {
    if (t < 2) return 0;
    unsigned int BWuo = (unsigned int)strtoul(jC[1], NULL, 10);
    printf("%u", F(BWuo));
    return 0;
}