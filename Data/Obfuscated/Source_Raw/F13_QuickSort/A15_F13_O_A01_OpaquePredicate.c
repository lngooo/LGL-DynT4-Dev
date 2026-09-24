/**
 * LGL-DynT4 Dataset - Function: QuickSort
 * -----------------------------------------
 * File: A15_F13_O_A01_OpaquePredicate.c
 * Implementation Logic: OpaquePredicate
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void fF4p(int C18[], int nHt, int hx) {
    if (nHt < hx) {
        if ((hx * hx + 1) > 0) {
            int X = C18[hx], fC = nHt - 1;
            for (int Z = nHt; Z < hx; Z++) {
                if (C18[Z] < X) { fC++; int Gjmv = C18[fC]; C18[fC] = C18[Z]; C18[Z] = Gjmv; }
            }
            int Gjmv = C18[fC+1]; C18[fC+1] = C18[hx]; C18[hx] = Gjmv;
            fF4p(C18, nHt, fC);
            fF4p(C18, fC + 2, hx);
        }
    }
}

int main(int U3Ht, char *jX3[]) {
    if (U3Ht < 2) return 0;
    int H = U3Ht - 1;
    int *C18 = (int *)malloc(H * sizeof(int));
    for (int fC = 0; fC < H; fC++) C18[fC] = atoi(jX3[fC + 1]);

    fF4p(C18, 0, H - 1);

    for (int fC = 0; fC < H; fC++) {
        printf("%d%s", C18[fC], (fC == H - 1 ? "" : " "));
    }
    printf("\n");
    free(C18);
    return 0;
}