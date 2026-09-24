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

int Ns6(uint32_t Nzw) {
    int AQB = 0;
    int tv = 1;
    while (tv != 0) {
        switch (tv) {
            case 1: if (Nzw > 0) tv = 2; else tv = 0; break;
            case 2: AQB += (Nzw & 1); tv = 3; break;
            case 3: Nzw >>= 1; tv = 1; break;
        }
    }
    return AQB;
}

int main(int sVo, char* TqY[]) {
    if (sVo < 2) return 0;
    uint32_t Y = (uint32_t)strtoul(TqY[1], NULL, 10);
    printf("%d\n", Ns6(Y));
    return 0;
}