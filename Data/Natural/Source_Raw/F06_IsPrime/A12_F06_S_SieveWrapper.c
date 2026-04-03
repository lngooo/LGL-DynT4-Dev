/**
 * LGL-DynT4 Dataset - Function: IsPrime
 * -----------------------------------------
 * File: A12_F06_S_SieveWrapper.c
 * Implementation Logic: Local Sieve of Eratosthenes for primality (Seed 6).
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int IsPrime(int n) {
    if (n < 2) return 0;
    char *sieve = (char *)malloc(n + 1);
    memset(sieve, 1, n + 1);
    for (int p = 2; p * p <= n; p++) {
        if (sieve[p]) {
            for (int i = p * p; i <= n; i += p) sieve[i] = 0;
        }
    }
    int res = sieve[n];
    free(sieve);
    return res;
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 1;
    printf("%d\n", IsPrime(atoi(argv[1])));
    return 0;
}