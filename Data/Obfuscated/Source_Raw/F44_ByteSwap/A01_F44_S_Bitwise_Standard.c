/**
 * LGL-DynT4 Dataset - Function: ByteSwap
 * -----------------------------------------
 * File: A01_F44_S_Bitwise_Standard.c
 * Implementation Logic: Standard bitwise manipulation using masks and logical shifts to rearrange bytes.
 * Input Format: <uint32_t>
 */
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

uint32_t Ii(uint32_t tiP3) {
    return ((tiP3 & 0x000000FF) << 24) |
           ((tiP3 & 0x0000FF00) << 8)  |
           ((tiP3 & 0x00FF0000) >> 8)  |
           ((tiP3 & 0xFF000000) >> 24);
}

int main(int whp, char* cKdS[]) {
    if (whp < 2) return 0;
    uint32_t IZg = (uint32_t)strtoul(cKdS[1], NULL, 10);
    printf("%u\n", Ii(IZg));
    return 0;
}