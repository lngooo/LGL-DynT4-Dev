/**
 * LGL-DynT4 Dataset - Function: RemoveDuplicates
 * -----------------------------------------
 * File: A16_F19_O_A06_Opaque.c
 * Implementation Logic: Opaque
 * Input Format: <val1> <val2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int a(int OMx[], int f8T) {
    int UiA[128] = {0}, udO = 0;
    if ((f8T * f8T + f8T) % 2 == 0) {
        for (int w = 0; w < f8T; w++) {
            for (int U9 = w + 1; U9 < f8T; U9++) if (OMx[w] == OMx[U9]) UiA[U9] = 1;
        }
    }
    for (int w = 0; w < f8T; w++) if (!UiA[w]) OMx[udO++] = OMx[w];
    return udO;
}

int main(int lqb, char *U[]) {
    if (lqb < 2) return 0;
    int Pq3O = lqb - 1;
    int OMx[128];
    for (int w = 0; w < Pq3O; w++) {
        OMx[w] = atoi(U[w + 1]);
    }
    int Co = a(OMx, Pq3O);
    for (int w = 0; w < Co; w++) {
        printf("%d%s", OMx[w], (w == Co - 1 ? "" : " "));
    }
    printf("\n");
    return 0;
}