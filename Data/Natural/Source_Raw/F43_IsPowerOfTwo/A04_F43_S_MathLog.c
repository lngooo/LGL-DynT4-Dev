/**
 * LGL-DynT4 Dataset - Function: IsPowerOfTwo
 * -----------------------------------------
 * File: A04_F43_S_MathLog.c
 * Implementation Logic: Using math logarithms. log2(n) must be an integer.
 * Input Format: <uint>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int IsPowerOfTwo(unsigned int n) {
    if (n == 0) return 0;
    double l = log2((double)n);
    return (l == (int)l);
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    unsigned int n = (unsigned int)strtoul(argv[1], NULL, 10);
    printf("%d", IsPowerOfTwo(n));
    return 0;
}