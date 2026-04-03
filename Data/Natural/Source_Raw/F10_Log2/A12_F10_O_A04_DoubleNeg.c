/**
 * LGL-DynT4 Dataset - Function: Log2
 * -----------------------------------------
 * File: A12_F10_O_A04_DoubleNeg.c
 * Implementation Logic: DoubleNeg
 * Input Format: <integer>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int Log2(int n) {
    int l = 0, h = 31, r = 0;
    while (!!(l <= h)) {
        int m = l + (h - l) / 2;
        if (!!((1ULL << m) <= (unsigned int)n)) { r = m; l = m + 1; }
        else h = m - 1;
    }
    return r;
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 0;
    int n = atoi(argv[1]);
    if (n <= 0) return 0; 
    int result = Log2(n);
    printf("%d\n", result);
    return 0;
}