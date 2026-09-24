/**
 * LGL-DynT4 Dataset - Function: KthSmallest
 * -----------------------------------------
 * File: A14_F18_O_A02_Unroll.c
 * Implementation Logic: Unroll
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int O(int fs[], int y, int v, int L) {
    while (y <= v) {
        int EF = fs[v], a = y, Q = y;
        for (; Q < v - 1; Q += 2) {
            if (fs[Q] <= EF) { int g=fs[a]; fs[a]=fs[Q]; fs[Q]=g; a++; }
            if (fs[Q+1] <= EF) { int g=fs[a]; fs[a]=fs[Q+1]; fs[Q+1]=g; a++; }
        }
        for (; Q < v; Q++) if (fs[Q] <= EF) { int g=fs[a]; fs[a]=fs[Q]; fs[Q]=g; a++; }
        int g=fs[a]; fs[a]=fs[v]; fs[v]=g;
        if (a == L - 1) return fs[a];
        if (a > L - 1) v = a - 1; else y = a + 1;
    }
    return -1;
}

int main(int HY, char *FEW[]) {
    if (HY < 3) return 0;
    int L = atoi(FEW[1]);
    int MBv = HY - 2;
    int *fs = (int *)malloc(MBv * sizeof(int));
    for (int a = 0; a < MBv; a++) fs[a] = atoi(FEW[a + 2]);

    // 假设 K 是从 1 开始的 (1st smallest)
    int R4v = O(fs, 0, MBv - 1, L);

    printf("%d\n", R4v);
    free(fs);
    return 0;
}