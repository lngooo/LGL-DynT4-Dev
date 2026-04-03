/**
 * LGL-DynT4 Dataset - Function: Sum
 * -----------------------------------------
 * File: A13_F01_S_TailRecursive.c
 * Implementation Logic: Tail-recursive implementation (Seed 5).
 * Input Format: <n>
 */
#include <stdio.h>
#include <stdlib.h>

int tail_sum(int n, int acc) {
    if (n <= 0) return acc;
    return tail_sum(n - 1, acc + n);
}

int Sum(int n) {
    return tail_sum(n, 0);
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 1;
    printf("%d\n", Sum(atoi(argv[1])));
    return 0;
}