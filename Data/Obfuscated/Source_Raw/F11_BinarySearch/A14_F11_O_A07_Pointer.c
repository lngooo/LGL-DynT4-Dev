/**
 * LGL-DynT4 Dataset - Function: BinarySearch
 * -----------------------------------------
 * File: A14_F11_O_A07_Pointer.c
 * Implementation Logic: Bitwise search using pointer arithmetic.
 */
#include <stdio.h>
#include <stdlib.h>

int iO(int K[], int dk, int lH9) {
    int *MKOb = K;
    int fnC = 0;
    int Eko1 = 1 << (31 - __builtin_clz(dk));
    while (Eko1 > 0) {
        int MjYL = fnC | Eko1;
        if (MjYL < dk && *(MKOb + MjYL) <= lH9) fnC = MjYL;
        Eko1 >>= 1;
    }
    return (*(MKOb + fnC) == lH9) ? fnC : -1;
}

int main(int NQ, char *kUR[]) {
    if (NQ < 3) return 1;
    int lH9 = atoi(kUR[1]);
    int dk = NQ - 2;
    int *K = (int*)malloc(dk * sizeof(int));
    for(int DML=0; DML<dk; DML++) K[DML] = atoi(kUR[DML+2]);
    printf("%d\n", iO(K, dk, lH9));
    free(K);
    return 0;
}