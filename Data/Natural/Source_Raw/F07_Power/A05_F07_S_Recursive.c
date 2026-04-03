/**
 * LGL-DynT4 Dataset - Function: Power
 * -----------------------------------------
 * File: A05_F07_S_Recursive.c
 * Implementation Logic: Simple recursive base case and step.
 * Input Format: <base> <exp>
 */
#include <stdio.h>
#include <stdlib.h>

int Power(int base, int exp) {
    if (exp == 0) return 1;
    return base * Power(base, exp - 1);
}

int main(int argc, char *argv[]) {
    if (argc < 3) return 1;
    printf("%d\n", Power(atoi(argv[1]), atoi(argv[2])));
    return 0;
}