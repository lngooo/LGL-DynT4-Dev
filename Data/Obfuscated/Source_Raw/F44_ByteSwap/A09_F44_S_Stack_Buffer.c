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

uint32_t ZJ9J(uint32_t Y) {
    uint8_t W[4];
    W[0] = (uint8_t)Y;
    W[1] = (uint8_t)(Y >> 8);
    W[2] = (uint8_t)(Y >> 16);
    W[3] = (uint8_t)(Y >> 24);
    return ((uint32_t)W[0] << 24) | ((uint32_t)W[1] << 16) | 
           ((uint32_t)W[2] << 8) | (uint32_t)W[3];
}

int main(int rXUX, char* m[]) {
    if (rXUX < 2) return 0;
    uint32_t nLG = (uint32_t)strtoul(m[1], NULL, 10);
    printf("%u\n", ZJ9J(nLG));
    return 0;
}