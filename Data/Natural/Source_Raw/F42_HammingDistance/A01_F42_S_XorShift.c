/**
 * LGL-DynT4 Dataset - Function: HammingDistance
 * -----------------------------------------
 * File: A01_F42_S_XorShift.c
 * Implementation Logic: Standard approach using XOR to find differing bits, then counting them via shifting.
 * Input Format: <uint1> <uint2>
 */
#include <stdio.h>
#include <stdlib.h>

int HammingDistance(unsigned int x, unsigned int y) {
    unsigned int diff = x ^ y;
    int dist = 0;
    while (diff > 0) {
        if (diff & 1) dist++;
        diff >>= 1;
    }
    return dist;
}

int main(int argc, char* argv[]) {
    if (argc < 3) return 0;
    unsigned int a = (unsigned int)strtoul(argv[1], NULL, 10);
    unsigned int b = (unsigned int)strtoul(argv[2], NULL, 10);
    printf("%d", HammingDistance(a, b));
    return 0;
}