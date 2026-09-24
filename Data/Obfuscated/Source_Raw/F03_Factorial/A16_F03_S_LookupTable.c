/**
 * LGL-DynT4 Dataset - Function: Factorial
 * -----------------------------------------
 * File: A16_F03_S_LookupTable.c
 * Implementation Logic: Static lookup table for n up to 20 (Seed 8).
 * Input Format: <n>
 */
#include <stdio.h>
#include <stdlib.h>

long long cLxU(int f6) {
    static const long long uVA[] = {
        1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880, 3628800, 
        39916800, 479001600, 6227020800, 87178291200, 1307674368000, 
        20922789888000, 355687428096000, 6402373705728000, 
        121645100408832000, 2432902008176640000
    };
    if (f6 < 0) return 0;
    if (f6 > 20) return 0; // Overflow long long
    return uVA[f6];
}

int main(int mi, char *HG6[]) {
    if (mi < 2) return 1;
    printf("%lld\n", cLxU(atoi(HG6[1])));
    return 0;
}