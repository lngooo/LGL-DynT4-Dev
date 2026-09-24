/**
 * LGL-DynT4 Dataset - Function: QuickSort
 * -----------------------------------------
 * File: A05_F13_S_MedianOfThree.c
 * Implementation Logic: MedianOfThree
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void H9RN(int Ap[], int Bt, int CIi) {
    if (Bt < CIi) {
        int Pi = Bt + (CIi - Bt) / 2;
        if (Ap[Pi] < Ap[Bt]) { int it = Ap[Pi]; Ap[Pi] = Ap[Bt]; Ap[Bt] = it; }
        if (Ap[CIi] < Ap[Bt]) { int it = Ap[CIi]; Ap[CIi] = Ap[Bt]; Ap[Bt] = it; }
        if (Ap[CIi] < Ap[Pi]) { int it = Ap[CIi]; Ap[CIi] = Ap[Pi]; Ap[Pi] = it; }
        int B6 = Ap[Pi];
        int P7 = Bt, ue = CIi;
        while (P7 <= ue) {
            while (Ap[P7] < B6) P7++;
            while (Ap[ue] > B6) ue--;
            if (P7 <= ue) {
                int it = Ap[P7]; Ap[P7] = Ap[ue]; Ap[ue] = it;
                P7++; ue--;
            }
        }
        if (Bt < ue) H9RN(Ap, Bt, ue);
        if (P7 < CIi) H9RN(Ap, P7, CIi);
    }
}

int main(int l, char *jUb[]) {
    if (l < 2) return 0;
    int A9A = l - 1;
    int *Ap = (int *)malloc(A9A * sizeof(int));
    for (int P7 = 0; P7 < A9A; P7++) Ap[P7] = atoi(jUb[P7 + 1]);

    H9RN(Ap, 0, A9A - 1);

    for (int P7 = 0; P7 < A9A; P7++) {
        printf("%d%s", Ap[P7], (P7 == A9A - 1 ? "" : " "));
    }
    printf("\n");
    free(Ap);
    return 0;
}