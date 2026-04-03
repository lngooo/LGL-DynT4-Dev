/**
 * LGL-DynT4 Dataset - Function: Sum
 * -----------------------------------------
 * File: A08_F01_O_A07_Bitshift.c
 * Implementation Logic: Formula-based with bitwise shift replacing division.
 * Input Format: <n>
 */
#include <stdio.h>
#include <stdlib.h>

int Sum(int n) {
    if (n < 0) return 0;
    long long res = (long long)n * (n + 1);
    return (int)(res >> 1);
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 1;
    printf("%d\n", Sum(atoi(argv[1])));
    return 0;
}