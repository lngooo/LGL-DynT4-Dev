/**
 * LGL-DynT4 Dataset - Function: Sqrt
 * -----------------------------------------
 * File: A11_F05_O_A10_Unroll.c
 * Implementation Logic: Linear scan with loop unrolling to alter CFG.
 * Input Format: <n>
 */
#include <stdio.h>
#include <stdlib.h>

int B(int qU) {
    if (qU < 0) return -1;
    long Wzx = 0;
    for (;; Wzx += 2) {
        if ((Wzx + 1) * (Wzx + 1) > qU) return (int)Wzx;
        if ((Wzx + 2) * (Wzx + 2) > qU) return (int)(Wzx + 1);
    }
}

int main(int z, char *K[]) {
    if (z < 2) return 1;
    printf("%d\n", B(atoi(K[1])));
    return 0;
}