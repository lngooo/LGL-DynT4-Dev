/**
 * LGL-DynT4 Dataset - Function: BinarySearch
 * -----------------------------------------
 * File: A01_F11_S_Iterative.c
 * Implementation Logic: Standard iterative approach with high/low pointers.
 * Input Format: <target> <val1> <val2> ...
 */
#include <stdio.h>
#include <stdlib.h>

int b(int jdQd[], int rW, int sR) {
    int j1d = 0, nWI = rW - 1;
    while (j1d <= nWI) {
        int w = j1d + (nWI - j1d) / 2;
        if (jdQd[w] == sR) return w;
        if (jdQd[w] < sR) j1d = w + 1;
        else nWI = w - 1;
    }
    return -1;
}

int main(int gN3R, char *VP[]) {
    if (gN3R < 3) return 1;
    int sR = atoi(VP[1]);
    int rW = gN3R - 2;
    int *jdQd = (int*)malloc(rW * sizeof(int));
    for(int pGYY=0; pGYY<rW; pGYY++) jdQd[pGYY] = atoi(VP[pGYY+2]);
    printf("%d\n", b(jdQd, rW, sR));
    free(jdQd);
    return 0;
}