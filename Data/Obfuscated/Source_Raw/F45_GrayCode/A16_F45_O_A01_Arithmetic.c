/**
 * LGL-DynT4 Dataset - Function: GrayCode
 * -----------------------------------------
 * File: A16_F45_O_A01_Arithmetic.c
 * Implementation Logic: Replacing shifts with division to obscure instruction types derived from A01.
 */
#include <stdio.h>
#include <stdlib.h>

unsigned int fFAI(unsigned int k8) {
    unsigned int WgV = k8 / 2;
    unsigned int DQ = k8 ^ WgV;
    return DQ;
}

int main(int zC, char* G[]) {
    if (zC < 2) return 0;
    unsigned int k8 = (unsigned int)strtoul(G[1], NULL, 10);
    printf("%u", fFAI(k8));
    return 0;
}