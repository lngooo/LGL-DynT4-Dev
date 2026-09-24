/**
 * LGL-DynT4 Dataset - Function: BinarySearch
 * -----------------------------------------
 * File: A08_F11_S_JumpSearch.c
 * Implementation Logic: Jump search using sqrt(n) blocks, then linear scan.
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int K(int IJ8f[], int nVV, int nA5) {
    int kl = sqrt(nVV);
    int N1 = 0;
    while (IJ8f[(kl < nVV ? kl : nVV) - 1] < nA5) {
        N1 = kl;
        kl += sqrt(nVV);
        if (N1 >= nVV) return -1;
    }
    while (IJ8f[N1] < nA5) {
        N1++;
        if (N1 == (kl < nVV ? kl : nVV)) return -1;
    }
    if (IJ8f[N1] == nA5) return N1;
    return -1;
}

int main(int mhl, char *W[]) {
    if (mhl < 3) return 1;
    int nA5 = atoi(W[1]);
    int nVV = mhl - 2;
    int *IJ8f = (int*)malloc(nVV * sizeof(int));
    for(int PJes=0; PJes<nVV; PJes++) IJ8f[PJes] = atoi(W[PJes+2]);
    printf("%d\n", K(IJ8f, nVV, nA5));
    free(IJ8f);
    return 0;
}