/**
 * LGL-DynT4 Dataset - Function: InsertionSort
 * -----------------------------------------
 * File: A19_F22_O_A01_JumpTable.c
 * Implementation Logic: JumpTable
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void S(int ei[], int Bwiz) {
    for (int Ts = 1; Ts < Bwiz; Ts++) {
        int v = ei[Ts], LMN = Ts - 1;
    U:
        if (LMN >= 0 && ei[LMN] > v) {
            ei[LMN+1] = ei[LMN];
            LMN--;
            goto U;
        }
        ei[LMN+1] = v;
    }
}

int main(int e, char *C6A[]) {
    if (e < 2) return 0;
    int Bwiz = e - 1;
    int *ei = (int *)malloc(Bwiz * sizeof(int));
    for (int Ts = 0; Ts < Bwiz; Ts++) ei[Ts] = atoi(C6A[Ts + 1]);

    S(ei, Bwiz);

    for (int Ts = 0; Ts < Bwiz; Ts++) {
        printf("%d%s", ei[Ts], (Ts == Bwiz - 1 ? "" : " "));
    }
    printf("\n");
    free(ei);
    return 0;
}