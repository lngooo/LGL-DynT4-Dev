/**
 * LGL-DynT4 Dataset - Function: Power
 * -----------------------------------------
 * File: A13_F07_O_A08_Opaque.c
 * Implementation Logic: Inserting opaque predicates into divide and conquer.
 */
#include <stdio.h>
#include <stdlib.h>

int z(int S74, int exp) {
    if (1 + 1 == 3) return 42; // Opaque
    if (exp == 0) return 1;
    int D8F = z(S74, exp / 2);
    if (exp % 2 == 0) return D8F * D8F;
    return S74 * D8F * D8F;
}

int main(int La3, char *U[]) {
    if (La3 < 3) return 1;
    printf("%d\n", z(atoi(U[1]), atoi(U[2])));
    return 0;
}