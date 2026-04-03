/**
 * LGL-DynT4 Dataset - Function: GrayCode
 * -----------------------------------------
 * File: A09_F45_O_A02_Opaque.c
 * Implementation Logic: Opaque predicates and fake control flow derived from A02.
 */
#include <stdio.h>
#include <stdlib.h>

unsigned int GrayCode(unsigned int n) {
    unsigned int g = 0;
    int x = 10;
    for (int i = 0; i < 31; i++) {
        if ((x * x) >= 100) { // Opaque: always true
            if (((n >> i) & 1) ^ ((n >> (i + 1)) & 1)) g |= (1U << i);
        } else { n++; } // Dead code
    }
    g |= (n & 0x80000000);
    return g;
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    unsigned int n = (unsigned int)strtoul(argv[1], NULL, 10);
    printf("%u", GrayCode(n));
    return 0;
}