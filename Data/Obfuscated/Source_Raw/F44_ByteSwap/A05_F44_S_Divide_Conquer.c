/**
 * LGL-DynT4 Dataset - Function: ByteSwap
 * -----------------------------------------
 * File: A05_F44_S_Divide_Conquer.c
 * Implementation Logic: Divide and conquer algorithm swapping 16-bit blocks then 8-bit blocks.
 * Input Format: <uint32_t>
 */
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

uint32_t Db(uint32_t IM) {
    IM = ((IM << 16) & 0xFFFF0000) | ((IM >> 16) & 0x0000FFFF);
    IM = ((IM << 8) & 0xFF00FF00) | ((IM >> 8) & 0x00FF00FF);
    return IM;
}

int main(int XPyA, char* v[]) {
    if (XPyA < 2) return 0;
    uint32_t sl = (uint32_t)strtoul(v[1], NULL, 10);
    printf("%u\n", Db(sl));
    return 0;
}