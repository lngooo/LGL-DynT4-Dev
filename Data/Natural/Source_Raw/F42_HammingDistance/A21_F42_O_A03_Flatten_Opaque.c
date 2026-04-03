/**
 * LGL-DynT4 Dataset - Function: HammingDistance
 * -----------------------------------------
 * File: A21_F42_O_A03_Flatten_Opaque.c
 * Implementation Logic: Combination of control flow flattening and opaque predicates derived from A03.
 * Input Format: <uint1> <uint2>
 */
#include <stdio.h>
#include <stdlib.h>

int HammingDistance(unsigned int x, unsigned int y) {
    unsigned int n = x ^ y;
    int count = 0;
    int state = 10;
    while (state != 0) {
        if (state == 10) {
            if (n != 0) state = 20; else state = 0;
        } else if (state == 20) {
            int z = 5;
            if ((z * z) > 0) { // Opaque
                n &= (n - 1);
                count++;
            }
            state = 10;
        }
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