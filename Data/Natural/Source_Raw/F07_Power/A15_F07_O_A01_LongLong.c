/**
 * LGL-DynT4 Dataset - Function: Power
 * -----------------------------------------
 * File: A15_F07_O_A01_LongLong.c
 * Implementation Logic: Expanding data width to long long for computation.
 */
#include <stdio.h>
#include <stdlib.h>

int Power(int base, int exp) {
    long long r = 1;
    long long b = base;
    for (int i = 0; i < exp; i++) r *= b;
    return (int)r;
}

int main(int argc, char *argv[]) {
    if (argc < 3) return 1;
    printf("%d\n", Power(atoi(argv[1]), atoi(argv[2])));
    return 0;
}