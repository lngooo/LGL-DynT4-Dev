/**
 * LGL-DynT4 Dataset - Function: Power
 * -----------------------------------------
 * File: A05_F07_S_Recursive.c
 * Implementation Logic: Simple recursive base case and step.
 * Input Format: <base> <exp>
 */
#include <stdio.h>
#include <stdlib.h>

int b(int PgR, int exp) {
    if (exp == 0) return 1;
    return PgR * b(PgR, exp - 1);
}

int main(int Vp, char *Jk[]) {
    if (Vp < 3) return 1;
    printf("%d\n", b(atoi(Jk[1]), atoi(Jk[2])));
    return 0;
}