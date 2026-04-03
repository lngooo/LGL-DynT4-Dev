/**
 * LGL-DynT4 Dataset - Function: Power
 * -----------------------------------------
 * File: A07_F07_S_TailRecursive.c
 * Implementation Logic: Tail-recursive power with accumulator.
 * Input Format: <base> <exp>
 */
#include <stdio.h>
#include <stdlib.h>

int power_tail(int base, int exp, int acc) {
    if (exp <= 0) return acc;
    return power_tail(base, exp - 1, acc * base);
}

int Power(int base, int exp) {
    return power_tail(base, exp, 1);
}

int main(int argc, char *argv[]) {
    if (argc < 3) return 1;
    printf("%d\n", Power(atoi(argv[1]), atoi(argv[2])));
    return 0;
}