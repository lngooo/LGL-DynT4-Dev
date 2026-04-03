/**
 * LGL-DynT4 Dataset - Function: Sqrt
 * -----------------------------------------
 * File: A10_F05_S_Linear.c
 * Implementation Logic: Linear scan (brute force) starting from 0 (Seed 5).
 * Input Format: <n>
 */
#include <stdio.h>
#include <stdlib.h>

int Sqrt(int n) {
    if (n < 0) return -1;
    long i = 0;
    while ((i + 1) * (i + 1) <= n) {
        i++;
    }
    return (int)i;
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 1;
    printf("%d\n", Sqrt(atoi(argv[1])));
    return 0;
}