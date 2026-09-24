/**
 * LGL-DynT4 Dataset - Function: ByteSwap
 * -----------------------------------------
 * File: A19_F44_S_DuoPointer.c
 * Implementation Logic: Two-pointer approach swapping bytes from both ends of the memory block.
 * Input Format: <uint32_t>
 */
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

uint32_t j(uint32_t L) {
    uint32_t tV0;
    uint8_t *Z1E4 = (uint8_t *)&L;
    uint8_t *yN = (uint8_t *)&tV0;
    for(int n=0; n<4; n++) {
        *(yN + n) = *(Z1E4 + (3 - n));
    }
    return tV0;
}

int main(int AP, char* ugo[]) {
    if (AP < 2) return 0;
    uint32_t EA = (uint32_t)strtoul(ugo[1], NULL, 10);
    printf("%u\n", j(EA));
    return 0;
}