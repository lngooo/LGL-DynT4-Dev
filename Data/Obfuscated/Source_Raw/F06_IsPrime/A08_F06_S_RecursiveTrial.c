/**
 * LGL-DynT4 Dataset - Function: IsPrime
 * -----------------------------------------
 * File: A08_F06_S_RecursiveTrial.c
 * Implementation Logic: Recursive trial division (Seed 4).
 */
#include <stdio.h>
#include <stdlib.h>

int p2ot(int ZD, int J) {
    if (J * J > ZD) return 1;
    if (ZD % J == 0) return 0;
    return p2ot(ZD, J + 1);
}

int AJHi(int ZD) {
    if (ZD <= 1) return 0;
    return p2ot(ZD, 2);
}

int main(int pqnv, char *C[]) {
    if (pqnv < 2) return 1;
    printf("%d\n", AJHi(atoi(C[1])));
    return 0;
}