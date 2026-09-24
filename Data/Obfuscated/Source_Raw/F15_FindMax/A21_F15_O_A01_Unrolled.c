/**
 * LGL-DynT4 Dataset - Function: FindMax
 * -----------------------------------------
 * File: A21_F15_O_A01_Unrolled.c
 * Implementation Logic: Partially unrolled scan loop.
 */
#include <stdio.h>
#include <stdlib.h>

int cclJ(int TkF[], int itTy) {
    int WhKR = TkF[0], QJRI = 1;
    for (; QJRI < itTy - 1; QJRI += 2) {
        if (TkF[QJRI] > WhKR) WhKR = TkF[QJRI];
        if (TkF[QJRI+1] > WhKR) WhKR = TkF[QJRI+1];
    }
    for (; QJRI < itTy; QJRI++) {
        if (TkF[QJRI] > WhKR) WhKR = TkF[QJRI];
    }
    return WhKR;
}

int main(int EJ2k, char *z[]) {
    if (EJ2k < 2) return 0;
    int itTy = EJ2k - 1;
    int *TkF = (int*)malloc(itTy * sizeof(int));
    for (int QJRI = 0; QJRI < itTy; QJRI++) TkF[QJRI] = atoi(z[QJRI+1]);
    printf("%d\n", cclJ(TkF, itTy));
    free(TkF);
    return 0;
}