/**
 * LGL-DynT4 Dataset - Function: RemoveDuplicates
 * -----------------------------------------
 * File: A13_F19_O_A04_PtrOffset.c
 * Implementation Logic: PtrOffset
 * Input Format: <val1> <val2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int Ly(int g[], int OV) {
    int *c = g;
    for (int mT = 0; mT < OV; mT++) {
        int ge8I = 1;
        for (int tUE = 0; tUE < (int)(c - g); tUE++) {
            if (*(g + tUE) == *(g + mT)) ge8I = 0;
        }
        if (ge8I) { *c = *(g + mT); c++; }
    }
    return (int)(c - g);
}

int main(int IU, char *ci[]) {
    if (IU < 2) return 0;
    int AJ = IU - 1;
    int g[128];
    for (int mT = 0; mT < AJ; mT++) {
        g[mT] = atoi(ci[mT + 1]);
    }
    int W22 = Ly(g, AJ);
    for (int mT = 0; mT < W22; mT++) {
        printf("%d%s", g[mT], (mT == W22 - 1 ? "" : " "));
    }
    printf("\n");
    return 0;
}