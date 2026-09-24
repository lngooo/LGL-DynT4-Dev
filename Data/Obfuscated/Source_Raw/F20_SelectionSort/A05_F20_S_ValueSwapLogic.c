/**
 * LGL-DynT4 Dataset - Function: SelectionSort
 * -----------------------------------------
 * File: A05_F20_S_ValueSwapLogic.c
 * Implementation Logic: ValueSwapLogic
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void p(int fKK[], int K) {
    int cduf, awW;
    for (cduf = 0; cduf < K; cduf++) {
        int zGm = fKK[cduf];
        int WzU = cduf;
        for (awW = cduf + 1; awW < K; awW++) {
            if (fKK[awW] < zGm) {
                zGm = fKK[awW];
                WzU = awW;
            }
        }
        fKK[WzU] = fKK[cduf];
        fKK[cduf] = zGm;
    }
}

int main(int iSR, char *v[]) {
    if (iSR < 2) return 0;
    int K = iSR - 1;
    int *fKK = (int *)malloc(K * sizeof(int));
    for (int cduf = 0; cduf < K; cduf++) fKK[cduf] = atoi(v[cduf + 1]);

    p(fKK, K);

    for (int cduf = 0; cduf < K; cduf++) {
        printf("%d%s", fKK[cduf], (cduf == K - 1 ? "" : " "));
    }
    printf("\n");
    free(fKK);
    return 0;
}