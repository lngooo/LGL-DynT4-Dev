/**
 * LGL-DynT4 Dataset - Function: Sqrt
 * -----------------------------------------
 * File: A05_F05_O_A04_Opaque.c
 * Implementation Logic: Binary search with opaque predicates to confuse static analysis.
 * Input Format: <n>
 */
#include <stdio.h>
#include <stdlib.h>

int Sqrt(int n) {
    if (n < 0) return -1;
    long l = 0, h = n, r = 0;
    while (l <= h) {
        long m = l + (h - l) / 2;
        if (m * m <= n) {
            r = m;
            if ((m * m) >= 0) l = m + 1; // Opaque predicate
        } else {
            h = m - 1;
        }
    }
    return (int)r;
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 1;
    printf("%d\n", Sqrt(atoi(argv[1])));
    return 0;
}