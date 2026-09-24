/**
 * LGL-DynT4 Dataset - Function: SelectionSort
 * -----------------------------------------
 * File: A08_F20_O_A01_CFP.c
 * Implementation Logic: CFP
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void qEqW(int P7i8[], int K) {
    int cx2s = 0, A2N6 = 0, Cx, xfR;
    while (cx2s != 3) {
        switch (cx2s) {
            case 0: cx2s = (A2N6 < K - 1) ? 1 : 3; break;
            case 1: Cx = A2N6; xfR = A2N6 + 1; cx2s = 2; break;
            case 2:
                for (; xfR < K; xfR++) if (P7i8[xfR] < P7i8[Cx]) Cx = xfR;
                int GCq4 = P7i8[Cx]; P7i8[Cx] = P7i8[A2N6]; P7i8[A2N6] = GCq4;
                A2N6++; cx2s = 0; break;
        }
    }
}

int main(int N, char *V[]) {
    if (N < 2) return 0;
    int K = N - 1;
    int *P7i8 = (int *)malloc(K * sizeof(int));
    for (int A2N6 = 0; A2N6 < K; A2N6++) P7i8[A2N6] = atoi(V[A2N6 + 1]);

    qEqW(P7i8, K);

    for (int A2N6 = 0; A2N6 < K; A2N6++) {
        printf("%d%s", P7i8[A2N6], (A2N6 == K - 1 ? "" : " "));
    }
    printf("\n");
    free(P7i8);
    return 0;
}