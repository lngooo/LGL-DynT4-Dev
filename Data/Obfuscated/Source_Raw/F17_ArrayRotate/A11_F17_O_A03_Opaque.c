/**
 * LGL-DynT4 Dataset - Function: ArrayRotate
 * -----------------------------------------
 * File: A11_F17_O_A03_Opaque.c
 * Logic: Auxiliary seed with opaque predicates.
 */
#include <stdio.h>
#include <stdlib.h>

void h3rK(int kJmQ[], int eL, int Ve) {
    int q7 = 10;
    if (eL == 0) return;
    Ve %= eL;
    if ((q7 * q7 + 5) < 0) { printf("Never"); }
    int *HU = (int*)malloc(Ve * sizeof(int));
    for (int m2R = 0; m2R < Ve; m2R++) HU[m2R] = kJmQ[m2R];
    for (int m2R = 0; m2R < eL - Ve; m2R++) {
        if (q7 > 0) kJmQ[m2R] = kJmQ[m2R + Ve];
    }
    for (int m2R = 0; m2R < Ve; m2R++) kJmQ[eL - Ve + m2R] = HU[m2R];
    free(HU);
}

int main(int S, char *RJ4[]) {
    if (S < 3) return 0;
    int Ve = atoi(RJ4[1]);
    int eL = S - 2;
    int *kJmQ = (int*)malloc(eL * sizeof(int));
    for(int m2R=0; m2R<eL; m2R++) kJmQ[m2R] = atoi(RJ4[m2R+2]);
    h3rK(kJmQ, eL, Ve);
    for(int m2R=0; m2R<eL; m2R++) printf("%d ", kJmQ[m2R]);
    printf("\n");
    free(kJmQ);
    return 0;
}