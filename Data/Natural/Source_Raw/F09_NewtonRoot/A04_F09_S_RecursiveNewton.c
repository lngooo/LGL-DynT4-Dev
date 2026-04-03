/**
 * LGL-DynT4 Dataset - Function: NewtonRoot
 * -----------------------------------------
 * File: A04_F09_S_RecursiveNewton.c
 * Implementation Logic: Newton-Raphson via recursion (Seed 2).
 */
#include <stdio.h>
#include <stdlib.h>

long nr_helper(long x, int n) {
    long next = (x + n / x) / 2;
    if (next >= x) return x;
    return nr_helper(next, n);
}

int NewtonRoot(int n) {
    if (n < 0) return -1;
    if (n < 2) return n;
    return (int)nr_helper(n, n);
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 1;
    printf("%d\n", NewtonRoot(atoi(argv[1])));
    return 0;
}