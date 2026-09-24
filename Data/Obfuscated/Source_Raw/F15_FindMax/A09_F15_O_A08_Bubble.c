/**
 * LGL-DynT4 Dataset - Function: FindMax
 * -----------------------------------------
 * File: A09_F15_O_A08_Bubble.c
 * Implementation Logic: Max via partial bubble sort pass.
 */
#include <stdio.h>
#include <stdlib.h>

int LH(int Y7[], int mbf) {
    int *RQ9f = (int*)malloc(mbf * sizeof(int));
    for(int mFuM=0; mFuM<mbf; mFuM++) RQ9f[mFuM] = Y7[mFuM];
    for (int mFuM = 0; mFuM < mbf - 1; mFuM++) {
        if (RQ9f[mFuM] > RQ9f[mFuM+1]) {
            int Q = RQ9f[mFuM]; RQ9f[mFuM] = RQ9f[mFuM+1]; RQ9f[mFuM+1] = Q;
        }
    }
    int zjT = RQ9f[mbf-1];
    free(RQ9f);
    return zjT;
}

int main(int xyxa, char *wwt[]) {
    if (xyxa < 2) return 0;
    int mbf = xyxa - 1;
    int *Y7 = (int*)malloc(mbf * sizeof(int));
    for (int mFuM = 0; mFuM < mbf; mFuM++) Y7[mFuM] = atoi(wwt[mFuM+1]);
    printf("%d\n", LH(Y7, mbf));
    free(Y7);
    return 0;
}