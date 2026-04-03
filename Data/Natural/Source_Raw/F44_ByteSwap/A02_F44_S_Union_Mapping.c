/**
 * LGL-DynT4 Dataset - Function: ByteSwap
 * -----------------------------------------
 * File: A02_F44_S_Union_Mapping.c
 * Implementation Logic: Utilizes a union to map a 32-bit integer to a 4-byte array for direct memory swapping.
 * Input Format: <uint32_t>
 */
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

uint32_t ByteSwap(uint32_t x) {
    union {
        uint32_t val;
        uint8_t bytes[4];
    } src, dst;
    src.val = x;
    dst.bytes[0] = src.bytes[3];
    dst.bytes[1] = src.bytes[2];
    dst.bytes[2] = src.bytes[1];
    dst.bytes[3] = src.bytes[0];
    return dst.val;
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    uint32_t val = (uint32_t)strtoul(argv[1], NULL, 10);
    printf("%u\n", ByteSwap(val));
    return 0;
}