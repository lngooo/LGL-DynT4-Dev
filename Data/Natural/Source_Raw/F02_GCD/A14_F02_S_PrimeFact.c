/**
 * LGL-DynT4 Dataset - Function: GCD
 * -----------------------------------------
 * File: A14_F02_S_PrimeFact.c
 * Implementation Logic: GCD via prime factorization comparison (Seed 7).
 * Input Format: <a> <b>
 */
#include <stdio.h>
#include <stdlib.h>

int GCD(int a, int b) {
    a = abs(a); b = abs(b);
    if (a == 0 || b == 0) return a | b;
    int res = 1, d = 2;
    while (d <= a && d <= b) {
        if (a % d == 0 && b % d == 0) {
            res *= d; a /= d; b /= d;
        } else d++;
    }
    return res;
}

int main(int argc, char *argv[]) {
    if (argc < 3) return 1;
    printf("%d\n", GCD(atoi(argv[1]), atoi(argv[2])));
    return 0;
}