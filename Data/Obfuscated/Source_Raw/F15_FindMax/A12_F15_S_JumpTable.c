/**
 * LGL-DynT4 Dataset - Function: FindMax
 * -----------------------------------------
 * File: A12_F15_S_JumpTable.c
 * Implementation Logic: Max via computed goto comparison (Seed 6).
 */
#include <stdio.h>
#include <stdlib.h>

int q(int Ld[], int uD) {
    int wk = Ld[0];
    void *r[] = {&&AO6, &&dss};
    for(int G=1; G<uD; G++) {
        goto *r[Ld[G] > wk];
    dss:
        wk = Ld[G];
    AO6:;
    }
    return wk;
}

int main(int XO, char *Wg[]) {
    if (XO < 2) return 0;
    int uD = XO - 1;
    int *Ld = (int*)malloc(uD * sizeof(int));
    for (int G = 0; G < uD; G++) Ld[G] = atoi(Wg[G+1]);
    printf("%d\n", q(Ld, uD));
    free(Ld);
    return 0;
}