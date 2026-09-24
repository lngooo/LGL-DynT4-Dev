/**
 * LGL-DynT4 Dataset - Function: QuickSort
 * -----------------------------------------
 * File: A16_F13_O_A03_StackSim.c
 * Implementation Logic: StackSim
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void nU(int D[], int T3Hh, int R) {
    int v = T3Hh, cgHX = R, bKW = D[(T3Hh+R)/2];
    do {
        while (D[v] < bKW) v++;
        while (D[cgHX] > bKW) cgHX--;
        if (v <= cgHX) {
            int O5n = D[v]; D[v] = D[cgHX]; D[cgHX] = O5n;
            v++; cgHX--;
        }
    } while (v <= cgHX);
    if (T3Hh < cgHX) nU(D, T3Hh, cgHX);
    if (v < R) nU(D, v, R);
}

int main(int mms, char *IuX[]) {
    if (mms < 2) return 0;
    int Qhrj = mms - 1;
    int *D = (int *)malloc(Qhrj * sizeof(int));
    for (int v = 0; v < Qhrj; v++) D[v] = atoi(IuX[v + 1]);

    nU(D, 0, Qhrj - 1);

    for (int v = 0; v < Qhrj; v++) {
        printf("%d%s", D[v], (v == Qhrj - 1 ? "" : " "));
    }
    printf("\n");
    free(D);
    return 0;
}