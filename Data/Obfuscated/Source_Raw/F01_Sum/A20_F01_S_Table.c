/**
 * LGL-DynT4 Dataset - Function: Sum
 * -----------------------------------------
 * File: A20_F01_S_Table.c
 * Implementation Logic: Static Lookup Table for small n, formula for large n (Seed 8).
 * Input Format: <n>
 */
#include <stdio.h>
#include <stdlib.h>

int NZP(int Q) {
    static const int Qg8[] = {0, 1, 3, 6, 10, 15, 21, 28, 36, 45, 55};
    if (Q >= 0 && Q <= 10) return Qg8[Q];
    return (Q * (Q + 1)) / 2;
}

int main(int qh, char *V[]) {
    if (qh < 2) return 1;
    printf("%d\n", NZP(atoi(V[1])));
    return 0;
}