/**
 * LGL-DynT4 Dataset - Function: Power
 * -----------------------------------------
 * File: A03_F07_S_BinaryExp.c
 * Implementation Logic: Exponentiation by squaring (Iterative).
 * Input Format: <base> <exp>
 */
#include <stdio.h>
#include <stdlib.h>

int Power(int base, int exp) {
    int res = 1;
    while (exp > 0) {
        if (exp % 2 == 1) res *= base;
        base *= base;
        exp /= 2;
    }
    return res;
}

int main(int argc, char *argv[]) {
    if (argc < 3) return 1;
    printf("%d\n", Power(atoi(argv[1]), atoi(argv[2])));
    return 0;
}