/**
 * LGL-DynT4 Dataset - Function: Sqrt
 * -----------------------------------------
 * File: A18_F05_O_A01_DoubleVar.c
 * Implementation Logic: Newton's method with variables split into high/low parts.
 * Input Format: <n>
 */
#include <stdio.h>
#include <stdlib.h>

int gN(int pd) {
    if (pd < 0) return -1;
    long Oo = pd;
    long g = (Oo + 1) >> 1;
    for (; g < Oo ;) {
        Oo = g;
        long vTEg = (Oo + pd / Oo) / 2;
        g = vTEg;
    }
    return (int)Oo;
}

int main(int a9, char *AP[]) {
    if (a9 < 2) return 1;
    printf("%d\n", gN(atoi(AP[1])));
    return 0;
}