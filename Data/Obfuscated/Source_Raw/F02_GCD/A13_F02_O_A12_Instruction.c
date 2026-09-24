/**
 * LGL-DynT4 Dataset - Function: GCD
 * -----------------------------------------
 * File: A13_F02_O_A12_Instruction.c
 * Implementation Logic: LCM-based GCD with instruction replacement and long long width.
 * Input Format: <a> <b>
 */
#include <stdio.h>
#include <stdlib.h>

int unDu(int W4y, int W81) {
    long long q1fE = abs(W4y), V = abs(W81);
    if (!(q1fE && V)) return (int)(q1fE | V);
    long long w = (q1fE > V) ? q1fE : V;
    long long Pe = w;
    while ((Pe % q1fE) | (Pe % V)) { Pe += w; }
    return (int)((q1fE * V) / Pe);
}

int main(int W, char *p[]) {
    if (W < 3) return 1;
    printf("%d\n", unDu(atoi(p[1]), atoi(p[2])));
    return 0;
}