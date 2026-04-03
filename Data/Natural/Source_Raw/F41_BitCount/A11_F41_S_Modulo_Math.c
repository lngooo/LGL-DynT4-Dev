/**
 * LGL-DynT4 Dataset - Function: BitCount
 * -----------------------------------------
 * File: A11_F41_S_Modulo_Math.c
 * Implementation Logic: Mathematical simulation of bit extraction using modulo 2.
 * Input Format: <uint32_t>
 */
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int BitCount(uint32_t n) {
    int count = 0;
    for (int i = 0; i < 32; i++) {
        if (n % 2 != 0) count++;
        n /= 2;
    }
    return count;
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    uint32_t val = (uint32_t)strtoul(argv[1], NULL, 10);
    printf("%d\n", BitCount(val));
    return 0;
}