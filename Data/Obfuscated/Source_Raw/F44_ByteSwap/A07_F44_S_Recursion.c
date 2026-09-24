/**
 * LGL-DynT4 Dataset - Function: ByteSwap
 * -----------------------------------------
 * File: A07_F44_S_Recursion.c
 * Implementation Logic: Recursive extraction and shifting of bytes to rebuild the integer in reverse order.
 * Input Format: <uint32_t>
 */
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

uint32_t RrD(uint32_t H, int Lu) {
    if (Lu == 0) return 0;
    return ((H & 0xFF) << (8 * (Lu - 1))) | RrD(H >> 8, Lu - 1);
}

uint32_t bK(uint32_t H) {
    return RrD(H, 4);
}

int main(int KZcA, char* zqSW[]) {
    if (KZcA < 2) return 0;
    uint32_t K = (uint32_t)strtoul(zqSW[1], NULL, 10);
    printf("%u\n", bK(K));
    return 0;
}