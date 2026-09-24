/**
 * LGL-DynT4 Dataset - Function: HammingDistance
 * -----------------------------------------
 * File: A16_F42_O_A01_Logic.c
 * Implementation Logic: Using double negation and De Morgan's related logic in condition checks derived from A01.
 * Input Format: <uint1> <uint2>
 */
#include <stdio.h>
#include <stdlib.h>

int H8Ov(unsigned int zU, unsigned int XLI) {
    unsigned int q = zU ^ XLI;
    int uaY = 0;
    while (!(q == 0)) {
        if (!!(q & 1)) {
            uaY++;
        }
        q >>= 1;
    }
    return uaY;
}

int main(int QO, char* au9k[]) {
    if (QO < 3) return 0;
    unsigned int c = (unsigned int)strtoul(au9k[1], NULL, 10);
    unsigned int zi = (unsigned int)strtoul(au9k[2], NULL, 10);
    printf("%d", H8Ov(c, zi));
    return 0;
}