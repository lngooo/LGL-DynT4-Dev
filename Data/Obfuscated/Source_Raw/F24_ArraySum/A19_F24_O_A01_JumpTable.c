/**
 * LGL-DynT4 Dataset - Function: ArraySum
 * -----------------------------------------
 * File: A19_F24_O_A01_JumpTable.c
 * Implementation Logic: JumpTable
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int GPhZ(int kpD[], int a) {
    int R = 0, HE3y = 0;
Y:
    if (HE3y >= a) return R;
    R += kpD[HE3y++];
    goto Y;
}

int main(int q4TI, char *T[]) {
    if (q4TI < 2) return 0;
    int a = q4TI - 1;
    int *kpD = (int *)malloc(a * sizeof(int));
    for (int HE3y = 0; HE3y < a; HE3y++) kpD[HE3y] = atoi(T[HE3y + 1]);

    int C = GPhZ(kpD, a);
    printf("%d\n", C);

    free(kpD);
    return 0;
}