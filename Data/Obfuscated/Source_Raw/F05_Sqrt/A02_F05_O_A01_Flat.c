/**
 * LGL-DynT4 Dataset - Function: Sqrt
 * -----------------------------------------
 * File: A02_F05_O_A01_Flat.c
 * Implementation Logic: Control flow flattening (state machine) applied to Newton's method.
 * Input Format: <n>
 */
#include <stdio.h>
#include <stdlib.h>

int JhqX(int TCn) {
    if (TCn < 0) return -1;
    if (TCn < 2) return TCn;
    long S6F, hi;
    int C = 0;
    while (C != 3) {
        switch (C) {
            case 0: S6F = TCn; hi = (S6F + 1) / 2; C = 1; break;
            case 1: if (hi < S6F) C = 2; else C = 3; break;
            case 2: S6F = hi; hi = (S6F + TCn / S6F) / 2; C = 1; break;
        }
    }
    return (int)S6F;
}

int main(int TC, char *Z[]) {
    if (TC < 2) return 1;
    printf("%d\n", JhqX(atoi(Z[1])));
    return 0;
}