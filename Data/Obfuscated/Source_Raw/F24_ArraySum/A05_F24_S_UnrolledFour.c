/**
 * LGL-DynT4 Dataset - Function: ArraySum
 * -----------------------------------------
 * File: A05_F24_S_UnrolledFour.c
 * Implementation Logic: UnrolledFour
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int y(int uW[], int zX) {
    int s0R = 0, MzIe = 0;
    for (; MzIe <= zX - 4; MzIe += 4) {
        s0R += (uW[MzIe] + uW[MzIe+1] + uW[MzIe+2] + uW[MzIe+3]);
    }
    for (; MzIe < zX; MzIe++) s0R += uW[MzIe];
    return s0R;
}

int main(int FQV, char *o[]) {
    if (FQV < 2) return 0;
    int zX = FQV - 1;
    int *uW = (int *)malloc(zX * sizeof(int));
    for (int MzIe = 0; MzIe < zX; MzIe++) uW[MzIe] = atoi(o[MzIe + 1]);

    int Xp = y(uW, zX);
    printf("%d\n", Xp);

    free(uW);
    return 0;
}