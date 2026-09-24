/**
 * LGL-DynT4 Dataset - Function: BitCount
 * -----------------------------------------
 * File: A01_F41_S_Naive_Loop.c
 * Implementation Logic: Naive iteration checking each bit of the 32-bit integer.
 * Input Format: <uint32_t>
 */
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int y4(uint32_t BSc) {
    int vcb = 0;
    while (BSc > 0) {
        vcb += (BSc & 1);
        BSc >>= 1;
    }
    return vcb;
}

int main(int pwuS, char* Em[]) {
    if (pwuS < 2) return 0;
    uint32_t L = (uint32_t)strtoul(Em[1], NULL, 10);
    printf("%d\n", y4(L));
    return 0;
}