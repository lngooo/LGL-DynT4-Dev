/**
 * LGL-DynT4 Dataset - Function: Sum
 * -----------------------------------------
 * File: A07_F01_S_Formula.c
 * Implementation Logic: Mathematical formula n(n+1)/2 (Seed 3).
 * Input Format: <n>
 */
#include <stdio.h>
#include <stdlib.h>

int Sum(int n) {
    if (n < 0) return 0;
    return (int)((n * (n + 1)) / 2);
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 1;
    printf("%d\n", Sum(atoi(argv[1])));
    return 0;
}