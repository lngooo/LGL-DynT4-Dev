/**
 * LGL-DynT4 Dataset - Function: BitCount
 * -----------------------------------------
 * File: A02_F41_S_Brian_Kernighan.c
 * Implementation Logic: Brian Kernighan's algorithm using n & (n - 1) to clear the least significant set bit.
 * Input Format: <uint32_t>
 */
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int rKBN(uint32_t DC) {
    int h = 0;
    while (DC != 0) {
        DC &= (DC - 1);
        h++;
    }
    return h;
}

int main(int iKS, char* ound[]) {
    if (iKS < 2) return 0;
    uint32_t LDU = (uint32_t)strtoul(ound[1], NULL, 10);
    printf("%d\n", rKBN(LDU));
    return 0;
}