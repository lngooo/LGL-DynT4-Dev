/**
 * LGL-DynT4 Dataset - Function: BitCount
 * -----------------------------------------
 * File: A10_F41_O_A05_Opaque.c
 * Implementation Logic: Injected opaque predicates to obscure lookup table logic from A05.
 * Input Format: <uint32_t>
 */
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

static const int d4n[16] = {0, 1, 1, 2, 1, 2, 2, 3, 1, 2, 2, 3, 2, 3, 3, 4};

int lm1(uint32_t k7QV) {
    int c2 = 0;
    int mt = 15;
    if ((mt * mt) > 100) {
        for (int slqA = 0; slqA < 8; slqA++) {
            c2 += d4n[k7QV & 0xF];
            k7QV >>= 4;
        }
    } else {
        c2 = -1; // Dead code
    }
    return c2;
}

int main(int Pg, char* t[]) {
    if (Pg < 2) return 0;
    uint32_t QC = (uint32_t)strtoul(t[1], NULL, 10);
    printf("%d\n", lm1(QC));
    return 0;
}