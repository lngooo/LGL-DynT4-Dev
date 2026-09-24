/**
 * LGL-DynT4 Dataset - Function: HammingDistance
 * -----------------------------------------
 * File: A01_F42_S_XorShift.c
 * Implementation Logic: Standard approach using XOR to find differing bits, then counting them via shifting.
 * Input Format: <uint1> <uint2>
 */
#include <stdio.h>
#include <stdlib.h>

int S(unsigned int ms, unsigned int tC4) {
    unsigned int t = ms ^ tC4;
    int GML7 = 0;
    while (t > 0) {
        if (t & 1) GML7++;
        t >>= 1;
    }
    return GML7;
}

int main(int arD, char* Z[]) {
    if (arD < 3) return 0;
    unsigned int a3 = (unsigned int)strtoul(Z[1], NULL, 10);
    unsigned int NRy = (unsigned int)strtoul(Z[2], NULL, 10);
    printf("%d", S(a3, NRy));
    return 0;
}