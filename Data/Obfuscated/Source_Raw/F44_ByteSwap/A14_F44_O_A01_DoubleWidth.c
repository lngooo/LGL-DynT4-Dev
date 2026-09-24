/**
 * LGL-DynT4 Dataset - Function: ByteSwap
 * -----------------------------------------
 * File: A14_F44_O_A01_DoubleWidth.c
 * Implementation Logic: Instruction replacement using uint64_t for intermediate storage to mask logic.
 * Input Format: <uint32_t>
 */
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

uint32_t gSyn(uint32_t E) {
    uint64_t j = E;
    uint64_t CSPk = 0;
    CSPk |= (j & 0xFF) << 24;
    CSPk |= (j & 0xFF00) << 8;
    CSPk |= (j & 0xFF0000) >> 8;
    CSPk |= (j & 0xFF000000) >> 24;
    return (uint32_t)CSPk;
}

int main(int c, char* XYp[]) {
    if (c < 2) return 0;
    uint32_t ZAUi = (uint32_t)strtoul(XYp[1], NULL, 10);
    printf("%u\n", gSyn(ZAUi));
    return 0;
}