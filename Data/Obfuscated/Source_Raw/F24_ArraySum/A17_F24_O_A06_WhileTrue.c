/**
 * LGL-DynT4 Dataset - Function: ArraySum
 * -----------------------------------------
 * File: A17_F24_O_A06_WhileTrue.c
 * Implementation Logic: WhileTrue
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int y(int AAmO[], int N) {
    int iN = 0, M = N - 1;
    while (1) {
        if (M < 0) break;
        iN += AAmO[M--];
    }
    return iN;
}

int main(int buNp, char *KO[]) {
    if (buNp < 2) return 0;
    int N = buNp - 1;
    int *AAmO = (int *)malloc(N * sizeof(int));
    for (int M = 0; M < N; M++) AAmO[M] = atoi(KO[M + 1]);

    int Rf8x = y(AAmO, N);
    printf("%d\n", Rf8x);

    free(AAmO);
    return 0;
}