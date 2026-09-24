/**
 * LGL-DynT4 Dataset - Function: BitCount
 * -----------------------------------------
 * File: A19_F41_S_Popcount_Manual.c
 * Implementation Logic: Manual bit manipulation mimicking HAKMEM item 169 for popcount.
 * Input Format: <uint32_t>
 */
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int KX8e(uint32_t gi) {
    uint32_t f;
    f = gi - ((gi >> 1) & 033333333333) - ((gi >> 2) & 011111111111);
    return ((f + (f >> 3)) & 030707070707) % 63;
}

int main(int h, char* GcpS[]) {
    if (h < 2) return 0;
    uint32_t SJA = (uint32_t)strtoul(GcpS[1], NULL, 10);
    printf("%d\n", KX8e(SJA));
    return 0;
}