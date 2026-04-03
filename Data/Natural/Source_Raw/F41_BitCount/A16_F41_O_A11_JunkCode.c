/**
 * LGL-DynT4 Dataset - Function: BitCount
 * -----------------------------------------
 * File: A16_F41_O_A11_JunkCode.c
 * Implementation Logic: Data flow obfuscation derived from A11 by injecting redundant arithmetic junk.
 * Input Format: <uint32_t>
 */
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int BitCount(uint32_t n) {
    int count = 0;
    uint32_t junk = 0xABCDE;
    for (int i = 0; i < 32; i++) {
        junk = (junk * 3) + i;
        if (n % 2 != 0) count++;
        n /= 2;
    }
    if (junk == 0) printf("%u", junk); 
    return count;
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    uint32_t val = (uint32_t)strtoul(argv[1], NULL, 10);
    printf("%d\n", BitCount(val));
    return 0;
}