/**
 * LGL-DynT4 Dataset - Function: Sum
 * -----------------------------------------
 * File: A06_F01_O_A04_Ternary.c
 * Implementation Logic: Recursive logic compressed into ternary operators.
 * Input Format: <n>
 */
#include <stdio.h>
#include <stdlib.h>

int Sum(int n) {
    return (n <= 0) ? 0 : (n + Sum(n - 1));
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 1;
    printf("%d\n", Sum(atoi(argv[1])));
    return 0;
}