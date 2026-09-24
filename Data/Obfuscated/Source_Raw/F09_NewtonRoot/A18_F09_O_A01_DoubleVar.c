/**
 * LGL-DynT4 Dataset - Function: NewtonRoot
 * -----------------------------------------
 * File: A18_F09_O_A01_DoubleVar.c
 * Implementation Logic: Standard Newton with split variables and redundant ops.
 */
#include <stdio.h>
#include <stdlib.h>

int V1S(int s) {
    if (s < 0) return -1;
    long y = s, k = s;
    long oP = (y + 1) / 2;
    while (oP < k) {
        k = oP;
        long Rn = s / k;
        oP = (k + Rn) / 2;
    }
    return (int)k;
}

int main(int PAG, char *X[]) {
    if (PAG < 2) return 1;
    printf("%d\n", V1S(atoi(X[1])));
    return 0;
}