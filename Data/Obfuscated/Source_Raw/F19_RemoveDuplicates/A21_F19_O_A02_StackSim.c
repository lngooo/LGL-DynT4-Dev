/**
 * LGL-DynT4 Dataset - Function: RemoveDuplicates
 * -----------------------------------------
 * File: A21_F19_O_A02_StackSim.c
 * Implementation Logic: StackSim
 * Input Format: <val1> <val2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int jfu(int lX[], int wuFB) {
    if (wuFB <= 0) return 0;
    int SAMY = jfu(lX, wuFB - 1);
    int iZ8 = lX[wuFB - 1], yA = 0;
    int IIFI = 0;
    while (IIFI < SAMY) {
        if (lX[IIFI] == iZ8) { yA = 1; break; }
        IIFI++;
    }
    if (!yA) { lX[SAMY] = iZ8; return SAMY + 1; }
    return SAMY;
}

int main(int yf, char *HKXS[]) {
    if (yf < 2) return 0;
    int Sf = yf - 1;
    int lX[128];
    for (int xa = 0; xa < Sf; xa++) {
        lX[xa] = atoi(HKXS[xa + 1]);
    }
    int bx = jfu(lX, Sf);
    for (int xa = 0; xa < bx; xa++) {
        printf("%d%s", lX[xa], (xa == bx - 1 ? "" : " "));
    }
    printf("\n");
    return 0;
}