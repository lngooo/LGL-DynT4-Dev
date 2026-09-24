/**
 * LGL-DynT4 Dataset - Function: SelectionSort
 * -----------------------------------------
 * File: A03_F20_S_Recursive.c
 * Implementation Logic: Recursive
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void j(int P[], int M) {
    if (M <= 1) return;
    int Gk = 0;
    for (int z = 1; z < M; z++) if (P[z] < P[Gk]) Gk = z;
    int R84D = P[0]; P[0] = P[Gk]; P[Gk] = R84D;
    j(P + 1, M - 1);
}

int main(int KGt, char *B7[]) {
    if (KGt < 2) return 0;
    int M = KGt - 1;
    int *P = (int *)malloc(M * sizeof(int));
    for (int z = 0; z < M; z++) P[z] = atoi(B7[z + 1]);

    j(P, M);

    for (int z = 0; z < M; z++) {
        printf("%d%s", P[z], (z == M - 1 ? "" : " "));
    }
    printf("\n");
    free(P);
    return 0;
}