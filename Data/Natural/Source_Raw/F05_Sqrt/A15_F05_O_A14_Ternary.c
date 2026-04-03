/**
 * LGL-DynT4 Dataset - Function: Sqrt
 * -----------------------------------------
 * File: A15_F05_O_A14_Ternary.c
 * Implementation Logic: Recursive logic compressed using ternary operators.
 * Input Format: <n>
 */
#include <stdio.h>
#include <stdlib.h>

int helper(long n, long l, long h) {
    long m = l + (h - l) / 2;
    return (l > h) ? (int)h : (m * m <= n ? helper(n, m + 1, h) : helper(n, l, m - 1));
}

int Sqrt(int n) {
    return (n < 0) ? -1 : helper(n, 0, n);
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 1;
    printf("%d\n", Sqrt(atoi(argv[1])));
    return 0;
}