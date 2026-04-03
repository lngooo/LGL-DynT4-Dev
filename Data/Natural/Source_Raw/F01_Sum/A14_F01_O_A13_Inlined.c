/**
 * LGL-DynT4 Dataset - Function: Sum
 * -----------------------------------------
 * File: A14_F01_O_A13_Inlined.c
 * Implementation Logic: Manual inlining of tail recursion into a jump loop.
 * Input Format: <n>
 */
#include <stdio.h>
#include <stdlib.h>

int Sum(int n) {
    int acc = 0;
start:
    if (n <= 0) return acc;
    acc += n;
    n--;
    goto start;
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 1;
    printf("%d\n", Sum(atoi(argv[1])));
    return 0;
}