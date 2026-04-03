/**
 * LGL-DynT4 Dataset - Function: ByteSwap
 * -----------------------------------------
 * File: A04_F44_O_A01_Flattening.c
 * Implementation Logic: Control-flow flattening variant of A01 using a state machine and switch-case.
 * Input Format: <uint32_t>
 */
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

uint32_t ByteSwap(uint32_t x) {
    uint32_t res = 0;
    int state = 1;
    while (state != 0) {
        switch (state) {
            case 1: res |= (x & 0x000000FF) << 24; state = 2; break;
            case 2: res |= (x & 0x0000FF00) << 8;  state = 3; break;
            case 3: res |= (x & 0x00FF0000) >> 8;  state = 4; break;
            case 4: res |= (x & 0xFF000000) >> 24; state = 0; break;
        }
    }
    return res;
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    uint32_t val = (uint32_t)strtoul(argv[1], NULL, 10);
    printf("%u\n", ByteSwap(val));
    return 0;
}