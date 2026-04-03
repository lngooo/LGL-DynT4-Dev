/**
 * LGL-DynT4 Dataset - Function: HammingDistance
 * -----------------------------------------
 * File: A02_F42_S_BitCompare.c
 * Implementation Logic: Directly compares bits of both numbers at each position without initial XOR.
 * Input Format: <uint1> <uint2>
 */
#include <stdio.h>
#include <stdlib.h>

int HammingDistance(unsigned int x, unsigned int y) {
    int dist = 0;
    for (int i = 0; i < 32; i++) {
        if ((x & (1U << i)) != (y & (1U << i))) {
            dist++;
        }
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