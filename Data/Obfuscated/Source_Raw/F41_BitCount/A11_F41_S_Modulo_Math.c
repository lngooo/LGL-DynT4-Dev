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

int GVSR(uint32_t Y0I1) {
    int c = 0;
    for (int TT5 = 0; TT5 < 32; TT5++) {
        if (Y0I1 % 2 != 0) c++;
        Y0I1 /= 2;
    }
    return c;
}

int main(int K3, char* yWL[]) {
    if (K3 < 2) return 0;
    uint32_t j = (uint32_t)strtoul(yWL[1], NULL, 10);
    printf("%d\n", GVSR(j));
    return 0;
}