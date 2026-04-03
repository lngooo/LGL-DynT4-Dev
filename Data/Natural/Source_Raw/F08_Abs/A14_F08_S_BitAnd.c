/**
 * LGL-DynT4 Dataset - Function: Abs
 * -----------------------------------------
 * File: A14_F08_S_BitAnd.c
 * Implementation Logic: Clear sign bit for floating-point style (concept) (Seed 7).
 */
#include <stdio.h>
#include <stdlib.h>

int Abs(int n) {
    if (n == -2147483648) return 2147483647; // Handle INT_MIN overflow
    if (n >= 0) return n;
    return (n ^ 0xFFFFFFFF) + 1;
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 1;
    printf("%d\n", Abs(atoi(argv[1])));
    return 0;
}