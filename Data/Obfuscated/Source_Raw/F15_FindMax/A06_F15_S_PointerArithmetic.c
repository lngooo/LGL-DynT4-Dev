/**
 * LGL-DynT4 Dataset - Function: FindMax
 * -----------------------------------------
 * File: A06_F15_S_PointerArithmetic.c
 * Implementation Logic: Linear scan using pure pointer arithmetic (Seed 3).
 */
#include <stdio.h>
#include <stdlib.h>

int DtKi(int kYq[], int Ex) {
    if (Ex <= 0) return 0;
    int *X2d = kYq;
    int ws = *X2d;
    for (int kN7k = 1; kN7k < Ex; kN7k++) {
        X2d++;
        if (*X2d > ws) ws = *X2d;
    }
    return ws;
}

int main(int ll1, char *kp[]) {
    if (ll1 < 2) return 0;
    int Ex = ll1 - 1;
    int *kYq = (int*)malloc(Ex * sizeof(int));
    for (int kN7k = 0; kN7k < Ex; kN7k++) kYq[kN7k] = atoi(kp[kN7k+1]);
    printf("%d\n", DtKi(kYq, Ex));
    free(kYq);
    return 0;
}