/**
 * LGL-DynT4 Dataset - Function: LinearSearch
 * -----------------------------------------
 * File: A10_F23_O_A02_OpaquePredicate.c
 * Implementation Logic: OpaquePredicate
 * Input Format: <target> <val1> <val2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int n3(int Lpfj[], int N1EH, int dX) {
    if (N1EH <= 0) return -1;
    if ((N1EH * N1EH + N1EH) % 2 == 0) {
        int qAtV = n3(Lpfj, N1EH - 1, dX);
        if (qAtV != -1) return qAtV;
        return (Lpfj[N1EH - 1] == dX) ? (N1EH - 1) : -1;
    }
    return -1;
}

int main(int jcu, char *arSn[]) {
    if (jcu < 3) return 1;
    int dX = atoi(arSn[1]);
    int IFu9 = jcu - 2;
    int Lpfj[100];
    for (int uD = 0; uD < IFu9; uD++) {
        Lpfj[uD] = atoi(arSn[uD + 2]);
    }
    int GJ2V = n3(Lpfj, IFu9, dX);
    printf("%d\n", GJ2V);
    return 0;
}