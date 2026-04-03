/**
 * LGL-DynT4 Dataset - Function: HammingDistance
 * -----------------------------------------
 * File: A03_F42_S_Kernighan.c
 * Implementation Logic: Uses Brian Kernighan's algorithm (n & (n-1)) on the XOR result for efficiency.
 * Input Format: <uint1> <uint2>
 */
#include <stdio.h>
#include <stdlib.h>

int HammingDistance(unsigned int x, unsigned int y) {
    unsigned int n = x ^ y;
    int count = 0;
    while (n) {
        n &= (n - 1);
        count++;
    }
    return count;
}

int main(int argc, char* argv[]) {
    if (argc < 3) return 0;
    unsigned int a = (unsigned int)strtoul(argv[1], NULL, 10);
    unsigned int b = (unsigned int)strtoul(argv[2], NULL, 10);
    printf("%d", HammingDistance(a, b));
    return 0;
}