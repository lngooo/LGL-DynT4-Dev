/**
 * LGL-DynT4 Dataset - Function: ByteSwap
 * -----------------------------------------
 * File: A04_F44_O_A01_Flattening.c
 * Implementation Logic: Control-flow flattening variant of A01 using a state machine and switch-case.
 * Input Format: <uint32_t>
 */
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

uint32_t LF(uint32_t ww) {
    uint32_t g = 0;
    int spz9 = 1;
    while (spz9 != 0) {
        switch (spz9) {
            case 1: g |= (ww & 0x000000FF) << 24; spz9 = 2; break;
            case 2: g |= (ww & 0x0000FF00) << 8;  spz9 = 3; break;
            case 3: g |= (ww & 0x00FF0000) >> 8;  spz9 = 4; break;
            case 4: g |= (ww & 0xFF000000) >> 24; spz9 = 0; break;
        }
    }
    return g;
}

int main(int Q, char* G6[]) {
    if (Q < 2) return 0;
    uint32_t EF = (uint32_t)strtoul(G6[1], NULL, 10);
    printf("%u\n", LF(EF));
    return 0;
}