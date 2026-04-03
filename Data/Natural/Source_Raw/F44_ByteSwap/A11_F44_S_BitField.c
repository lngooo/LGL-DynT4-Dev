/**
 * LGL-DynT4 Dataset - Function: ByteSwap
 * -----------------------------------------
 * File: A11_F44_S_BitField.c
 * Implementation Logic: Using bit-field structures to explicitly define byte boundaries for swapping.
 * Input Format: <uint32_t>
 */
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

struct Bytes {
    uint32_t b0 : 8;
    uint32_t b1 : 8;
    uint32_t b2 : 8;
    uint32_t b3 : 8;
};

uint32_t ByteSwap(uint32_t x) {
    struct Bytes *src = (struct Bytes *)&x;
    uint32_t res;
    struct Bytes *dst = (struct Bytes *)&res;
    dst->b0 = src->b3;
    dst->b1 = src->b2;
    dst->b2 = src->b1;
    dst->b3 = src->b0;
    return res;
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    uint32_t val = (uint32_t)strtoul(argv[1], NULL, 10);
    printf("%u\n", ByteSwap(val));
    return 0;
}