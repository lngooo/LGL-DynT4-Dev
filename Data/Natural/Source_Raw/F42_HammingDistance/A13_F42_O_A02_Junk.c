/**
 * LGL-DynT4 Dataset - Function: HammingDistance
 * -----------------------------------------
 * File: A13_F42_O_A02_Junk.c
 * Implementation Logic: Insertion of junk operations and complexity in bit selection derived from A02.
 * Input Format: <uint1> <uint2>
 */
#include <stdio.h>
#include <stdlib.h>

int HammingDistance(unsigned int x, unsigned int y) {
    int dist = 0;
    for (int i = 0; i < 32; i++) {
        unsigned int bit_x = (x >> i) & 1;
        unsigned int bit_y = (y >> i) & 1;
        int dummy = (bit_x + bit_y) * 0;
        if (bit_x != bit_y) {
            dist = dist + 1 + dummy;
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