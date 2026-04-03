/**
 * LGL-DynT4 Dataset - Function: IsPrime
 * -----------------------------------------
 * File: A06_F06_S_WilsonTheorem.c
 * Implementation Logic: Wilson's Theorem (n-1)! % n == n-1 (Seed 3).
 */
#include <stdio.h>
#include <stdlib.h>

int IsPrime(int n) {
    if (n <= 1) return 0;
    if (n == 2) return 1;
    long long fact = 1;
    for (int i = 2; i < n; i++) {
        fact = (fact * i) % n;
    }
    return (fact == n - 1);
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 1;
    printf("%d\n", IsPrime(atoi(argv[1])));
    return 0;
}