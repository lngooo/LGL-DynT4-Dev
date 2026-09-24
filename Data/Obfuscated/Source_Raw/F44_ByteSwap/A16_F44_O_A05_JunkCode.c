/**
 * LGL-DynT4 Dataset - Function: ByteSwap
 * -----------------------------------------
 * File: A16_F44_O_A05_JunkCode.c
 * Implementation Logic: Data flow obfuscation derived from A05 by adding redundant calculations.
 * Input Format: <uint32_t>
 */
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

uint32_t b(uint32_t nNDf) {
    uint32_t WX = nNDf ^ 0xDEADBEEF;
    uint32_t P = ((nNDf << 16) & 0xFFFF0000);
    uint32_t kkfg = ((nNDf >> 16) & 0x0000FFFF);
    WX = (WX << 1) | (WX >> 31);
    uint32_t I0 = P | kkfg;
    I0 = ((I0 << 8) & 0xFF00FF00) | ((I0 >> 8) & 0x00FF00FF);
    return (I0 + (WX - WX));
}

int main(int KcVG, char* ePyF[]) {
    if (KcVG < 2) return 0;
    uint32_t lh = (uint32_t)strtoul(ePyF[1], NULL, 10);
    printf("%u\n", b(lh));
    return 0;
}