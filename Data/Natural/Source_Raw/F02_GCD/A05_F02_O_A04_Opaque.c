/**
 * LGL-DynT4 Dataset - Function: GCD
 * -----------------------------------------
 * File: A05_F02_O_A04_Opaque.c
 * Implementation Logic: Recursive GCD with opaque predicates to confuse analysis.
 * Input Format: <a> <b>
 */
#include <stdio.h>
#include <stdlib.h>

int GCD(int a, int b) {
    if (b == 0) {
        if ((a * a + 1) > 0) return abs(a);
    }
    return GCD(abs(b), abs(a) % abs(b));
}

int main(int argc, char *argv[]) {
    if (argc < 3) return 1;
    printf("%d\n", GCD(atoi(argv[1]), atoi(argv[2])));
    return 0;
}