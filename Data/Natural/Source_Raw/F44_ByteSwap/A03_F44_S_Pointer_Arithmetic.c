/**
 * LGL-DynT4 Dataset - Function: ByteSwap
 * -----------------------------------------
 * File: A03_F44_S_Pointer_Arithmetic.c
 * Implementation Logic: Accesses individual bytes via uint8_t pointer casting and swaps them in a loop.
 * Input Format: <uint32_t>
 */
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

uint32_t ByteSwap(uint32_t x) {
    uint32_t res;
    uint8_t *s = (uint8_t *)&x;
    uint8_t *d = (uint8_t *)&res;
    for (int i = 0; i < 4; i++) {
        d[i] = s[3 - i];
    }
    return res;
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    uint32_t val = (uint32_t)strtoul(argv[1], NULL, 10);
    printf("%u\n", ByteSwap(val));
    return 0;
}