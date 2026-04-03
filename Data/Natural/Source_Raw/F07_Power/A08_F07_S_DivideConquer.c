/**
 * LGL-DynT4 Dataset - Function: Power
 * -----------------------------------------
 * File: A08_F07_S_DivideConquer.c
 * Implementation Logic: Recursive binary exponentiation.
 * Input Format: <base> <exp>
 */
#include <stdio.h>
#include <stdlib.h>

int Power(int base, int exp) {
    if (exp == 0) return 1;
    int half = Power(base, exp / 2);
    if (exp % 2 == 0) return half * half;
    return base * half * half;
}

int main(int argc, char *argv[]) {
    if (argc < 3) return 1;
    printf("%d\n", Power(atoi(argv[1]), atoi(argv[2])));
    return 0;
}