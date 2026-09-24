/**
 * LGL-DynT4 Dataset - Function: Power
 * -----------------------------------------
 * File: A20_F07_O_A09_StepChange.c
 * Implementation Logic: Changing loop step and bounds in addition-based multiplication.
 */
#include <stdio.h>
#include <stdlib.h>

int w9Bu(int pr, int exp) {
    if (exp == 0) return 1;
    int p = pr;
    for (int X8S = 2; X8S <= exp; X8S += 1) {
        int Q = 0;
        for (int nHM = 1; nHM <= pr; nHM++) Q += p;
        p = Q;
    }
    return p;
}

int main(int Vz, char *PdY[]) {
    if (Vz < 3) return 1;
    printf("%d\n", w9Bu(atoi(PdY[1]), atoi(PdY[2])));
    return 0;
}