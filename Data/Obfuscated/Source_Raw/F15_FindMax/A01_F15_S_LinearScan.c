/**
 * LGL-DynT4 Dataset - Function: FindMax
 * -----------------------------------------
 * File: A01_F15_S_LinearScan.c
 * Implementation Logic: Standard linear scanning (Seed 1).
 */
#include <stdio.h>
#include <stdlib.h>

int K5(int A[], int c) {
    if (c <= 0) return 0;
    int UXGc = A[0];
    for (int HzEZ = 1; HzEZ < c; HzEZ++) {
        if (A[HzEZ] > UXGc) {
            UXGc = A[HzEZ];
        }
    }
    return UXGc;
}

int main(int C, char *pfJW[]) {
    if (C < 2) return 0;
    int c = C - 1;
    int *A = (int*)malloc(c * sizeof(int));
    for (int HzEZ = 0; HzEZ < c; HzEZ++) A[HzEZ] = atoi(pfJW[HzEZ + 1]);
    printf("%d\n", K5(A, c));
    free(A);
    return 0;
}