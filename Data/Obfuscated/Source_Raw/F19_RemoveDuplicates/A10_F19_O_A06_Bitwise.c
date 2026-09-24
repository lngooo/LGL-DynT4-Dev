/**
 * LGL-DynT4 Dataset - Function: RemoveDuplicates
 * -----------------------------------------
 * File: A10_F19_O_A06_Bitwise.c
 * Implementation Logic: Bitwise
 * Input Format: <val1> <val2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int wG(int X[], int dR) {
    int BMV[128] = {0}, B = 0;
    for (int ssFf = 0; ssFf < dR; ssFf++) {
        if (BMV[ssFf]) continue;
        for (int pNjU = ssFf + 1; pNjU < dR; pNjU++) {
            if (!(X[ssFf] ^ X[pNjU])) BMV[pNjU] = 1;
        }
    }
    for (int ssFf = 0; ssFf < dR; ssFf++) if (!BMV[ssFf]) X[B++] = X[ssFf];
    return B;
}

int main(int pr, char *q[]) {
    if (pr < 2) return 0;
    int Q0 = pr - 1;
    int X[128];
    for (int ssFf = 0; ssFf < Q0; ssFf++) {
        X[ssFf] = atoi(q[ssFf + 1]);
    }
    int mETY = wG(X, Q0);
    for (int ssFf = 0; ssFf < mETY; ssFf++) {
        printf("%d%s", X[ssFf], (ssFf == mETY - 1 ? "" : " "));
    }
    printf("\n");
    return 0;
}