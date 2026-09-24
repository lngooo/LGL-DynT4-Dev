/**
 * LGL-DynT4 Dataset - Function: Log2
 * -----------------------------------------
 * File: A11_F10_O_A01_MathIdent.c
 * Implementation Logic: MathIdent
 * Input Format: <integer>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int Ddg(int c2) {
    int xZR = 0;
    while (c2 > 1) {
        double BVh = (double)c2 / 2.0;
        c2 = (int)floor(BVh);
        xZR++;
    }
    return xZR;
}

int main(int W, char *a[]) {
    if (W < 2) return 0;
    int c2 = atoi(a[1]);
    if (c2 <= 0) return 0; 
    int QP = Ddg(c2);
    printf("%d\n", QP);
    return 0;
}