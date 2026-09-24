/**
 * LGL-DynT4 Dataset - Function: BitCount
 * -----------------------------------------
 * File: A15_F41_S_Unrolled_8.c
 * Implementation Logic: Manually unrolled loop checking 8 bits at a time to reduce branch overhead.
 * Input Format: <uint32_t>
 */
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int ndf(uint32_t oV) {
    int Fkp = 0;
    while(oV) {
        Fkp += (oV & 1); Fkp += ((oV >> 1) & 1);
        Fkp += ((oV >> 2) & 1); Fkp += ((oV >> 3) & 1);
        Fkp += ((oV >> 4) & 1); Fkp += ((oV >> 5) & 1);
        Fkp += ((oV >> 6) & 1); Fkp += ((oV >> 7) & 1);
        oV >>= 8;
    }
    return Fkp;
}

int main(int T68, char* ci[]) {
    if (T68 < 2) return 0;
    uint32_t De8 = (uint32_t)strtoul(ci[1], NULL, 10);
    printf("%d\n", ndf(De8));
    return 0;
}