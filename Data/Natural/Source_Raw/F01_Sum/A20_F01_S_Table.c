/**
 * LGL-DynT4 Dataset - Function: Sum
 * -----------------------------------------
 * File: A20_F01_S_Table.c
 * Implementation Logic: Static Lookup Table for small n, formula for large n (Seed 8).
 * Input Format: <n>
 */
#include <stdio.h>
#include <stdlib.h>

int Sum(int n) {
    static const int table[] = {0, 1, 3, 6, 10, 15, 21, 28, 36, 45, 55};
    if (n >= 0 && n <= 10) return table[n];
    return (n * (n + 1)) / 2;
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 1;
    printf("%d\n", Sum(atoi(argv[1])));
    return 0;
}