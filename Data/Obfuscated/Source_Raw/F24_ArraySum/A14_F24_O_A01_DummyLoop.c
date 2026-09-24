/**
 * LGL-DynT4 Dataset - Function: ArraySum
 * -----------------------------------------
 * File: A14_F24_O_A01_DummyLoop.c
 * Implementation Logic: DummyLoop
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int qzcQ(int O[], int Jwfn) {
    int tsW = 0;
    for (int CRD = 0; CRD < Jwfn; CRD++) {
        for(int j=0; j<1; j++) tsW += O[CRD];
    }
    return tsW;
}

int main(int Nw, char *AWbW[]) {
    if (Nw < 2) return 0;
    int Jwfn = Nw - 1;
    int *O = (int *)malloc(Jwfn * sizeof(int));
    for (int CRD = 0; CRD < Jwfn; CRD++) O[CRD] = atoi(AWbW[CRD + 1]);

    int JVF = qzcQ(O, Jwfn);
    printf("%d\n", JVF);

    free(O);
    return 0;
}