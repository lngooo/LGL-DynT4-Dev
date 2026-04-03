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

int BitCount(uint32_t n) {
    int bits[32];
    int sum = 0;
    for(int i=0; i<32; i++) {
        bits[i] = (n >> i) & 1;
    }
    for(int j=0; j<32; j++) {
        sum += bits[j];
    }
    return sum;
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    uint32_t val = (uint32_t)strtoul(argv[1], NULL, 10);
    printf("%d\n", BitCount(val));
    return 0;
}