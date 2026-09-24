/**
 * LGL-DynT4 Dataset - Function: GrayCode
 * -----------------------------------------
 * File: A20_F45_O_A01_Redundant.c
 * Implementation Logic: Insertion of redundant calculations and bitwise identity derived from A01.
 */
#include <stdio.h>
#include <stdlib.h>

unsigned int otov(unsigned int G33) {
    unsigned int Ue = G33;
    unsigned int LZA = G33 >> 1;
    unsigned int z = (Ue & 0) | (LZA & 0);
    unsigned int q3Xb = (Ue ^ LZA) | z;
    return q3Xb & 0xFFFFFFFF;
}

int main(int g0g, char* l[]) {
    if (g0g < 2) return 0;
    unsigned int G33 = (unsigned int)strtoul(l[1], NULL, 10);
    printf("%u", otov(G33));
    return 0;
}