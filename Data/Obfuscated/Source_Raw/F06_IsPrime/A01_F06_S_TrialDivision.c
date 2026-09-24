/**
 * LGL-DynT4 Dataset - Function: IsPrime
 * -----------------------------------------
 * File: A01_F06_S_TrialDivision.c
 * Implementation Logic: Standard trial division up to sqrt(n).
 * Input Format: <n>
 */
#include <stdio.h>
#include <stdlib.h>

int xNo(int iE) {
    if (iE <= 1) return 0;
    for (int DV = 2; DV * DV <= iE; DV++) {
        if (iE % DV == 0) return 0;
    }
    return 1;
}

int main(int ASJ, char *WIZQ[]) {
    if (ASJ < 2) return 1;
    printf("%d\n", xNo(atoi(WIZQ[1])));
    return 0;
}