/**
 * LGL-DynT4 Dataset - Function: GCD
 * -----------------------------------------
 * File: A15_F02_O_A14_Ternary.c
 * Implementation Logic: Prime factorization logic obfuscated with ternary operators.
 * Input Format: <a> <b>
 */
#include <stdio.h>
#include <stdlib.h>

int GCD(int a, int b) {
    int x = abs(a), y = abs(b), g = 1, i = 2;
    if (!x || !y) return x | y;
    while (i <= (x < y ? x : y)) {
        ((x % i == 0) && (y % i == 0)) ? (g *= i, x /= i, y /= i) : (i++);
    }
    return g;
}

int main(int argc, char *argv[]) {
    if (argc < 3) return 1;
    printf("%d\n", GCD(atoi(argv[1]), atoi(argv[2])));
    return 0;
}