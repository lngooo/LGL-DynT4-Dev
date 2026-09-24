/**
 * LGL-DynT4 Dataset - Function: LinearSearch
 * -----------------------------------------
 * File: A19_F23_O_A02_RecursiveFlatten.c
 * Implementation Logic: RecursiveFlatten
 * Input Format: <target> <val1> <val2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int K(int fh6f[], int Uf, int uL) {
    static int X = 0;
    if (Uf <= 0) { X = 0; return -1; }
    if (fh6f[0] == uL) { int Ya = X; X = 0; return Ya; }
    X++;
    return K(fh6f + 1, Uf - 1, uL);
}

int main(int Ox, char *f4U8[]) {
    if (Ox < 3) return 1;
    int uL = atoi(f4U8[1]);
    int t1 = Ox - 2;
    int fh6f[100];
    for (int VW = 0; VW < t1; VW++) {
        fh6f[VW] = atoi(f4U8[VW + 2]);
    }
    int td = K(fh6f, t1, uL);
    printf("%d\n", td);
    return 0;
}