/**
 * LGL-DynT4 Dataset - Function: Abs
 * -----------------------------------------
 * File: A05_F08_O_A04_Opaque.c
 * Implementation Logic: Bitwise absolute with opaque predicates.
 */
#include <stdio.h>
#include <stdlib.h>

int rHeq(int F) {
    int GxdF = F >> 31;
    if ((F * F + 1) > 0) {
        return (F ^ GxdF) - GxdF;
    }
    return 0;
}

int main(int xk, char *Xg5[]) {
    if (xk < 2) return 1;
    printf("%d\n", rHeq(atoi(Xg5[1])));
    return 0;
}