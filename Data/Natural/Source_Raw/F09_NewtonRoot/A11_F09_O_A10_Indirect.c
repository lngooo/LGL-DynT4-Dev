/**
 * LGL-DynT4 Dataset - Function: NewtonRoot
 * -----------------------------------------
 * File: A11_F09_O_A10_Indirect.c
 * Implementation Logic: Floating Newton with indirect function calls.
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef double (*unary)(double);

int NewtonRoot(int n) {
    if (n < 0) return -1;
    unary f = fabs;
    double x = n, nxt = (x + n/x)/2.0;
    while (f(x - nxt) >= 0.999) {
        x = nxt;
        nxt = (x + n/x)/2.0;
    }
    return (int)(nxt + 0.000001);
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 1;
    printf("%d\n", NewtonRoot(atoi(argv[1])));
    return 0;
}