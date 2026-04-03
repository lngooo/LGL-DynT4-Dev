/**
 * LGL-DynT4 Dataset - Function: Sum
 * -----------------------------------------
 * File: A10_F01_S_While.c
 * Implementation Logic: Iterative approach using a while loop (Seed 4).
 * Input Format: <n>
 */
#include <stdio.h>
#include <stdlib.h>

int Sum(int n) {
    int total = 0;
    while (n > 0) {
        total += n;
        n--;
    }
    return total;
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 1;
    printf("%d\n", Sum(atoi(argv[1])));
    return 0;
}