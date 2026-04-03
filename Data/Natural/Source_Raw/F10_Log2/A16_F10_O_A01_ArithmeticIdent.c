/**
 * LGL-DynT4 Dataset - Function: Log2
 * -----------------------------------------
 * File: A16_F10_O_A01_ArithmeticIdent.c
 * Implementation Logic: ArithmeticIdent
 * Input Format: <integer>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int Log2(int n) {
    int res = 0;
    unsigned int val = (unsigned int)n;
    while (val >= 2) {
        val = (val - (val % 2)) / 2;
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