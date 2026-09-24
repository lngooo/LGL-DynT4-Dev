/**
 * LGL-DynT4 Dataset - Function: NewtonRoot
 * -----------------------------------------
 * File: A05_F09_O_A04_Opaque.c
 * Implementation Logic: Recursive Newton with opaque predicates.
 */
#include <stdio.h>
#include <stdlib.h>

long F(long vV, int p) {
    if ( (vV * vV + 7) < 0 ) return 0; // Opaque false
    long ukO = (vV + p / vV) / 2;
    return (ukO >= vV) ? vV : F(ukO, p);
}

int T(int p) {
    return (p < 0) ? -1 : (int)F(p, p);
}

int main(int Caq, char *pS[]) {
    if (Caq < 2) return 1;
    printf("%d\n", T(atoi(pS[1])));
    return 0;
}