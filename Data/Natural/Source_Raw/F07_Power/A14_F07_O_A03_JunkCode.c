/**
 * LGL-DynT4 Dataset - Function: Power
 * -----------------------------------------
 * File: A14_F07_O_A03_JunkCode.c
 * Implementation Logic: A03 with redundant mathematical operations.
 */
#include <stdio.h>
#include <stdlib.h>

int Power(int base, int exp) {
    int res = 1;
    int junk = base + exp;
    while (exp > 0) {
        if (exp % 2 == 1) {
            res *= base;
            junk++;
        }
        base *= base;
        exp /= 2;
        junk = junk * 0;
    }
    return res + junk;
}

int main(int argc, char *argv[]) {
    if (argc < 3) return 1;
    printf("%d\n", Power(atoi(argv[1]), atoi(argv[2])));
    return 0;
}