/**
 * LGL-DynT4 Dataset - Function: BitCount
 * -----------------------------------------
 * File: A05_F41_S_Lookup_Table.c
 * Implementation Logic: Precomputed 4-bit lookup table used to calculate bits nibble by nibble.
 * Input Format: <uint32_t>
 */
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

static const int Nhz[16] = {0, 1, 1, 2, 1, 2, 2, 3, 1, 2, 2, 3, 2, 3, 3, 4};

int WM(uint32_t T8) {
    int rLC = 0;
    for (int oK4 = 0; oK4 < 8; oK4++) {
        rLC += Nhz[T8 & 0xF];
        T8 >>= 4;
    }
    return rLC;
}

int main(int Aqb, char* jo[]) {
    if (Aqb < 2) return 0;
    uint32_t L = (uint32_t)strtoul(jo[1], NULL, 10);
    printf("%d\n", WM(L));
    return 0;
}