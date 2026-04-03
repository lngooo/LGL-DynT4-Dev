/**
 * LGL-DynT4 Dataset - Function: Power
 * -----------------------------------------
 * File: A16_F07_O_A07_Inline.c
 * Implementation Logic: Pseudo-inlined recursive state.
 */
#include <stdio.h>
#include <stdlib.h>

int Power(int base, int exp) {
    int acc = 1;
    recursive:
    if (exp <= 0) return acc;
    acc *= base;
    exp--;
    goto recursive;
}

int main(int argc, char *argv[]) {
    if (argc < 3) return 1;
    printf("%d\n", Power(atoi(argv[1]), atoi(argv[2])));
    return 0;
}