/**
 * LGL-DynT4 Dataset - Function: HammingDistance
 * -----------------------------------------
 * File: A14_F42_O_A01_Unroll.c
 * Implementation Logic: Manually unrolling the loop by a factor of 2 to change CFG and Token sequence derived from A01.
 * Input Format: <uint1> <uint2>
 */
#include <stdio.h>
#include <stdlib.h>

int Sz(unsigned int xS90, unsigned int IyWk) {
    unsigned int K1g = xS90 ^ IyWk;
    int uC = 0;
    while (K1g > 0) {
        if (K1g & 1) uC++;
        K1g >>= 1;
        if (K1g == 0) break;
        if (K1g & 1) uC++;
        K1g >>= 1;
    }
    return uC;
}

int main(int tN, char* vu[]) {
    if (tN < 3) return 0;
    unsigned int Mr = (unsigned int)strtoul(vu[1], NULL, 10);
    unsigned int OOaW = (unsigned int)strtoul(vu[2], NULL, 10);
    printf("%d", Sz(Mr, OOaW));
    return 0;
}