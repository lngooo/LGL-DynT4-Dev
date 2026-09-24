/**
 * LGL-DynT4 Dataset - Function: HammingDistance
 * -----------------------------------------
 * File: A04_F42_S_Builtin.c
 * Implementation Logic: Leverages compiler intrinsic __builtin_popcount on the XOR result.
 * Input Format: <uint1> <uint2>
 */
#include <stdio.h>
#include <stdlib.h>

int oBpD(unsigned int PA, unsigned int NU) {
    return __builtin_popcount(PA ^ NU);
}

int main(int QW9, char* cB[]) {
    if (QW9 < 3) return 0;
    unsigned int evQq = (unsigned int)strtoul(cB[1], NULL, 10);
    unsigned int P = (unsigned int)strtoul(cB[2], NULL, 10);
    printf("%d", oBpD(evQq, P));
    return 0;
}