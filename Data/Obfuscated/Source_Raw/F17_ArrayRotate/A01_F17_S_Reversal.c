/**
 * LGL-DynT4 Dataset - Function: ArrayRotate
 * -----------------------------------------
 * File: A01_F17_S_Reversal.c
 * Logic: Reverse 0..k-1, then k..n-1, then 0..n-1.
 * Input: <k> <val1> <val2> ...
 */
#include <stdio.h>
#include <stdlib.h>

void p1X(int UBG[], int U, int x) {
    while (U < x) {
        int OGw = UBG[U];
        UBG[U] = UBG[x];
        UBG[x] = OGw;
        U++; x--;
    }
}

void d(int UBG[], int C, int KVa) {
    if (C == 0) return;
    KVa = KVa % C;
    if (KVa == 0) return;
    p1X(UBG, 0, KVa - 1);
    p1X(UBG, KVa, C - 1);
    p1X(UBG, 0, C - 1);
}

int main(int vpZV, char *wt[]) {
    if (vpZV < 3) return 0;
    int KVa = atoi(wt[1]);
    int C = vpZV - 2;
    int *UBG = (int*)malloc(C * sizeof(int));
    for(int QY0=0; QY0<C; QY0++) UBG[QY0] = atoi(wt[QY0+2]);
    d(UBG, C, KVa);
    for(int QY0=0; QY0<C; QY0++) printf("%d ", UBG[QY0]);
    printf("\n");
    free(UBG);
    return 0;
}