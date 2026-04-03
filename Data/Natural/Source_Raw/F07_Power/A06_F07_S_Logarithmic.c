/**
 * LGL-DynT4 Dataset - Function: Power
 * -----------------------------------------
 * File: A06_F07_S_Logarithmic.c
 * Implementation Logic: Using exp() and log() with floor for consistency.
 * Input Format: <base> <exp>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int Power(int base, int exp) {
    if (exp == 0) return 1;
    if (base == 0) return 0;
    double res = exp * log((double)base);
    return (int)(expf(res) + 0.5);
}

int main(int argc, char *argv[]) {
    if (argc < 3) return 1;
    printf("%d\n", Power(atoi(argv[1]), atoi(argv[2])));
    return 0;
}