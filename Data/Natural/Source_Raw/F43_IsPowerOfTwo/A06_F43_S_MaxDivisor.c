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

int IsPowerOfTwo(unsigned int n) {
    unsigned int max_pow = 2147483648U;
    return (n > 0 && max_pow % n == 0);
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    unsigned int n = (unsigned int)strtoul(argv[1], NULL, 10);
    printf("%d", IsPowerOfTwo(n));
    return 0;
}