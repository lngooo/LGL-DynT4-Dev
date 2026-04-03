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

uint32_t ByteSwap(uint32_t x) {
    uint32_t res;
    uint8_t *start = (uint8_t *)&x;
    uint8_t *end = (uint8_t *)&res;
    for(int i=0; i<4; i++) {
        *(end + i) = *(start + (3 - i));
    }
    return res;
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    uint32_t val = (uint32_t)strtoul(argv[1], NULL, 10);
    printf("%u\n", ByteSwap(val));
    return 0;
}