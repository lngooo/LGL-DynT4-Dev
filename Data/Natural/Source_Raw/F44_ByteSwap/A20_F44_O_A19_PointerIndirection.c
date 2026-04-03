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

uint32_t ByteSwap(uint32_t x) {
    uint32_t res;
    uint8_t *p_x = (uint8_t *)&x;
    uint8_t *p_res = (uint8_t *)&res;
    uint8_t **pp_x = &p_x;
    uint8_t **pp_res = &p_res;
    (*pp_res)[0] = (*pp_x)[3];
    (*pp_res)[1] = (*pp_x)[2];
    (*pp_res)[2] = (*pp_x)[1];
    (*pp_res)[3] = (*pp_x)[0];
    return res;
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    uint32_t val = (uint32_t)strtoul(argv[1], NULL, 10);
    printf("%u\n", ByteSwap(val));
    return 0;
}