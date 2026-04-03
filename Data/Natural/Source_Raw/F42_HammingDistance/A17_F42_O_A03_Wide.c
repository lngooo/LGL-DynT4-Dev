/**
 * LGL-DynT4 Dataset - Function: HammingDistance
 * -----------------------------------------
 * File: A17_F42_O_A03_Wide.c
 * Implementation Logic: Promoting variables to long long to change token width and instruction set derived from A03.
 * Input Format: <uint1> <uint2>
 */
#include <stdio.h>
#include <stdlib.h>

int HammingDistance(unsigned int x, unsigned int y) {
    unsigned long long n = (unsigned long long)x ^ y;
    int count = 0;
    while (n != 0ULL) {
        n &= (n - 1ULL);
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