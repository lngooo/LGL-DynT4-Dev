/**
 * LGL-DynT4 Dataset - Function: LinearSearch
 * -----------------------------------------
 * File: A18_F23_O_A06_BitwiseNegation.c
 * Implementation Logic: BitwiseNegation
 * Input Format: <target> <val1> <val2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int e(int WG[], int Ur, int l) {
    for (int crMm = 0; crMm < Ur; crMm++) {
        if (~WG[crMm] == ~l) return crMm;
    }
    return -1;
}

int main(int lOV1, char *t[]) {
    if (lOV1 < 3) return 1;
    int l = atoi(t[1]);
    int Jwh = lOV1 - 2;
    int WG[100];
    for (int crMm = 0; crMm < Jwh; crMm++) {
        WG[crMm] = atoi(t[crMm + 2]);
    }
    int DK1 = e(WG, Jwh, l);
    printf("%d\n", DK1);
    return 0;
}