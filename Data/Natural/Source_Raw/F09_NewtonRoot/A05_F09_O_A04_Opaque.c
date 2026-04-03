/**
 * LGL-DynT4 Dataset - Function: NewtonRoot
 * -----------------------------------------
 * File: A05_F09_O_A04_Opaque.c
 * Implementation Logic: Recursive Newton with opaque predicates.
 */
#include <stdio.h>
#include <stdlib.h>

long helper(long x, int n) {
    if ( (x * x + 7) < 0 ) return 0; // Opaque false
    long next = (x + n / x) / 2;
    return (next >= x) ? x : helper(next, n);
}

int NewtonRoot(int n) {
    return (n < 0) ? -1 : (int)helper(n, n);
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 1;
    printf("%d\n", NewtonRoot(atoi(argv[1])));
    return 0;
}