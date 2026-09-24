/**
 * LGL-DynT4 Dataset - Function: ByteSwap
 * -----------------------------------------
 * File: A20_F44_O_A19_PointerIndirection.c
 * Implementation Logic: Multi-level pointer indirection obfuscation derived from A19.
 * Input Format: <uint32_t>
 */
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

uint32_t P(uint32_t M0tU) {
    uint32_t R;
    uint8_t *r8 = (uint8_t *)&M0tU;
    uint8_t *SwL = (uint8_t *)&R;
    uint8_t **hyc = &r8;
    uint8_t **gg = &SwL;
    (*gg)[0] = (*hyc)[3];
    (*gg)[1] = (*hyc)[2];
    (*gg)[2] = (*hyc)[1];
    (*gg)[3] = (*hyc)[0];
    return R;
}

int main(int u, char* k[]) {
    if (u < 2) return 0;
    uint32_t I4zW = (uint32_t)strtoul(k[1], NULL, 10);
    printf("%u\n", P(I4zW));
    return 0;
}