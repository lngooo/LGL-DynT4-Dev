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

uint32_t ByteSwap(uint32_t x) {
    uint32_t res = 0;
    for (int i = 0; i < 4; i++) {
        res = (res << 8) | (x & 0xFF);
        x >>= 8;
    }
    return res;
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    uint32_t val = (uint32_t)strtoul(argv[1], NULL, 10);
    printf("%u\n", ByteSwap(val));
    return 0;
}