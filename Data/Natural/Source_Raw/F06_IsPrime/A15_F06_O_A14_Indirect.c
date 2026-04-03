/**
 * LGL-DynT4 Dataset - Function: IsPrime
 * -----------------------------------------
 * File: A15_F06_O_A14_Indirect.c
 * Implementation Logic: Miller-Rabin with function pointers for modular arithmetic.
 */
#include <stdio.h>
#include <stdlib.h>

typedef long long (*calc)(long long, long long, long long);
long long mm(long long a, long long b, long long m) { return (a * b) % m; }

int IsPrime(int n) {
    if (n < 4) return n > 1;
    calc f = mm;
    int d = n - 1;
    while (!(d & 1)) d >>= 1;
    long long x = 1, base = 2;
    for(; d > 0; d >>= 1) { if(d & 1) x = f(x, base, n); base = f(base, base, n); }
    if (x == 1 || x == n - 1) return 1;
    for (int i = 2; i * i <= n; i++) if (n % i == 0) return 0;
    return 1;
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 1;
    printf("%d\n", IsPrime(atoi(argv[1])));
    return 0;
}