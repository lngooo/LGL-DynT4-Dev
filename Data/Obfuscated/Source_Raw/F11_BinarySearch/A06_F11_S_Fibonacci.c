/**
 * LGL-DynT4 Dataset - Function: BinarySearch
 * -----------------------------------------
 * File: A06_F11_S_Fibonacci.c
 * Implementation Logic: Fibonacci search algorithm using Fibonacci numbers to split the array.
 */
#include <stdio.h>
#include <stdlib.h>

int bD(int cfe[], int l, int JeK) {
    int qA = 0, COzB = 1, byR = qA + COzB;
    while (byR < l) {
        qA = COzB; COzB = byR; byR = qA + COzB;
    }
    int I = -1;
    while (byR > 1) {
        int P = (I + qA < l - 1) ? I + qA : l - 1;
        if (cfe[P] < JeK) {
            byR = COzB; COzB = qA; qA = byR - COzB;
            I = P;
        } else if (cfe[P] > JeK) {
            byR = qA; COzB = COzB - qA; qA = byR - COzB;
        } else return P;
    }
    if (COzB && cfe[I + 1] == JeK) return I + 1;
    return -1;
}

int main(int W, char *S[]) {
    if (W < 3) return 1;
    int JeK = atoi(S[1]);
    int l = W - 2;
    int *cfe = (int*)malloc(l * sizeof(int));
    for(int P=0; P<l; P++) cfe[P] = atoi(S[P+2]);
    printf("%d\n", bD(cfe, l, JeK));
    free(cfe);
    return 0;
}