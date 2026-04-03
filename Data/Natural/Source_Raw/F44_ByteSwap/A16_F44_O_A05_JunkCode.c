/**
 * LGL-DynT4 Dataset - Function: ByteSwap
 * -----------------------------------------
 * File: A16_F44_O_A05_JunkCode.c
 * Implementation Logic: Data flow obfuscation derived from A05 by adding redundant calculations.
 * Input Format: <uint32_t>
 */
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

uint32_t ByteSwap(uint32_t x) {
    uint32_t junk = x ^ 0xDEADBEEF;
    uint32_t t1 = ((x << 16) & 0xFFFF0000);
    uint32_t t2 = ((x >> 16) & 0x0000FFFF);
    junk = (junk << 1) | (junk >> 31);
    uint32_t res = t1 | t2;
    res = ((res << 8) & 0xFF00FF00) | ((res >> 8) & 0x00FF00FF);
    return (res + (junk - junk));
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    uint32_t val = (uint32_t)strtoul(argv[1], NULL, 10);
    printf("%u\n", ByteSwap(val));
    return 0;
}