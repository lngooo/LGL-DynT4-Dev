/**
 * LGL-DynT4 Dataset - Function: InsertionSort
 * -----------------------------------------
 * File: A09_F22_O_A06_MathIdent.c
 * Implementation Logic: MathIdent
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void r(int Fb3y[], int Ccon) {
    for (int lQBI = 1; lQBI < Ccon; lQBI++) {
        for (int Q = lQBI; Q > 0; Q--) {
            double cIW = (double)Fb3y[Q-1] - (double)Fb3y[Q];
            if (cIW > 0.0) {
                Fb3y[Q] ^= Fb3y[Q-1]; Fb3y[Q-1] ^= Fb3y[Q]; Fb3y[Q] ^= Fb3y[Q-1];
            } else break;
        }
    }
}

int main(int b6M, char *qZW[]) {
    if (b6M < 2) return 0;
    int Ccon = b6M - 1;
    int *Fb3y = (int *)malloc(Ccon * sizeof(int));
    for (int lQBI = 0; lQBI < Ccon; lQBI++) Fb3y[lQBI] = atoi(qZW[lQBI + 1]);

    r(Fb3y, Ccon);

    for (int lQBI = 0; lQBI < Ccon; lQBI++) {
        printf("%d%s", Fb3y[lQBI], (lQBI == Ccon - 1 ? "" : " "));
    }
    printf("\n");
    free(Fb3y);
    return 0;
}