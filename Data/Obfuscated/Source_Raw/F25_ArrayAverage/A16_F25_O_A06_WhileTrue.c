/**
 * LGL-DynT4 Dataset - Function: ArrayAverage
 * -----------------------------------------
 * File: A16_F25_O_A06_WhileTrue.c
 * Implementation Logic: WhileTrue
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double X0(int T3K[], int mX) {
    double nt = 0; int gb = mX;
    while (1) {
        if (--gb < 0) break;
        nt += T3K[gb];
    }
    return nt / mX;
}

int main(int X, char *Iw[]) {
    if (X < 2) return 0;
    int mX = X - 1;
    int *T3K = (int *)malloc(mX * sizeof(int));
    for (int gb = 0; gb < mX; gb++) T3K[gb] = atoi(Iw[gb + 1]);

    double u = X0(T3K, mX);
    printf("%.2f\n", u);

    free(T3K);
    return 0;
}