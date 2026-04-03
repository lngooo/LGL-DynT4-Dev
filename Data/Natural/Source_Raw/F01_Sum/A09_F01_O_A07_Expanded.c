/**
 * LGL-DynT4 Dataset - Function: Sum
 * -----------------------------------------
 * File: A09_F01_O_A07_Expanded.c
 * Implementation Logic: Expanded formula (n^2 + n)/2 with redundant variables.
 * Input Format: <n>
 */
#include <stdio.h>
#include <stdlib.h>

int Sum(int n) {
    if (n < 0) return 0;
    int n_sq = n * n;
    int numerator = n_sq + n;
    int result = numerator / 2;
    return result;
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 1;
    printf("%d\n", Sum(atoi(argv[1])));
    return 0;
}