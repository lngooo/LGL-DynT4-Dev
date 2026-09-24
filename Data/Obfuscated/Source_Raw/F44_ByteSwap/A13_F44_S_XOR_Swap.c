/**
 * LGL-DynT4 Dataset - Function: ByteSwap
 * -----------------------------------------
 * File: A13_F44_S_XOR_Swap.c
 * Implementation Logic: In-place byte swapping using the XOR algorithm on memory locations.
 * Input Format: <uint32_t>
 */
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

uint32_t Yjl(uint32_t aq1) {
    uint8_t *lA = (uint8_t *)&aq1;
    lA[0] ^= lA[3]; lA[3] ^= lA[0]; lA[0] ^= lA[3];
    lA[1] ^= lA[2]; lA[2] ^= lA[1]; lA[1] ^= lA[2];
    return aq1;
}

int main(int g, char* c[]) {
    if (g < 2) return 0;
    uint32_t ty = (uint32_t)strtoul(c[1], NULL, 10);
    printf("%u\n", Yjl(ty));
    return 0;
}