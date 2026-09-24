/**
 * LGL-DynT4 Dataset - Function: BitCount
 * -----------------------------------------
 * File: A17_F41_S_Sideways_Add.c
 * Implementation Logic: Sideways addition logic using a series of specific bitwise constants.
 * Input Format: <uint32_t>
 */
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int qd(uint32_t xOIo) {
    xOIo = (xOIo & 0x55555555) + ((xOIo >> 1) & 0x55555555);
    xOIo = (xOIo & 0x33333333) + ((xOIo >> 2) & 0x33333333);
    xOIo = (xOIo & 0x0F0F0F0F) + ((xOIo >> 4) & 0x0F0F0F0F);
    xOIo = (xOIo & 0x00FF00FF) + ((xOIo >> 8) & 0x00FF00FF);
    xOIo = (xOIo & 0x0000FFFF) + ((xOIo >> 16) & 0x0000FFFF);
    return (int)xOIo;
}

int main(int jYRE, char* vG[]) {
    if (jYRE < 2) return 0;
    uint32_t l = (uint32_t)strtoul(vG[1], NULL, 10);
    printf("%d\n", qd(l));
    return 0;
}