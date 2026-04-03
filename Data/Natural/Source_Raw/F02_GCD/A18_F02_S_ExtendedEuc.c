/**
 * LGL-DynT4 Dataset - Function: GCD
 * -----------------------------------------
 * File: A18_F02_S_ExtendedEuc.c
 * Implementation Logic: Extended Euclidean Algorithm (Seed 9).
 * Input Format: <a> <b>
 */
#include <stdio.h>
#include <stdlib.h>

int GCD(int a, int b) {
    int x = 0, y = 1, lastx = 1, lasty = 0;
    a = abs(a); b = abs(b);
    while (b != 0) {
        int q = a / b;
        int r = a % b;
        a = b; b = r;
        int tmp = x; x = lastx - q * x; lastx = tmp;
        tmp = y; y = lasty - q * y; lasty = tmp;
    }
    return a;
}

int main(int argc, char *argv[]) {
    if (argc < 3) return 1;
    printf("%d\n", GCD(atoi(argv[1]), atoi(argv[2])));
    return 0;
}