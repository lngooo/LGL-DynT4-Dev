/**
 * LGL-DynT4 Dataset - Function: HammingDistance
 * -----------------------------------------
 * File: A06_F42_S_SWAR.c
 * Implementation Logic: SIMD Within A Register (SWAR) parallel bit counting on the XOR result.
 * Input Format: <uint1> <uint2>
 */
#include <stdio.h>
#include <stdlib.h>

int g8(unsigned int Ye, unsigned int VsG) {
    unsigned int T = Ye ^ VsG;
    T = T - ((T >> 1) & 0x55555555);
    T = (T & 0x33333333) + ((T >> 2) & 0x33333333);
    return (((T + (T >> 4)) & 0x0F0F0F0F) * 0x01010101) >> 24;
}

int main(int Ij3, char* IAIF[]) {
    if (Ij3 < 3) return 0;
    unsigned int t5ag = (unsigned int)strtoul(IAIF[1], NULL, 10);
    unsigned int H = (unsigned int)strtoul(IAIF[2], NULL, 10);
    printf("%d", g8(t5ag, H));
    return 0;
}