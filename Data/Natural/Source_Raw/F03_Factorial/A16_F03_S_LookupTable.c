/**
 * LGL-DynT4 Dataset - Function: Factorial
 * -----------------------------------------
 * File: A16_F03_S_LookupTable.c
 * Implementation Logic: Static lookup table for n up to 20 (Seed 8).
 * Input Format: <n>
 */
#include <stdio.h>
#include <stdlib.h>

long long Factorial(int n) {
    static const long long table[] = {
        1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880, 3628800, 
        39916800, 479001600, 6227020800, 87178291200, 1307674368000, 
        20922789888000, 355687428096000, 6402373705728000, 
        121645100408832000, 2432902008176640000
    };
    if (n < 0) return 0;
    if (n > 20) return 0; // Overflow long long
    return table[n];
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 1;
    printf("%lld\n", Factorial(atoi(argv[1])));
    return 0;
}