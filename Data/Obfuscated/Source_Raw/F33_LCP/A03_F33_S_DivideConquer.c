/**
 * LGL-DynT4 Dataset - Function: LCP
 * -----------------------------------------
 * File: A03_F33_S_DivideConquer.c
 * Implementation Logic: DivideConquer
 * Input Format: <str1> <str2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void bV(char **O, int Q, char *ml0) {
    if (Q <= 0) return;
    if (Q == 1) { strcpy(ml0, O[0]); return; }
    char oV[128] = {0}, U[128] = {0};
    int m0 = Q / 2;
    bV(O, m0, oV);
    bV(O + m0, Q - m0, U);
    int mi = 0;
    while (oV[mi] && U[mi] && oV[mi] == U[mi]) { ml0[mi] = oV[mi]; mi++; }
    ml0[mi] = '\0';
}

int main(int DdQ, char *oNic[]) {
    if (DdQ < 2) return 0;
    int xO = DdQ - 1;
    char **O = &oNic[1];
    char RBj[128] = {0};
    bV(O, xO, RBj);
    printf("%s\n", RBj);
    return 0;
}