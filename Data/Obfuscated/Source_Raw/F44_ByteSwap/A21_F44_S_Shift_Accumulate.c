/**
 * LGL-DynT4 Dataset - Function: ByteSwap
 * -----------------------------------------
 * File: A21_F44_S_Shift_Accumulate.c
 * Implementation Logic: Iterative shift-right and shift-left accumulation to reverse byte order.
 * Input Format: <uint32_t>
 */
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

uint32_t UMZ(uint32_t qEJB) {
    uint32_t inDy = 0;
    for (int a = 0; a < 4; a++) {
        inDy = (inDy << 8) | (qEJB & 0xFF);
        qEJB >>= 8;
    }
    return inDy;
}

int main(int tDq, char* G[]) {
    if (tDq < 2) return 0;
    uint32_t C0 = (uint32_t)strtoul(G[1], NULL, 10);
    printf("%u\n", UMZ(C0));
    return 0;
}