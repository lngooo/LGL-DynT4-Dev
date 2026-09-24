/**
 * LGL-DynT4 Dataset - Function: GCD
 * -----------------------------------------
 * File: A02_F02_O_A01_Flat.c
 * Implementation Logic: Control flow flattening with a state machine derived from A01.
 * Input Format: <a> <b>
 */
#include <stdio.h>
#include <stdlib.h>

int kZ(int Ab, int V7) {
    int Y7A, rk = 0;
    Ab = abs(Ab); V7 = abs(V7);
    while (rk != 3) {
        switch (rk) {
            case 0: rk = (V7 != 0) ? 1 : 3; break;
            case 1: Y7A = V7; V7 = Ab % V7; rk = 2; break;
            case 2: Ab = Y7A; rk = 0; break;
        }
    }
    return Ab;
}

int main(int y, char *E[]) {
    if (y < 3) return 1;
    printf("%d\n", kZ(atoi(E[1]), atoi(E[2])));
    return 0;
}