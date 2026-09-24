/**
 * LGL-DynT4 Dataset - Function: IsPowerOfTwo
 * -----------------------------------------
 * File: A06_F43_S_MaxDivisor.c
 * Implementation Logic: For 32-bit unsigned, 2^31 (2147483648) is the largest power of 2.
 * Any power of two must divide it evenly.
 * Input Format: <uint>
 */
#include <stdio.h>
#include <stdlib.h>

int dH2(unsigned int x) {
    unsigned int Mfq = 2147483648U;
    return (x > 0 && Mfq % x == 0);
}

int main(int DtrE, char* Wx[]) {
    if (DtrE < 2) return 0;
    unsigned int x = (unsigned int)strtoul(Wx[1], NULL, 10);
    printf("%d", dH2(x));
    return 0;
}