/**
 * LGL-DynT4 Dataset - Function: GrayCode
 * -----------------------------------------
 * File: A05_F45_S_Byte.c
 * Implementation Logic: Decomposing the integer into bytes and performing shift-xor across memory.
 * Input Format: <uint>
 */
#include <stdio.h>
#include <stdlib.h>

unsigned int GrayCode(unsigned int n) {
    unsigned char bytes[4];
    unsigned int shifted = n >> 1;
    unsigned char s_bytes[4];
    for(int i=0; i<4; i++) {
        bytes[i] = (n >> (i*8)) & 0xFF;
        s_bytes[i] = (shifted >> (i*8)) & 0xFF;
    }
    unsigned int res = 0;
    for(int i=0; i<4; i++) {
        res |= (unsigned int)(bytes[i] ^ s_bytes[i]) << (i*8);
    }
    return res;
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    unsigned int n = (unsigned int)strtoul(argv[1], NULL, 10);
    printf("%u", GrayCode(n));
    return 0;
}