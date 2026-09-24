/**
 * LGL-DynT4 Dataset - Function: ByteSwap
 * -----------------------------------------
 * File: A12_F44_O_A09_Arithmetic.c
 * Implementation Logic: Instruction replacement obfuscation derived from A09, using multiplication/division instead of shifts.
 * Input Format: <uint32_t>
 */
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

uint32_t JP(uint32_t d) {
    uint32_t TNtg = d % 256;
    uint32_t jW = (d / 256) % 256;
    uint32_t I8D = (d / 65536) % 256;
    uint32_t L = (d / 16777216);
    return TNtg * 16777216 + jW * 65536 + I8D * 256 + L;
}

int main(int jVyq, char* nllx[]) {
    if (jVyq < 2) return 0;
    uint32_t F = (uint32_t)strtoul(nllx[1], NULL, 10);
    printf("%u\n", JP(F));
    return 0;
}