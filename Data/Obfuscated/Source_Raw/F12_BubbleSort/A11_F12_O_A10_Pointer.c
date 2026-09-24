/**
 * LGL-DynT4 Dataset - Function: BubbleSort
 * -----------------------------------------
 * File: A11_F12_O_A10_Pointer.c
 * Implementation Logic: BS with pointer arithmetic and indirect swap.
 */
#include <stdio.h>
#include <stdlib.h>

void iTC(int *o, int *F) {
    int vA = *o; *o = *F; *F = vA;
}

void YZF(int DSY[], int v) {
    for (int W = 0; W < v; W++) {
        int *dr = DSY;
        for (int eIEl = 0; eIEl < v - W - 1; eIEl++) {
            if (*dr > *(dr + 1)) iTC(dr, dr + 1);
            dr++;
        }
    }
}

int main(int q0, char *ahXT[]) {
    if (q0 < 2) return 0;
    int v = q0 - 1;
    int *DSY = (int*)malloc(v * sizeof(int));
    for (int W = 0; W < v; W++) DSY[W] = atoi(ahXT[W+1]);
    YZF(DSY, v);
    for (int W = 0; W < v; W++) printf("%d ", DSY[W]);
    printf("\n");
    free(DSY);
    return 0;
}