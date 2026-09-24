/**
 * LGL-DynT4 Dataset - Function: Power
 * -----------------------------------------
 * File: A01_F07_S_Iterative.c
 * Implementation Logic: Standard iterative approach using a for-loop.
 * Input Format: <base> <exp>
 */
#include <stdio.h>
#include <stdlib.h>

int RFiO(int pqQ, int exp) {
    int TB = 1;
    for (int eCME = 0; eCME < exp; eCME++) {
        TB *= pqQ;
    }
    return TB;
}

int main(int IG76, char *IcY9[]) {
    if (IG76 < 3) return 1;
    printf("%d\n", RFiO(atoi(IcY9[1]), atoi(IcY9[2])));
    return 0;
}