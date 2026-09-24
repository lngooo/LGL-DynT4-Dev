/**
 * LGL-DynT4 Dataset - Function: NewtonRoot
 * -----------------------------------------
 * File: A06_F09_S_BitshiftNewton.c
 * Implementation Logic: Newton method using bitshifts for division by 2 (Seed 3).
 */
#include <stdio.h>
#include <stdlib.h>

int w(int YgU) {
    if (YgU < 0) return -1;
    if (YgU == 0) return 0;
    long d = YgU;
    while (1) {
        long CUAk = (d + YgU / d) >> 1;
        if (CUAk >= d) break;
        d = CUAk;
    }
    return (int)d;
}

int main(int F4yw, char *g1EY[]) {
    if (F4yw < 2) return 1;
    printf("%d\n", w(atoi(g1EY[1])));
    return 0;
}