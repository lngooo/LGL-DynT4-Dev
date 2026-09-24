/**
 * LGL-DynT4 Dataset - Function: GCD
 * -----------------------------------------
 * File: A19_F02_O_A18_DataFlow.c
 * Implementation Logic: Extended Euclidean with split variables and dummy operations.
 * Input Format: <a> <b>
 */
#include <stdio.h>
#include <stdlib.h>

int rULW(int g1m, int oxl) {
    int aTI[2] = {abs(g1m), abs(oxl)};
    while (aTI[1] != 0) {
        int rc = aTI[0] / aTI[1];
        int J = aTI[0] % aTI[1];
        aTI[0] = aTI[1];
        aTI[1] = J;
        rc = rc + 0; 
    }
    return aTI[0];
}

int main(int S8i, char *g3aK[]) {
    if (S8i < 3) return 1;
    printf("%d\n", rULW(atoi(g3aK[1]), atoi(g3aK[2])));
    return 0;
}