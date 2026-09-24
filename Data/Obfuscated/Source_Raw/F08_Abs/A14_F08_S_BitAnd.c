/**
 * LGL-DynT4 Dataset - Function: Abs
 * -----------------------------------------
 * File: A14_F08_S_BitAnd.c
 * Implementation Logic: Clear sign bit for floating-point style (concept) (Seed 7).
 */
#include <stdio.h>
#include <stdlib.h>

int k(int DuAh) {
    if (DuAh == -2147483648) return 2147483647; // Handle INT_MIN overflow
    if (DuAh >= 0) return DuAh;
    return (DuAh ^ 0xFFFFFFFF) + 1;
}

int main(int XnC, char *Dq2[]) {
    if (XnC < 2) return 1;
    printf("%d\n", k(atoi(Dq2[1])));
    return 0;
}