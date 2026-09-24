/**
 * LGL-DynT4 Dataset - Function: ArraySum
 * -----------------------------------------
 * File: A20_F24_O_A02_IncrConfusion.c
 * Implementation Logic: IncrConfusion
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int UdsZ(int UXcx[], int T7GO) {
    int BYhg = 0;
    int qW = -1;
    while (++qW < T7GO) {
        BYhg += *(UXcx + qW);
    }
    return BYhg;
}

int main(int U, char *xA[]) {
    if (U < 2) return 0;
    int T7GO = U - 1;
    int *UXcx = (int *)malloc(T7GO * sizeof(int));
    for (int qW = 0; qW < T7GO; qW++) UXcx[qW] = atoi(xA[qW + 1]);

    int j6p = UdsZ(UXcx, T7GO);
    printf("%d\n", j6p);

    free(UXcx);
    return 0;
}