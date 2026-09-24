/**
 * LGL-DynT4 Dataset - Function: SelectionSort
 * -----------------------------------------
 * File: A18_F20_O_A02_PtrOffset.c
 * Implementation Logic: PtrOffset
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void O(int bN[], int K) {
    for (int bVUi = 0; bVUi < K; bVUi++) {
        int *OOXw = bN + bVUi;
        int *pP = OOXw + 1;
        int *tm = OOXw;
        while (pP < bN + K) {
            if (*pP < *tm) tm = pP;
            pP++;
        }
        int UX = *OOXw; *OOXw = *tm; *tm = UX;
    }
}

int main(int XqQd, char *f7j[]) {
    if (XqQd < 2) return 0;
    int K = XqQd - 1;
    int *bN = (int *)malloc(K * sizeof(int));
    for (int bVUi = 0; bVUi < K; bVUi++) bN[bVUi] = atoi(f7j[bVUi + 1]);

    O(bN, K);

    for (int bVUi = 0; bVUi < K; bVUi++) {
        printf("%d%s", bN[bVUi], (bVUi == K - 1 ? "" : " "));
    }
    printf("\n");
    free(bN);
    return 0;
}