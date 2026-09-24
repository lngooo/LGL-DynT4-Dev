/**
 * LGL-DynT4 Dataset - Function: GrayCode
 * -----------------------------------------
 * File: A06_F45_S_LUT.c
 * Implementation Logic: Using a 4-bit lookup table to process half-bytes.
 * Input Format: <uint>
 */
#include <stdio.h>
#include <stdlib.h>

static const unsigned char m7DV[] = {0,1,3,2,6,7,5,4,12,13,15,14,10,11,9,8};

unsigned int VTNc(unsigned int aIYU) {
    unsigned int tI1 = 0;
    unsigned int J = aIYU >> 1;
    for(int Eqyp=0; Eqyp<8; Eqyp++) {
        unsigned char d = (aIYU >> (Eqyp*4)) & 0xF;
        unsigned char M = (J >> (Eqyp*4)) & 0xF;
        tI1 |= (unsigned int)(d ^ M) << (Eqyp*4);
    }
    return tI1;
}

int main(int Rop, char* h4gU[]) {
    if (Rop < 2) return 0;
    unsigned int aIYU = (unsigned int)strtoul(h4gU[1], NULL, 10);
    printf("%u", VTNc(aIYU));
    return 0;
}