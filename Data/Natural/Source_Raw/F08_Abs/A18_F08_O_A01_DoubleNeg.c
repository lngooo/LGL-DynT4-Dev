/**
 * LGL-DynT4 Dataset - Function: Abs
 * -----------------------------------------
 * File: A18_F08_O_A01_DoubleNeg.c
 * Implementation Logic: Recursive-style absolute.
 */
#include <stdio.h>
#include <stdlib.h>

int helper(int n) {
    return -n;
}

int Abs(int n) {
    if (n < 0) return helper(n);
    return n;
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 1;
    printf("%d\n", Abs(atoi(argv[1])));
    return 0;
}