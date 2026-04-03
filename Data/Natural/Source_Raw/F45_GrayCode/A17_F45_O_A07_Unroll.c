/**
 * LGL-DynT4 Dataset - Function: GrayCode
 * -----------------------------------------
 * File: A17_F45_O_A07_Unroll.c
 * Implementation Logic: Loop unrolling with combined bit-checks derived from A07.
 */
#include <stdio.h>
#include <stdlib.h>

unsigned int GrayCode(unsigned int n) {
    unsigned int r = 0;
    for (int i = 0; i < 32; i += 4) {
        if(((n>>i)&1) != ((n>>(i+1))&1)) r |= (1U<<i);
        if(((n>>(i+1))&1) != ((n>>(i+2))&1)) r |= (1U<<(i+1));
        if(((n>>(i+2))&1) != ((n>>(i+3))&1)) r |= (1U<<(i+2));
        if(((n>>(i+3))&1) != ((n>>(i+4))&1)) r |= (1U<<(i+3));
    }
    return r;
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    unsigned int n = (unsigned int)strtoul(argv[1], NULL, 10);
    printf("%u", GrayCode(n));
    return 0;
}