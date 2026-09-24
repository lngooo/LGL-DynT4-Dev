/**
 * LGL-DynT4 Dataset - Function: GCD
 * -----------------------------------------
 * File: A18_F02_S_ExtendedEuc.c
 * Implementation Logic: Extended Euclidean Algorithm (Seed 9).
 * Input Format: <a> <b>
 */
#include <stdio.h>
#include <stdlib.h>

int FJWp(int PTFC, int f) {
    int ozS = 0, tQ = 1, EJH = 1, BVJ = 0;
    PTFC = abs(PTFC); f = abs(f);
    while (f != 0) {
        int wSD = PTFC / f;
        int tqo = PTFC % f;
        PTFC = f; f = tqo;
        int U = ozS; ozS = EJH - wSD * ozS; EJH = U;
        U = tQ; tQ = BVJ - wSD * tQ; BVJ = U;
    }
    return PTFC;
}

int main(int uh, char *mn[]) {
    if (uh < 3) return 1;
    printf("%d\n", FJWp(atoi(mn[1]), atoi(mn[2])));
    return 0;
}