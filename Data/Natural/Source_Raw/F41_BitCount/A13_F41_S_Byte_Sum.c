/**
 * LGL-DynT4 Dataset - Function: BitCount
 * -----------------------------------------
 * File: A13_F41_S_Byte_Sum.c
 * Implementation Logic: Processing integer as 4 separate bytes and summing their bits using a 256-entry table simulation.
 * Input Format: <uint32_t>
 */
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int countByte(uint8_t b) {
    int c = 0;
    for(int i=0; i<8; i++) { if((b >> i) & 1) c++; }
    return c;
}

int BitCount(uint32_t n) {
    return countByte((uint8_t)(n & 0xFF)) + 
           countByte((uint8_t)((n >> 8) & 0xFF)) + 
           countByte((uint8_t)((n >> 16) & 0xFF)) + 
           countByte((uint8_t)((n >> 24) & 0xFF));
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    uint32_t val = (uint32_t)strtoul(argv[1], NULL, 10);
    printf("%d\n", BitCount(val));
    return 0;
}