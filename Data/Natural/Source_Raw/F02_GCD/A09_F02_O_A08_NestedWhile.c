/**
 * LGL-DynT4 Dataset - Function: GCD
 * -----------------------------------------
 * File: A09_F02_O_A08_NestedWhile.c
 * Implementation Logic: Subtraction-based GCD with nested while loops to alter CFG.
 * Input Format: <a> <b>
 */
#include <stdio.h>
#include <stdlib.h>

int GCD(int a, int b) {
    a = abs(a); b = abs(b);
    while (a != b) {
        while (a > b) a -= b;
        while (b > a) b -= a;
        if (a == 0 || b == 0) break;
    }
    return (a == 0) ? b : a;
}

int main(int argc, char *argv[]) {
    if (argc < 3) return 1;
    printf("%d\n", GCD(atoi(argv[1]), atoi(argv[2])));
    return 0;
}