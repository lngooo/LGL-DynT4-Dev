/**
 * LGL-DynT4 Dataset - Function: MergeSort
 * -----------------------------------------
 * File: A01_F16_S_ClassicRecursive.c
 * Implementation Logic: ClassicRecursive
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void FLy(int Xsu[], int b, int wZV) {
    if (b < wZV) {
        int W = b + (wZV - b) / 2;
        FLy(Xsu, b, W);
        FLy(Xsu, W + 1, wZV);
        int ygB = W - b + 1, wAw = wZV - W;
        int *Q = (int*)malloc(ygB * sizeof(int));
        int *pp = (int*)malloc(wAw * sizeof(int));
        for (int Lf6 = 0; Lf6 < ygB; Lf6++) Q[Lf6] = Xsu[b + Lf6];
        for (int t = 0; t < wAw; t++) pp[t] = Xsu[W + 1 + t];
        int Lf6 = 0, t = 0, v = b;
        while (Lf6 < ygB && t < wAw) Xsu[v++] = (Q[Lf6] <= pp[t]) ? Q[Lf6++] : pp[t++];
        while (Lf6 < ygB) Xsu[v++] = Q[Lf6++];
        while (t < wAw) Xsu[v++] = pp[t++];
        free(Q); free(pp);
    }
}

int main(int bI, char *cDQ[]) {
    if (bI < 2) return 0;
    int KG5A = bI - 1;
    int *Xsu = (int *)malloc(KG5A * sizeof(int));
    for (int Lf6 = 0; Lf6 < KG5A; Lf6++) Xsu[Lf6] = atoi(cDQ[Lf6 + 1]);

    FLy(Xsu, 0, KG5A - 1);

    for (int Lf6 = 0; Lf6 < KG5A; Lf6++) {
        printf("%d%s", Xsu[Lf6], (Lf6 == KG5A - 1 ? "" : " "));
    }
    printf("\n");
    free(Xsu);
    return 0;
}