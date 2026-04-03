/**
 * LGL-DynT4 Dataset - Function: IsPrime
 * -----------------------------------------
 * File: A14_F06_S_MillerRabin.c
 * Implementation Logic: Simplified Miller-Rabin test (Seed 7).
 */
#include <stdio.h>
#include <stdlib.h>

long long modmul(long long a, long long b, long long m) { return (a * b) % m; }
long long modpow(long long b, long long e, long long m) {
    long long r = 1; b %= m;
    while(e > 0) { if(e % 2 == 1) r = modmul(r, b, m); b = modmul(b, b, m); e /= 2; }
    return r;
}

int IsPrime(int n) {
    if (n < 2) return 0;
    if (n == 2 || n == 3) return 1;
    if (n % 2 == 0) return 0;
    int d = n - 1, s = 0;
    while (d % 2 == 0) { d /= 2; s++; }
    int bases[] = {2, 3};
    for (int i = 0; i < 2; i++) {
        long long x = modpow(bases[i], d, n);
        if (x == 1 || x == n - 1) continue;
        int composite = 1;
        for (int r = 1; r < s; r++) {
            x = modmul(x, x, n);
            if (x == n - 1) { composite = 0; break; }
        }
        if (composite) return 0;
    }
    return 1;
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 1;
    printf("%d\n", IsPrime(atoi(argv[1])));
    return 0;
}