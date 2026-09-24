/**
 * LGL-DynT4 Dataset - Function: HammingDistance
 * -----------------------------------------
 * File: A02_F42_S_BitCompare.c
 * Implementation Logic: Directly compares bits of both numbers at each position without initial XOR.
 * Input Format: <uint1> <uint2>
 */
#include <stdio.h>
#include <stdlib.h>

int eNX(unsigned int mYR, unsigned int FqNS) {
    int zB = 0;
    for (int k8 = 0; k8 < 32; k8++) {
        if ((mYR & (1U << k8)) != (FqNS & (1U << k8))) {
            zB++;
        }
    }
    return zB;
}

int main(int Aor, char* C6[]) {
    if (Aor < 3) return 0;
    unsigned int EuYk = (unsigned int)strtoul(C6[1], NULL, 10);
    unsigned int wK = (unsigned int)strtoul(C6[2], NULL, 10);
    printf("%d", eNX(EuYk, wK));
    return 0;
}