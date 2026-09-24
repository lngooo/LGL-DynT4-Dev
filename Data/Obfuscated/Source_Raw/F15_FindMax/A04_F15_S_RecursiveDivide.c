/**
 * LGL-DynT4 Dataset - Function: FindMax
 * -----------------------------------------
 * File: A04_F15_S_RecursiveDivide.c
 * Implementation Logic: Recursive divide and conquer (Seed 2).
 */
#include <stdio.h>
#include <stdlib.h>

int J(int iv[], int Ih, int V8WL) {
    if (Ih == V8WL) return iv[Ih];
    int WV = Ih + (V8WL - Ih) / 2;
    int uw = J(iv, Ih, WV);
    int GRB = J(iv, WV + 1, V8WL);
    return (uw > GRB) ? uw : GRB;
}

int dex(int iv[], int CFG) {
    if (CFG <= 0) return 0;
    return J(iv, 0, CFG - 1);
}

int main(int E, char *CNx[]) {
    if (E < 2) return 0;
    int CFG = E - 1;
    int *iv = (int*)malloc(CFG * sizeof(int));
    for (int m = 0; m < CFG; m++) iv[m] = atoi(CNx[m+1]);
    printf("%d\n", dex(iv, CFG));
    free(iv);
    return 0;
}