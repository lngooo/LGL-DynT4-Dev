/**
 * LGL-DynT4 Dataset - Function: LinearSearch
 * -----------------------------------------
 * File: A14_F23_O_A06_DoubleNegation.c
 * Implementation Logic: DoubleNegation
 * Input Format: <target> <val1> <val2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int nkaY(int nf[], int jk, int aue5) {
    for (int BQEu = 0; BQEu < jk; BQEu++) {
        if (!!(nf[BQEu] == aue5)) return BQEu;
    }
    return -1;
}

int main(int GWh, char *Jz[]) {
    if (GWh < 3) return 1;
    int aue5 = atoi(Jz[1]);
    int XyTE = GWh - 2;
    int nf[100];
    for (int BQEu = 0; BQEu < XyTE; BQEu++) {
        nf[BQEu] = atoi(Jz[BQEu + 2]);
    }
    int t1H = nkaY(nf, XyTE, aue5);
    printf("%d\n", t1H);
    return 0;
}