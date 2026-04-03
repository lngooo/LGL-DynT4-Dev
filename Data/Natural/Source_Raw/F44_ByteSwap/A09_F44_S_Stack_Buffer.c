/**
 * LGL-DynT4 Dataset - Function: ByteSwap
 * -----------------------------------------
 * File: A09_F44_S_Stack_Buffer.c
 * Implementation Logic: Uses a temporary stack-allocated array to store and reassemble bytes.
 * Input Format: <uint32_t>
 */
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

uint32_t ByteSwap(uint32_t x) {
    uint8_t buf[4];
    buf[0] = (uint8_t)x;
    buf[1] = (uint8_t)(x >> 8);
    buf[2] = (uint8_t)(x >> 16);
    buf[3] = (uint8_t)(x >> 24);
    return ((uint32_t)buf[0] << 24) | ((uint32_t)buf[1] << 16) | 
           ((uint32_t)buf[2] << 8) | (uint32_t)buf[3];
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    uint32_t val = (uint32_t)strtoul(argv[1], NULL, 10);
    printf("%u\n", ByteSwap(val));
    return 0;
}