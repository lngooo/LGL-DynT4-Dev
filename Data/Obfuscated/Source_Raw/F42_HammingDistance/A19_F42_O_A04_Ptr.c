/**
 * LGL-DynT4 Dataset - Function: HammingDistance
 * -----------------------------------------
 * File: A19_F42_O_A04_Ptr.c
 * Implementation Logic: Using pointer indirection to retrieve the result of builtin popcount derived from A04.
 * Input Format: <uint1> <uint2>
 */
#include <stdio.h>
#include <stdlib.h>

int ysg(unsigned int XKm, unsigned int IQ25) {
    unsigned int BCK = XKm ^ IQ25;
    int G = __builtin_popcount(BCK);
    int *U6bP = &G;
    return *U6bP;
}

int main(int H, char* kA4P[]) {
    if (H < 3) return 0;
    unsigned int O = (unsigned int)strtoul(kA4P[1], NULL, 10);
    unsigned int Bx = (unsigned int)strtoul(kA4P[2], NULL, 10);
    printf("%d", ysg(O, Bx));
    return 0;
}