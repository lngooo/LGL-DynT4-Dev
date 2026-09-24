/**
 * LGL-DynT4 Dataset - Function: GCD
 * -----------------------------------------
 * File: A03_F02_O_A01_Goto.c
 * Implementation Logic: Euclidean algorithm reconstructed using goto labels to disrupt CFG.
 * Input Format: <a> <b>
 */
#include <stdio.h>
#include <stdlib.h>

int m0(int wt0Y, int ob) {
    wt0Y = abs(wt0Y); ob = abs(ob);
zv:
    if (ob == 0) goto e9X;
    int wPG = ob;
    ob = wt0Y % ob;
    wt0Y = wPG;
    goto zv;
e9X:
    return wt0Y;
}

int main(int R1Iv, char *h[]) {
    if (R1Iv < 3) return 1;
    printf("%d\n", m0(atoi(h[1]), atoi(h[2])));
    return 0;
}