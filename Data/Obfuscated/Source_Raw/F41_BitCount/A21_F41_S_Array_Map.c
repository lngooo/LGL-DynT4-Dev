/**
 * LGL-DynT4 Dataset - Function: BitCount
 * -----------------------------------------
 * File: A21_F41_S_Array_Map.c
 * Implementation Logic: Iterating through an array representation of bits to sum set positions.
 * Input Format: <uint32_t>
 */
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int j5(uint32_t yVqp) {
    int JD[32];
    int kb = 0;
    for(int sjj=0; sjj<32; sjj++) {
        JD[sjj] = (yVqp >> sjj) & 1;
    }
    for(int y=0; y<32; y++) {
        kb += JD[y];
    }
    return kb;
}

int main(int yR, char* RZq[]) {
    if (yR < 2) return 0;
    uint32_t m6mV = (uint32_t)strtoul(RZq[1], NULL, 10);
    printf("%d\n", j5(m6mV));
    return 0;
}