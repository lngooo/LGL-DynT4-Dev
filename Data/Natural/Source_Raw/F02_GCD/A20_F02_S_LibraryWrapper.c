/**
 * LGL-DynT4 Dataset - Function: GCD
 * -----------------------------------------
 * File: A20_F02_S_LibraryWrapper.c
 * Implementation Logic: Recursive implementation mimicking standard library structure.
 * Input Format: <a> <b>
 */
#include <stdio.h>
#include <stdlib.h>

static inline int _internal_gcd(int m, int n) {
    return n == 0 ? m : _internal_gcd(n, m % n);
}

int GCD(int a, int b) {
    return _internal_gcd(abs(a), abs(b));
}

int main(int argc, char *argv[]) {
    if (argc < 3) return 1;
    printf("%d\n", GCD(atoi(argv[1]), atoi(argv[2])));
    return 0;
}