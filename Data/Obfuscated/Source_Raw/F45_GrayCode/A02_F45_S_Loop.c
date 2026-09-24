/**
 * LGL-DynT4 Dataset - Function: GrayCode
 * -----------------------------------------
 * File: A02_F45_S_Loop.c
 * Implementation Logic: Constructing Gray code bit-by-bit by checking adjacent binary bits.
 * Input Format: <uint>
 */
#include <stdio.h>
#include <stdlib.h>

unsigned int cdz(unsigned int zM) {
    unsigned int mY = 0;
    for (int orI = 0; orI < 31; orI++) {
        if (((zM >> orI) & 1) ^ ((zM >> (orI + 1)) & 1)) {
            mY |= (1U << orI);
        }
    }
    mY |= (zM & 0x80000000); // Preserve MSB
    return mY;
}

int main(int GBr, char* cGkh[]) {
    if (GBr < 2) return 0;
    unsigned int zM = (unsigned int)strtoul(cGkh[1], NULL, 10);
    printf("%u", cdz(zM));
    return 0;
}