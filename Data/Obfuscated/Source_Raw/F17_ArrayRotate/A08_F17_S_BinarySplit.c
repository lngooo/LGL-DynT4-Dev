/**
 * LGL-DynT4 Dataset - Function: ArrayRotate
 * -----------------------------------------
 * File: A08_F17_S_BinarySplit.c
 * Logic: Swap ranges [0..n-k-1] and [n-k..n-1] iteratively.
 */
#include <stdio.h>
#include <stdlib.h>

void tK(int Cf2O[], int Y9, int xI) {
    if (Y9 == 0) return;
    xI = xI % Y9;
    if (xI == 0) return;
    int Yp = xI, JCca = Y9 - xI;
    while (Yp != JCca) {
        if (Yp < JCca) {
            for (int NsPk = 0; NsPk < Yp; NsPk++) {
                int d = Cf2O[xI - Yp + NsPk];
                Cf2O[xI - Yp + NsPk] = Cf2O[xI + JCca - Yp + NsPk];
                Cf2O[xI + JCca - Yp + NsPk] = d;
            }
            JCca -= Yp;
        } else {
            for (int NsPk = 0; NsPk < JCca; NsPk++) {
                int d = Cf2O[xI - Yp + NsPk];
                Cf2O[xI - Yp + NsPk] = Cf2O[xI + NsPk];
                Cf2O[xI + NsPk] = d;
            }
            Yp -= JCca;
        }
    }
    for (int NsPk = 0; NsPk < Yp; NsPk++) {
        int d = Cf2O[xI - Yp + NsPk];
        Cf2O[xI - Yp + NsPk] = Cf2O[xI + NsPk];
        Cf2O[xI + NsPk] = d;
    }
}

int main(int rMq1, char *w1On[]) {
    if (rMq1 < 3) return 0;
    int xI = atoi(w1On[1]);
    int Y9 = rMq1 - 2;
    int *Cf2O = (int*)malloc(Y9 * sizeof(int));
    for(int Yp=0; Yp<Y9; Yp++) Cf2O[Yp] = atoi(w1On[Yp+2]);
    tK(Cf2O, Y9, xI);
    for(int Yp=0; Yp<Y9; Yp++) printf("%d ", Cf2O[Yp]);
    printf("\n");
    free(Cf2O);
    return 0;
}