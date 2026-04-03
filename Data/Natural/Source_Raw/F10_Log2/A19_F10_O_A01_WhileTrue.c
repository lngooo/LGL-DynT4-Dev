/**
 * LGL-DynT4 Dataset - Function: Log2
 * -----------------------------------------
 * File: A19_F10_O_A01_WhileTrue.c
 * Implementation Logic: WhileTrue
 * Input Format: <integer>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int Log2(int n) {
    int res = 0;
    if (n <= 1) return 0;
    while (1) {
        n /= 2;
        if (n == 0) break;
        res++;
    }
    return res;
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 0;
    int n = atoi(argv[1]);
    if (n <= 0) return 0; 
    int result = Log2(n);
    printf("%d\n", result);
    return 0;
}