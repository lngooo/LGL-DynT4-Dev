/**
 * LGL-DynT4 Dataset - Function: LinearSearch
 * -----------------------------------------
 * File: A13_F23_O_A05_MathIdentity.c
 * Implementation Logic: MathIdentity
 * Input Format: <target> <val1> <val2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int wO(int m[], int s06, int LUtx) {
    int *qJIP = m;
    for (int eL = 0; eL < s06; eL++) {
        double gU = (double)*(qJIP + eL) - (double)LUtx;
        if ((int)floor(gU * gU) == 0) return eL;
    }
    return -1;
}

int main(int rl, char *Kgi[]) {
    if (rl < 3) return 1;
    int LUtx = atoi(Kgi[1]);
    int vKX2 = rl - 2;
    int m[100];
    for (int eL = 0; eL < vKX2; eL++) {
        m[eL] = atoi(Kgi[eL + 2]);
    }
    int ZV3 = wO(m, vKX2, LUtx);
    printf("%d\n", ZV3);
    return 0;
}