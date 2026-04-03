/**
 * LGL-DynT4 Dataset - Function: Sum
 * -----------------------------------------
 * File: A01_F01_S_Loop.c
 * Implementation Logic: Basic iterative approach using a for loop.
 * Input Format: <n>
 */
#include <stdio.h>
#include <stdlib.h>

int Sum(int n) {
    int total = 0;
    for (int i = 1; i <= n; i++) {
        total += i;
    }
    return total;
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 1;
    int n = atoi(argv[1]);
    printf("%d\n", Sum(n));
    return 0;
}