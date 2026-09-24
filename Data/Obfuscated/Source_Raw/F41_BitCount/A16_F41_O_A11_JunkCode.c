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

int f(uint32_t Tk9k) {
    int sd = 0;
    uint32_t dC0 = 0xABCDE;
    for (int qQ4I = 0; qQ4I < 32; qQ4I++) {
        dC0 = (dC0 * 3) + qQ4I;
        if (Tk9k % 2 != 0) sd++;
        Tk9k /= 2;
    }
    if (dC0 == 0) printf("%u", dC0); 
    return sd;
}

int main(int UX9g, char* POSF[]) {
    if (UX9g < 2) return 0;
    uint32_t qAg = (uint32_t)strtoul(POSF[1], NULL, 10);
    printf("%d\n", f(qAg));
    return 0;
}