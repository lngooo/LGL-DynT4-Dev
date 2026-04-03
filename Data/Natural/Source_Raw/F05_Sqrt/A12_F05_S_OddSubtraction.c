/**
 * LGL-DynT4 Dataset - Function: Sqrt
 * -----------------------------------------
 * File: A12_F05_S_OddSubtraction.c
 * Implementation Logic: Subtracting consecutive odd numbers (Seed 6).
 * Input Format: <n>
 */
#include <stdio.h>
#include <stdlib.h>

int Sqrt(int n) {
    if (n < 0) return -1;
    int count = 0, odd = 1;
    while (n >= odd) {
        n -= odd;
        odd += 2;
        count++;
    }
    return count;
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 1;
    printf("%d\n", Sqrt(atoi(argv[1])));
    return 0;
}