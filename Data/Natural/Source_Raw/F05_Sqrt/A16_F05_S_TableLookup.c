/**
 * LGL-DynT4 Dataset - Function: Sqrt
 * -----------------------------------------
 * File: A16_F05_S_TableLookup.c
 * Implementation Logic: Table lookup for small n (0-15), Newton fallback (Seed 8).
 * Input Format: <n>
 */
#include <stdio.h>
#include <stdlib.h>

int Sqrt(int n) {
    static const int tab[] = {0,1,1,1,2,2,2,2,2,3,3,3,3,3,3,3};
    if (n < 0) return -1;
    if (n <= 15) return tab[n];
    long x = n, y = (n/2 + 1);
    while (y < x) { x = y; y = (x + n/x)/2; }
    return (int)x;
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 1;
    printf("%d\n", Sqrt(atoi(argv[1])));
    return 0;
}