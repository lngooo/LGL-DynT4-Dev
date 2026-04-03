/**
 * LGL-DynT4 Dataset - Function: GCD
 * -----------------------------------------
 * File: A06_F02_S_SteinBinary.c
 * Implementation Logic: Stein's algorithm (Binary GCD) using bitwise operations (Seed 3).
 * Input Format: <a> <b>
 */
#include <stdio.h>
#include <stdlib.h>

int GCD(int a, int b) {
    if (a == 0) return abs(b);
    if (b == 0) return abs(a);
    a = abs(a); b = abs(b);
    int shift = 0;
    while (((a | b) & 1) == 0) { a >>= 1; b >>= 1; shift++; }
    while ((a & 1) == 0) a >>= 1;
    do {
        while ((b & 1) == 0) b >>= 1;
        if (a > b) { int t = a; a = b; b = t; }
        b = b - a;
    } while (b != 0);
    return a << shift;
}

int main(int argc, char *argv[]) {
    if (argc < 3) return 1;
    printf("%d\n", GCD(atoi(argv[1]), atoi(argv[2])));
    return 0;
}