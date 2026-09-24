/**
 * LGL-DynT4 Dataset - Function: ByteSwap
 * -----------------------------------------
 * File: A03_F44_S_Pointer_Arithmetic.c
 * Implementation Logic: Accesses individual bytes via uint8_t pointer casting and swaps them in a loop.
 * Input Format: <uint32_t>
 */
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

uint32_t Kpnw(uint32_t ZN) {
    uint32_t T;
    uint8_t *O = (uint8_t *)&ZN;
    uint8_t *Iu3 = (uint8_t *)&T;
    for (int fxO9 = 0; fxO9 < 4; fxO9++) {
        Iu3[fxO9] = O[3 - fxO9];
    }
    return T;
}

int main(int CQp, char* P[]) {
    if (CQp < 2) return 0;
    uint32_t y0y = (uint32_t)strtoul(P[1], NULL, 10);
    printf("%u\n", Kpnw(y0y));
    return 0;
}