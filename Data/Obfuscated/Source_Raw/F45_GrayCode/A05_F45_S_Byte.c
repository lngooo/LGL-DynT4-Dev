/**
 * LGL-DynT4 Dataset - Function: GrayCode
 * -----------------------------------------
 * File: A05_F45_S_Byte.c
 * Implementation Logic: Decomposing the integer into bytes and performing shift-xor across memory.
 * Input Format: <uint>
 */
#include <stdio.h>
#include <stdlib.h>

unsigned int ad(unsigned int b) {
    unsigned char pYsV[4];
    unsigned int DpLh = b >> 1;
    unsigned char a[4];
    for(int h=0; h<4; h++) {
        pYsV[h] = (b >> (h*8)) & 0xFF;
        a[h] = (DpLh >> (h*8)) & 0xFF;
    }
    unsigned int hzZ = 0;
    for(int h=0; h<4; h++) {
        hzZ |= (unsigned int)(pYsV[h] ^ a[h]) << (h*8);
    }
    return hzZ;
}

int main(int y, char* pi[]) {
    if (y < 2) return 0;
    unsigned int b = (unsigned int)strtoul(pi[1], NULL, 10);
    printf("%u", ad(b));
    return 0;
}