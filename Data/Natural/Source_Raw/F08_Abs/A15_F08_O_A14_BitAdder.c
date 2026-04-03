/**
 * LGL-DynT4 Dataset - Function: Abs
 * -----------------------------------------
 * File: A15_F08_O_A14_BitAdder.c
 * Implementation Logic: Bitwise negation and bitwise addition.
 */
#include <stdio.h>
#include <stdlib.h>

int bit_add(int a, int b) {
    while (b != 0) {
        int carry = a & b;
        a = a ^ b;
        b = carry << 1;
    }
    return a;
}

int Abs(int n) {
    if (n >= 0) return n;
    return bit_add(~n, 1);
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 1;
    printf("%d\n", Abs(atoi(argv[1])));
    return 0;
}