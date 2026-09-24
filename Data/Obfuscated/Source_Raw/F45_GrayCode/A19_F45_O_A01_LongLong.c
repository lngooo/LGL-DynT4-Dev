/**
 * LGL-DynT4 Dataset - Function: GrayCode
 * -----------------------------------------
 * File: A19_F45_O_A01_LongLong.c
 * Implementation Logic: Data width promotion to long long to alter Token sequence derived from A01.
 */
#include <stdio.h>
#include <stdlib.h>

unsigned int ZsP(unsigned int X) {
    unsigned long long g = X;
    unsigned long long XmIJ = g >> 1;
    unsigned long long H = g ^ XmIJ;
    return (unsigned int)H;
}

int main(int Dp, char* Q[]) {
    if (Dp < 2) return 0;
    unsigned int X = (unsigned int)strtoul(Q[1], NULL, 10);
    printf("%u", ZsP(X));
    return 0;
}