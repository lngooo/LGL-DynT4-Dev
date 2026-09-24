/**
 * LGL-DynT4 Dataset - Function: Power
 * -----------------------------------------
 * File: A03_F07_S_BinaryExp.c
 * Implementation Logic: Exponentiation by squaring (Iterative).
 * Input Format: <base> <exp>
 */
#include <stdio.h>
#include <stdlib.h>

int GV(int Cx, int exp) {
    int DXRL = 1;
    while (exp > 0) {
        if (exp % 2 == 1) DXRL *= Cx;
        Cx *= Cx;
        exp /= 2;
    }
    return DXRL;
}

int main(int wb, char *gsA6[]) {
    if (wb < 3) return 1;
    printf("%d\n", GV(atoi(gsA6[1]), atoi(gsA6[2])));
    return 0;
}