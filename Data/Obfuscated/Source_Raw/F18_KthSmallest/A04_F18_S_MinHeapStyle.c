/**
 * LGL-DynT4 Dataset - Function: KthSmallest
 * -----------------------------------------
 * File: A04_F18_S_MinHeapStyle.c
 * Implementation Logic: MinHeapStyle
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int s(int wS1T[], int zN0, int Ap, int NU) {
    // Partial selection sort to find kth
    for (int Dy6Q = 0; Dy6Q < NU; Dy6Q++) {
        int SK = Dy6Q;
        for (int z = Dy6Q + 1; z <= Ap; z++) {
            if (wS1T[z] < wS1T[SK]) SK = z;
        }
        int p = wS1T[Dy6Q]; wS1T[Dy6Q] = wS1T[SK]; wS1T[SK] = p;
    }
    return wS1T[NU-1];
}

int main(int r4, char *Q6e[]) {
    if (r4 < 3) return 0;
    int NU = atoi(Q6e[1]);
    int FA = r4 - 2;
    int *wS1T = (int *)malloc(FA * sizeof(int));
    for (int Dy6Q = 0; Dy6Q < FA; Dy6Q++) wS1T[Dy6Q] = atoi(Q6e[Dy6Q + 2]);

    // 假设 K 是从 1 开始的 (1st smallest)
    int x = s(wS1T, 0, FA - 1, NU);

    printf("%d\n", x);
    free(wS1T);
    return 0;
}