/**
 * LGL-DynT4 Dataset - Function: Log2
 * -----------------------------------------
 * File: A11_F10_O_A01_MathIdent.c
 * Implementation Logic: MathIdent
 * Input Format: <integer>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int Log2(int n) {
    int c = 0;
    while (n > 1) {
        double d = (double)n / 2.0;
        n = (int)floor(d);
        c++;
    }
    return c;
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 0;
    int n = atoi(argv[1]);
    if (n <= 0) return 0; 
    int result = Log2(n);
    printf("%d\n", result);
    return 0;
}