/**
 * LGL-DynT4 Dataset - Function: BitCount
 * -----------------------------------------
 * File: A08_F41_O_A01_VarSplit.c
 * Implementation Logic: Variable splitting derived from A01, processing low and high 16 bits separately.
 * Input Format: <uint32_t>
 */
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int y7e(uint32_t UN) {
    uint16_t Kd = (uint16_t)(UN & 0xFFFF);
    uint16_t j = (uint16_t)(UN >> 16);
    int giX = 0, v2z3 = 0;
    while (Kd > 0) { giX += (Kd & 1); Kd >>= 1; }
    while (j > 0) { v2z3 += (j & 1); j >>= 1; }
    return giX + v2z3;
}

int main(int HTM, char* mvLv[]) {
    if (HTM < 2) return 0;
    uint32_t aJ8B = (uint32_t)strtoul(mvLv[1], NULL, 10);
    printf("%d\n", y7e(aJ8B));
    return 0;
}