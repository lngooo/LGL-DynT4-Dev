/**
 * LGL-DynT4 Dataset - Function: NewtonRoot
 * -----------------------------------------
 * File: A07_F09_O_A06_BitAdder.c
 * Implementation Logic: Bitshift Newton with bitwise addition simulation.
 */
#include <stdio.h>
#include <stdlib.h>

long b_add(long a, long b) {
    while (b != 0) {
        long carry = a & b;
        a = a ^ b;
        b = carry << 1;
    }
    return a;
}

int NewtonRoot(int n) {
    if (n < 0) return -1;
    if (n == 0) return 0;
    long x = n;
    while (1) {
        long y = b_add(x, n / x) >> 1;
        if (y >= x) break;
        x = y;
    }
    return (int)x;
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 1;
    printf("%d\n", NewtonRoot(atoi(argv[1])));
    return 0;
}