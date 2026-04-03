/**
 * LGL-DynT4 Dataset - Function: GrayCode
 * -----------------------------------------
 * File: A18_F45_O_A06_PtrIndirection.c
 * Implementation Logic: Data indirection using pointers and LUT indexing derived from A06.
 */
#include <stdio.h>
#include <stdlib.h>

unsigned int GrayCode(unsigned int n) {
    unsigned int res = 0;
    unsigned int s = n >> 1;
    const unsigned int *n_ptr = &n;
    for(int i=0; i<8; i++) {
        unsigned char b = (*n_ptr >> (i*4)) & 0xF;
        unsigned char sb = (s >> (i*4)) & 0xF;
        res |= (unsigned int)(b ^ sb) << (i*4);
    }
    return res;
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    unsigned int n = (unsigned int)strtoul(argv[1], NULL, 10);
    printf("%u", GrayCode(n));
    return 0;
}