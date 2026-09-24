/**
 * LGL-DynT4 Dataset - Function: ByteSwap
 * -----------------------------------------
 * File: A02_F44_S_Union_Mapping.c
 * Implementation Logic: Utilizes a union to map a 32-bit integer to a 4-byte array for direct memory swapping.
 * Input Format: <uint32_t>
 */
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

uint32_t c(uint32_t ud4) {
    union {
        uint32_t tn;
        uint8_t nze5[4];
    } SYY, nyWz;
    SYY.tn = ud4;
    nyWz.nze5[0] = SYY.nze5[3];
    nyWz.nze5[1] = SYY.nze5[2];
    nyWz.nze5[2] = SYY.nze5[1];
    nyWz.nze5[3] = SYY.nze5[0];
    return nyWz.tn;
}

int main(int Cf, char* Sw[]) {
    if (Cf < 2) return 0;
    uint32_t tn = (uint32_t)strtoul(Sw[1], NULL, 10);
    printf("%u\n", c(tn));
    return 0;
}