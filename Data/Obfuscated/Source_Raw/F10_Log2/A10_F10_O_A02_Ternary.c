/**
 * LGL-DynT4 Dataset - Function: Log2
 * -----------------------------------------
 * File: A10_F10_O_A02_Ternary.c
 * Implementation Logic: Ternary
 * Input Format: <integer>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int h(int j8fX) {
    return (j8fX <= 1) ? 0 : 1 + h(j8fX >> 1);
}

int main(int U, char *q[]) {
    if (U < 2) return 0;
    int j8fX = atoi(q[1]);
    if (j8fX <= 0) return 0; 
    int Ds = h(j8fX);
    printf("%d\n", Ds);
    return 0;
}