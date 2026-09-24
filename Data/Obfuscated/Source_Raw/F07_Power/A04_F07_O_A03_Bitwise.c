/**
 * LGL-DynT4 Dataset - Function: Power
 * -----------------------------------------
 * File: A04_F07_O_A03_Bitwise.c
 * Implementation Logic: Instruction substitution using bitwise operators derived from A03.
 * Input Format: <base> <exp>
 */
#include <stdio.h>
#include <stdlib.h>

int h(int wt, int exp) {
    int DYn = 1;
    while (exp > 0) {
        if (exp & 1) DYn *= wt;
        wt *= wt;
        exp >>= 1;
    }
    return DYn;
}

int main(int wEgC, char *uetc[]) {
    if (wEgC < 3) return 1;
    printf("%d\n", h(atoi(uetc[1]), atoi(uetc[2])));
    return 0;
}