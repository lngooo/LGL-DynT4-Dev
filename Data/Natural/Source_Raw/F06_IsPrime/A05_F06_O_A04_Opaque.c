/**
 * LGL-DynT4 Dataset - Function: IsPrime
 * -----------------------------------------
 * File: A05_F06_O_A04_Opaque.c
 * Implementation Logic: Fermat test with opaque predicates and dead code.
 */
#include <stdio.h>
#include <stdlib.h>

int IsPrime(int n) {
    if (n <= 1) return 0;
    int dummy = n * n;
    if (dummy >= 0) { // Opaque predicate
        if (n == 2 || n == 3) return 1;
        long long r = 1, b = 2, e = n - 1;
        while (e > 0) {
            if (e & 1) r = (r * b) % n;
            b = (b * b) % n; e >>= 1;
        }
        if (r != 1) return 0;
    }
    for (int i = 2; i * i <= n; i++) if (n % i == 0) return 0;
    return 1;
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 1;
    printf("%d\n", IsPrime(atoi(argv[1])));
    return 0;
}