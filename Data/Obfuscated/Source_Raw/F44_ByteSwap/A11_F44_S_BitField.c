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

struct blIi {
    uint32_t iwqY : 8;
    uint32_t c7 : 8;
    uint32_t eP2 : 8;
    uint32_t o5 : 8;
};

uint32_t N(uint32_t U) {
    struct blIi *CDi = (struct blIi *)&U;
    uint32_t r;
    struct blIi *ebd = (struct blIi *)&r;
    ebd->iwqY = CDi->o5;
    ebd->c7 = CDi->eP2;
    ebd->eP2 = CDi->c7;
    ebd->o5 = CDi->iwqY;
    return r;
}

int main(int SL1T, char* gKn[]) {
    if (SL1T < 2) return 0;
    uint32_t rx = (uint32_t)strtoul(gKn[1], NULL, 10);
    printf("%u\n", N(rx));
    return 0;
}