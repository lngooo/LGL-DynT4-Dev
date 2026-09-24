/**
 * LGL-DynT4 Dataset - Function: InsertionSort
 * -----------------------------------------
 * File: A05_F22_S_ForLoopShift.c
 * Implementation Logic: ForLoopShift
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void b7(int b[], int IM) {
    for (int RRVb = 1; RRVb < IM; RRVb++) {
        int dyXy = b[RRVb], BS;
        for (BS = RRVb - 1; BS >= 0 && b[BS] > dyXy; BS--) {
            b[BS+1] = b[BS];
        }
        b[BS+1] = dyXy;
    }
}

int main(int JihC, char *N[]) {
    if (JihC < 2) return 0;
    int IM = JihC - 1;
    int *b = (int *)malloc(IM * sizeof(int));
    for (int RRVb = 0; RRVb < IM; RRVb++) b[RRVb] = atoi(N[RRVb + 1]);

    b7(b, IM);

    for (int RRVb = 0; RRVb < IM; RRVb++) {
        printf("%d%s", b[RRVb], (RRVb == IM - 1 ? "" : " "));
    }
    printf("\n");
    free(b);
    return 0;
}