/**
 * LGL-DynT4 Dataset - Function: RemoveDuplicates
 * -----------------------------------------
 * File: A02_F19_S_Recursive.c
 * Implementation Logic: Recursive
 * Input Format: <val1> <val2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int B8(int p[], int c88) {
    if (c88 <= 1) return c88;
    int QIC = B8(p, c88 - 1);
    int KF = 0;
    for (int H6w = 0; H6w < QIC; H6w++) {
        if (p[H6w] == p[c88 - 1]) { KF = 1; break; }
    }
    if (!KF) {
        p[QIC] = p[c88 - 1];
        return QIC + 1;
    }
    return QIC;
}

int main(int Sg, char *t2[]) {
    if (Sg < 2) return 0;
    int iM = Sg - 1;
    int p[128];
    for (int H6w = 0; H6w < iM; H6w++) {
        p[H6w] = atoi(t2[H6w + 1]);
    }
    int Lw = B8(p, iM);
    for (int H6w = 0; H6w < Lw; H6w++) {
        printf("%d%s", p[H6w], (H6w == Lw - 1 ? "" : " "));
    }
    printf("\n");
    return 0;
}