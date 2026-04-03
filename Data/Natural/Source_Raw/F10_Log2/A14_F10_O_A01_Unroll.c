/**
 * LGL-DynT4 Dataset - Function: Log2
 * -----------------------------------------
 * File: A14_F10_O_A01_Unroll.c
 * Implementation Logic: Unroll
 * Input Format: <integer>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int Log2(int n) {
    int r = 0;
    while (n >= 4) { n >>= 2; r += 2; }
    while (n >= 2) { n >>= 1; r += 1; }
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