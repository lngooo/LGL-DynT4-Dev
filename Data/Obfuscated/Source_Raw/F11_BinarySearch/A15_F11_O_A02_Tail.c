/**
 * LGL-DynT4 Dataset - Function: BinarySearch
 * -----------------------------------------
 * File: A15_F11_O_A02_Tail.c
 * Implementation Logic: Tail-recursive optimization variation of A02.
 */
#include <stdio.h>
#include <stdlib.h>

int o(int yigb[], int H3, int jMgl, int NMc4) {
    while (H3 <= jMgl) {
        int f = H3 + (jMgl - H3) / 2;
        if (yigb[f] == NMc4) return f;
        if (yigb[f] < NMc4) H3 = f + 1;
        else jMgl = f - 1;
    }
    return -1;
}

int Qi5M(int X[], int HAx3, int S) {
    return o(X, 0, HAx3 - 1, S);
}

int main(int o8ZE, char *wLZV[]) {
    if (o8ZE < 3) return 1;
    int S = atoi(wLZV[1]);
    int HAx3 = o8ZE - 2;
    int *X = (int*)malloc(HAx3 * sizeof(int));
    for(int B=0; B<HAx3; B++) X[B] = atoi(wLZV[B+2]);
    printf("%d\n", Qi5M(X, HAx3, S));
    free(X);
    return 0;
}