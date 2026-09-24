/**
 * LGL-DynT4 Dataset - Function: RemoveDuplicates
 * -----------------------------------------
 * File: A01_F19_S_DoubleLoop.c
 * Implementation Logic: DoubleLoop
 * Input Format: <val1> <val2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int eH1L(int W[], int Q5) {
    int l = 0;
    for (int aJ = 0; aJ < Q5; aJ++) {
        int Zuhc = 0;
        for (int Kn = 0; Kn < l; Kn++) {
            if (W[aJ] == W[Kn]) { Zuhc = 1; break; }
        }
        if (!Zuhc) W[l++] = W[aJ];
    }
    return l;
}

int main(int fJ, char *Wcf[]) {
    if (fJ < 2) return 0;
    int G = fJ - 1;
    int W[128];
    for (int aJ = 0; aJ < G; aJ++) {
        W[aJ] = atoi(Wcf[aJ + 1]);
    }
    int x9I = eH1L(W, G);
    for (int aJ = 0; aJ < x9I; aJ++) {
        printf("%d%s", W[aJ], (aJ == x9I - 1 ? "" : " "));
    }
    printf("\n");
    return 0;
}