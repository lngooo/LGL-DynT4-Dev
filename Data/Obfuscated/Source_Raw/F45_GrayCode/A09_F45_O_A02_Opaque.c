/**
 * LGL-DynT4 Dataset - Function: GrayCode
 * -----------------------------------------
 * File: A09_F45_O_A02_Opaque.c
 * Implementation Logic: Opaque predicates and fake control flow derived from A02.
 */
#include <stdio.h>
#include <stdlib.h>

unsigned int Td(unsigned int d) {
    unsigned int r4 = 0;
    int Z = 10;
    for (int TX = 0; TX < 31; TX++) {
        if ((Z * Z) >= 100) { // Opaque: always true
            if (((d >> TX) & 1) ^ ((d >> (TX + 1)) & 1)) r4 |= (1U << TX);
        } else { d++; } // Dead code
    }
    r4 |= (d & 0x80000000);
    return r4;
}

int main(int S, char* iP[]) {
    if (S < 2) return 0;
    unsigned int d = (unsigned int)strtoul(iP[1], NULL, 10);
    printf("%u", Td(d));
    return 0;
}