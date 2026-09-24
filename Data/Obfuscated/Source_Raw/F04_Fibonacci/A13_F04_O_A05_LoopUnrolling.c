/**
 * LGL-DynT4 Dataset - Function: Fibonacci
 * -----------------------------------------
 * File: A13_F04_O_A05_LoopUnrolling.c
 * Implementation Logic: LoopUnrolling
 * Input Format: <arg1>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long l8n(int XFm) {
    if (XFm == 0) return 0;
    if (XFm == 1) return 1;
    long ij = 0, s = 1;
    int G = 2;
    for (; G <= XFm - 1; G += 2) {
        ij = ij + s; s = ij + s;
    }
    if (G <= XFm) {
        long Q = ij + s; ij = s; s = Q;
    }
    return s;
}

int main(int XNi, char *jkl1[]) {
    if (XNi < 2) {
        return 1;
    }
    int XFm = atoi(jkl1[1]);
    if (XFm < 0) {
        printf("0\n");
        return 0;
    }
    long UC = l8n(XFm);
    printf("%ld\n", UC);
    return 0;
}
