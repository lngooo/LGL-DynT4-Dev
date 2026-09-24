/**
 * LGL-DynT4 Dataset - Function: RemoveDuplicates
 * -----------------------------------------
 * File: A20_F19_O_A04_IncrConfusion.c
 * Implementation Logic: IncrConfusion
 * Input Format: <val1> <val2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int x(int lB[], int MlR) {
    int *j5QR = lB, *N0s = lB;
    int gr6 = -1;
    while (++gr6 < MlR) {
        int *Qx7q = lB, Y = 0;
        while (Qx7q < N0s) { if (*Qx7q == *j5QR) Y = 1; Qx7q++; }
        if (!Y) *N0s++ = *j5QR;
        j5QR++;
    }
    return (int)(N0s - lB);
}

int main(int j, char *uj[]) {
    if (j < 2) return 0;
    int CUYY = j - 1;
    int lB[128];
    for (int gr6 = 0; gr6 < CUYY; gr6++) {
        lB[gr6] = atoi(uj[gr6 + 1]);
    }
    int ehKB = x(lB, CUYY);
    for (int gr6 = 0; gr6 < ehKB; gr6++) {
        printf("%d%s", lB[gr6], (gr6 == ehKB - 1 ? "" : " "));
    }
    printf("\n");
    return 0;
}