/**
 * LGL-DynT4 Dataset - Function: Log2
 * -----------------------------------------
 * File: A03_F10_S_MathChangeBase.c
 * Implementation Logic: MathChangeBase
 * Input Format: <integer>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int ju3T(int Xf) {
    if (Xf == 1) return 0;
    return (int)(log(Xf) / log(2) + 1e-9);
}

int main(int vOlu, char *a[]) {
    if (vOlu < 2) return 0;
    int Xf = atoi(a[1]);
    if (Xf <= 0) return 0; 
    int rnWX = ju3T(Xf);
    printf("%d\n", rnWX);
    return 0;
}