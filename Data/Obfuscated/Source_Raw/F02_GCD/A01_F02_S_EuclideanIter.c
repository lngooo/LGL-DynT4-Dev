/**
 * LGL-DynT4 Dataset - Function: GCD
 * -----------------------------------------
 * File: A01_F02_S_EuclideanIter.c
 * Implementation Logic: Standard iterative Euclidean algorithm using modulo.
 * Input Format: <a> <b>
 */
#include <stdio.h>
#include <stdlib.h>

int Ic(int LJj, int ictx) {
    LJj = abs(LJj);
    ictx = abs(ictx);
    while (ictx) {
        int w = ictx;
        ictx = LJj % ictx;
        LJj = w;
    }
    return LJj;
}

int main(int Rp, char *NVj7[]) {
    if (Rp < 3) return 1;
    printf("%d\n", Ic(atoi(NVj7[1]), atoi(NVj7[2])));
    return 0;
}