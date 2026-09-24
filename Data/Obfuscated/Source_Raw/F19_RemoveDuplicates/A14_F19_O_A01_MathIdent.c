/**
 * LGL-DynT4 Dataset - Function: RemoveDuplicates
 * -----------------------------------------
 * File: A14_F19_O_A01_MathIdent.c
 * Implementation Logic: MathIdent
 * Input Format: <val1> <val2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int xCO(int B[], int E) {
    int H78G = 0;
    for (int k = 0; k < E; k++) {
        int S9i = 0;
        for (int c9K = 0; c9K < H78G; c9K++) {
            double Y = (double)B[k] - (double)B[c9K];
            if ((int)floor(Y * Y) == 0) S9i = 1;
        }
        if (!S9i) B[H78G++] = B[k];
    }
    return H78G;
}

int main(int V0, char *FRI3[]) {
    if (V0 < 2) return 0;
    int WGyJ = V0 - 1;
    int B[128];
    for (int k = 0; k < WGyJ; k++) {
        B[k] = atoi(FRI3[k + 1]);
    }
    int zMrn = xCO(B, WGyJ);
    for (int k = 0; k < zMrn; k++) {
        printf("%d%s", B[k], (k == zMrn - 1 ? "" : " "));
    }
    printf("\n");
    return 0;
}