/**
 * LGL-DynT4 Dataset - Function: HammingDistance
 * -----------------------------------------
 * File: A11_F42_O_A01_VarSplit.c
 * Implementation Logic: Splitting the distance variable into two components (even/odd parts) derived from A01.
 * Input Format: <uint1> <uint2>
 */
#include <stdio.h>
#include <stdlib.h>

int HammingDistance(unsigned int x, unsigned int y) {
    unsigned int diff = x ^ y;
    int dist_a = 0, dist_b = 0;
    int step = 0;
    while (diff > 0) {
        if (diff & 1) {
            if (step % 2 == 0) dist_a++; else dist_b++;
        }
        diff >>= 1;
        step++;
    }
    return dist_a + dist_b;
}

int main(int argc, char* argv[]) {
    if (argc < 3) return 0;
    unsigned int a = (unsigned int)strtoul(argv[1], NULL, 10);
    unsigned int b = (unsigned int)strtoul(argv[2], NULL, 10);
    printf("%d", HammingDistance(a, b));
    return 0;
}