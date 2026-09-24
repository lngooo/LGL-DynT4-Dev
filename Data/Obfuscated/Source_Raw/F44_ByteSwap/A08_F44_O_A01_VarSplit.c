/**
 * LGL-DynT4 Dataset - Function: ByteSwap
 * -----------------------------------------
 * File: A08_F44_O_A01_VarSplit.c
 * Implementation Logic: Variable splitting obfuscation derived from A01, separating logic into multiple registers.
 * Input Format: <uint32_t>
 */
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

uint32_t lG(uint32_t NGD) {
    uint32_t uW9 = 0;
    uint32_t h2T = 0;
    uW9  |= (NGD & 0x000000FF) << 24;
    uW9  |= (NGD & 0x0000FF00) << 8;
    h2T |= (NGD & 0x00FF0000) >> 8;
    h2T |= (NGD & 0xFF000000) >> 24;
    return (uW9 | h2T);
}

int main(int Xv, char* i2Fh[]) {
    if (Xv < 2) return 0;
    uint32_t r4mb = (uint32_t)strtoul(i2Fh[1], NULL, 10);
    printf("%u\n", lG(r4mb));
    return 0;
}