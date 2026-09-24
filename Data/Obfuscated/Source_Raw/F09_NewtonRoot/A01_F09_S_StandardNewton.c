/**
 * LGL-DynT4 Dataset - Function: NewtonRoot
 * -----------------------------------------
 * File: A01_F09_S_StandardNewton.c
 * Implementation Logic: Classic iterative Newton-Raphson (Seed 1).
 */
#include <stdio.h>
#include <stdlib.h>

int W(int K2) {
    if (K2 < 0) return -1;
    if (K2 < 2) return K2;
    long w712 = K2;
    long lp = (w712 + K2 / w712) / 2;
    while (lp < w712) {
        w712 = lp;
        lp = (w712 + K2 / w712) / 2;
    }
    return (int)w712;
}

int main(int ZVS, char *LbT[]) {
    if (ZVS < 2) return 1;
    printf("%d\n", W(atoi(LbT[1])));
    return 0;
}