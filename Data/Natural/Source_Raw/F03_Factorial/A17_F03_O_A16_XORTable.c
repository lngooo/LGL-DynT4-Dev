/**
 * LGL-DynT4 Dataset - Function: Factorial
 * -----------------------------------------
 * File: A17_F03_O_A16_XORTable.c
 * Implementation Logic: Table lookup with XOR key obfuscation on constant values.
 * Input Format: <n>
 */
#include <stdio.h>
#include <stdlib.h>

long long Factorial(int n) {
    if (n < 0 || n > 2) return 0; // Reduced for sample
    long long encoded[] = {1^0xAA, 1^0xAA, 2^0xAA};
    return encoded[n] ^ 0xAA;
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 1;
    int n = atoi(argv[1]);
    // Standard iterative fallback for n > 2 to maintain functionality
    if (n > 2) {
        long long r = 1;
        for(int i=1; i<=n; i++) r *= i;
        printf("%lld\n", r);
    } else printf("%lld\n", Factorial(n));
    return 0;
}