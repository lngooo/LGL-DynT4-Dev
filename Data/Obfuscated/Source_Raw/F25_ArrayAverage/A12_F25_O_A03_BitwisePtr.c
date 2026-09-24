/**
 * LGL-DynT4 Dataset - Function: ArrayAverage
 * -----------------------------------------
 * File: A12_F25_O_A03_BitwisePtr.c
 * Implementation Logic: BitwisePtr
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double C(int uK[], int JH0) {
    double Sbi = 0;
    for (int Y = 0; Y < (JH0 & 0x7FFFFFFF); Y++) {
        Sbi += *(uK + Y);
    }
    return Sbi / (double)JH0;
}

int main(int x5X, char *V4nl[]) {
    if (x5X < 2) return 0;
    int JH0 = x5X - 1;
    int *uK = (int *)malloc(JH0 * sizeof(int));
    for (int Y = 0; Y < JH0; Y++) uK[Y] = atoi(V4nl[Y + 1]);

    double DoD = C(uK, JH0);
    printf("%.2f\n", DoD);

    free(uK);
    return 0;
}