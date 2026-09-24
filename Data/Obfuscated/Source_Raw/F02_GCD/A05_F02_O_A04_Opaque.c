/**
 * LGL-DynT4 Dataset - Function: GCD
 * -----------------------------------------
 * File: A05_F02_O_A04_Opaque.c
 * Implementation Logic: Recursive GCD with opaque predicates to confuse analysis.
 * Input Format: <a> <b>
 */
#include <stdio.h>
#include <stdlib.h>

int aH7Z(int xB, int Q) {
    if (Q == 0) {
        if ((xB * xB + 1) > 0) return abs(xB);
    }
    return aH7Z(abs(Q), abs(xB) % abs(Q));
}

int main(int NuQ, char *U[]) {
    if (NuQ < 3) return 1;
    printf("%d\n", aH7Z(atoi(U[1]), atoi(U[2])));
    return 0;
}