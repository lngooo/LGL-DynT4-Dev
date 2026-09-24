/**
 * LGL-DynT4 Dataset - Function: QuickSort
 * -----------------------------------------
 * File: A20_F13_O_A01_JumpTable.c
 * Implementation Logic: JumpTable
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void QQ(int V[], int hLMD, int Jg0) {
    int lt9z = 0;
    int M = 0;
    int R = 0;
    int uFPQ = 0;
    int f = 0;
    while (1) {
        switch (lt9z) {
            case 0:
                if (hLMD >= Jg0) return;
                M = V[Jg0];
                R = hLMD - 1;
                uFPQ = hLMD;
                lt9z = 1;
                break;
            case 1:
                if (uFPQ >= Jg0) {
                    lt9z = 3;
                } else {
                    lt9z = (V[uFPQ] < M) ? 2 : 4;
                }
                break;
            case 2:
                R++;
                f = V[R];
                V[R] = V[uFPQ];
                V[uFPQ] = f;
                lt9z = 4;
                break;
            case 3:
                f = V[R + 1];
                V[R + 1] = V[Jg0];
                V[Jg0] = f;
                QQ(V, hLMD, R);
                QQ(V, R + 2, Jg0);
                return;
            case 4:
                uFPQ++;
                lt9z = 1;
                break;
            default:
                return;
        }
    }
}

int main(int i4, char *W[]) {
    if (i4 < 2) return 0;
    int Qj = i4 - 1;
    int *V = (int *)malloc(Qj * sizeof(int));
    for (int R = 0; R < Qj; R++) V[R] = atoi(W[R + 1]);

    QQ(V, 0, Qj - 1);

    for (int R = 0; R < Qj; R++) {
        printf("%d%s", V[R], (R == Qj - 1 ? "" : " "));
    }
    printf("\n");
    free(V);
    return 0;
}