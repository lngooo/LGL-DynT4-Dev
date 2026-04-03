/**
 * LGL-DynT4 Dataset - Function: Power
 * -----------------------------------------
 * File: A21_F07_O_A03_StructState.c
 * Implementation Logic: Fast power using a struct to hold the state.
 */
#include <stdio.h>
#include <stdlib.h>

struct PState { int b; int e; int r; };

int Power(int base, int exp) {
    struct PState s = {base, exp, 1};
    while (s.e > 0) {
        if (s.e % 2 == 1) s.r *= s.b;
        s.b *= s.b;
        s.e /= 2;
    }
    return s.r;
}

int main(int argc, char *argv[]) {
    if (argc < 3) return 1;
    printf("%d\n", Power(atoi(argv[1]), atoi(argv[2])));
    return 0;
}