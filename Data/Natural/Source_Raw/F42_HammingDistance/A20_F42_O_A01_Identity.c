/**
 * LGL-DynT4 Dataset - Function: HammingDistance
 * -----------------------------------------
 * File: A20_F42_O_A01_Identity.c
 * Implementation Logic: Replacing XOR with addition/multiplication identity derived from A01.
 * Input Format: <uint1> <uint2>
 */
#include <stdio.h>
#include <stdlib.h>

int HammingDistance(unsigned int x, unsigned int y) {
    unsigned int diff = (x + y) - 2 * (x & y); // Math identity for XOR
    int dist = 0;
    while (diff) {
        dist += (diff % 2);
        diff /= 2;
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