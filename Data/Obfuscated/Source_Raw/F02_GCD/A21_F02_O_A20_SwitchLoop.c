/**
 * LGL-DynT4 Dataset - Function: GCD
 * -----------------------------------------
 * File: A21_F02_O_A20_SwitchLoop.c
 * Implementation Logic: Recursive-to-iterative conversion using switch-driven loop.
 * Input Format: <a> <b>
 */
#include <stdio.h>
#include <stdlib.h>

static inline int MMYN(int XH, int C6Ct) {
    int tKNd = 0;
    int W = 0;
    int On = 0;
    while (1) {
        switch (tKNd) {
            case 0:
                if (C6Ct == 0) return XH;
                tKNd = 1;
                break;
            case 1:
                W = C6Ct;
                On = XH % C6Ct;
                tKNd = 2;
                break;
            case 2:
                XH = W;
                C6Ct = On;
                tKNd = 0;
                break;
            default:
                return XH;
        }
    }
}

int Qfk(int lJ, int k) {
    return MMYN(abs(lJ), abs(k));
}

int main(int A, char *SMEs[]) {
    if (A < 3) return 1;
    printf("%d\n", Qfk(atoi(SMEs[1]), atoi(SMEs[2])));
    return 0;
}