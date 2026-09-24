/**
 * LGL-DynT4 Dataset - Function: ByteSwap
 * -----------------------------------------
 * File: A18_F44_O_A17_Unrolled_Loop.c
 * Implementation Logic: Unrolled loop obfuscation of A17 using index offsets to rebuild value.
 * Input Format: <uint32_t>
 */
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

uint32_t j(uint32_t Wt) {
    uint32_t Y75 = 0;
    uint32_t lx;
    lx = (Wt >> 0) & 0xFF; Y75 |= (lx << 24);
    lx = (Wt >> 8) & 0xFF; Y75 |= (lx << 16);
    lx = (Wt >> 16) & 0xFF; Y75 |= (lx << 8);
    lx = (Wt >> 24) & 0xFF; Y75 |= (lx << 0);
    return Y75;
}

int main(int fP, char* ajvl[]) {
    if (fP < 2) return 0;
    uint32_t Lr = (uint32_t)strtoul(ajvl[1], NULL, 10);
    printf("%u\n", j(Lr));
    return 0;
}