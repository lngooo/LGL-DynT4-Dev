/**
 * LGL-DynT4 Dataset - Function: IsPrime
 * -----------------------------------------
 * File: A04_F06_S_FermatTest.c
 * Implementation Logic: Fermat's Little Theorem (Probabilistic Seed 2).
 */
#include <stdio.h>
#include <stdlib.h>

long long power(long long base, long long exp, long long mod) {
    long long res = 1;
    base %= mod;
    while (exp > 0) {
        if (exp % 2 == 1) res = (res * base) % mod;
        base = (base * base) % mod;
        exp /= 2;
    }
    return res;
}

int IsPrime(int n) {
    if (n <= 1) return 0;
    if (n <= 3) return 1;
    // Using base 2 for deterministic small n check
    if (power(2, n - 1, n) != 1) return 0;
    // Additional check for Carmichael numbers (simplified)
    for (int i = 2; i * i <= n; i++) if (n % i == 0) return 0;
    return 1;
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 1;
    printf("%d\n", IsPrime(atoi(argv[1])));
    return 0;
}