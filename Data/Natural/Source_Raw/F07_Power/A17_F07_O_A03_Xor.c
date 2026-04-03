/**
 * LGL-DynT4 Dataset - Function: Power
 * -----------------------------------------
 * File: A17_F07_O_A03_Xor.c
 * Implementation Logic: Using XOR for status tracking in fast power.
 */
#include <stdio.h>
#include <stdlib.h>

int Power(int base, int exp) {
    int res = 1;
    while (exp ^ 0) {
        if (exp & 1) res *= base;
        base *= base;
        exp >>= 1;
    }
    return res;
}

int main(int argc, char *argv[]) {
    if (argc < 3) return 1;
    printf("%d\n", Power(atoi(argv[1]), atoi(argv[2])));
    return 0;
}