/**
 * LGL-DynT4 Dataset - Function: Log2
 * -----------------------------------------
 * File: A10_F10_O_A02_Ternary.c
 * Implementation Logic: Ternary
 * Input Format: <integer>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int Log2(int n) {
    return (n <= 1) ? 0 : 1 + Log2(n >> 1);
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 0;
    int n = atoi(argv[1]);
    if (n <= 0) return 0; 
    int result = Log2(n);
    printf("%d\n", result);
    return 0;
}