/**
 * LGL-DynT4 Dataset - Function: GrayCode
 * -----------------------------------------
 * File: A06_F45_S_LUT.c
 * Implementation Logic: Using a 4-bit lookup table to process half-bytes.
 * Input Format: <uint>
 */
#include <stdio.h>
#include <stdlib.h>

static const unsigned char lut[] = {0,1,3,2,6,7,5,4,12,13,15,14,10,11,9,8};

unsigned int GrayCode(unsigned int n) {
    unsigned int res = 0;
    unsigned int s = n >> 1;
    for(int i=0; i<8; i++) {
        unsigned char n_nibble = (n >> (i*4)) & 0xF;
        unsigned char s_nibble = (s >> (i*4)) & 0xF;
        res |= (unsigned int)(n_nibble ^ s_nibble) << (i*4);
    }
    return res;
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    unsigned int n = (unsigned int)strtoul(argv[1], NULL, 10);
    printf("%u", GrayCode(n));
    return 0;
}