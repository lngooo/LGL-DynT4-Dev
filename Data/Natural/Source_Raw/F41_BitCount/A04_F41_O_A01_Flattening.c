/**
 * LGL-DynT4 Dataset - Function: BitCount
 * -----------------------------------------
 * File: A04_F41_O_A01_Flattening.c
 * Implementation Logic: Control-flow flattening variant of A01 using a state machine and switch-case.
 * Input Format: <uint32_t>
 */
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int BitCount(uint32_t n) {
    int count = 0;
    int state = 1;
    while (state != 0) {
        switch (state) {
            case 1: if (n > 0) state = 2; else state = 0; break;
            case 2: count += (n & 1); state = 3; break;
            case 3: n >>= 1; state = 1; break;
        }
    }
    return count;
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    uint32_t val = (uint32_t)strtoul(argv[1], NULL, 10);
    printf("%d\n", BitCount(val));
    return 0;
}