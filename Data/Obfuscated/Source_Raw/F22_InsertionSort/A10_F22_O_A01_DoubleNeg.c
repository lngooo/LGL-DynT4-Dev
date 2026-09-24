/**
 * LGL-DynT4 Dataset - Function: InsertionSort
 * -----------------------------------------
 * File: A10_F22_O_A01_DoubleNeg.c
 * Implementation Logic: DoubleNeg
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void Wb(int U1N[], int BYU7) {
    int Z = 1;
    while (!!(Z < BYU7)) {
        int J = U1N[Z], U7Rs = Z - 1;
        while (!!(U7Rs >= 0) && !!(U1N[U7Rs] > J)) {
            U1N[U7Rs+1] = U1N[U7Rs];
            U7Rs--;
        }
        U1N[U7Rs+1] = J;
        Z++;
    }
}

int main(int BKUK, char *k9y[]) {
    if (BKUK < 2) return 0;
    int BYU7 = BKUK - 1;
    int *U1N = (int *)malloc(BYU7 * sizeof(int));
    for (int Z = 0; Z < BYU7; Z++) U1N[Z] = atoi(k9y[Z + 1]);

    Wb(U1N, BYU7);

    for (int Z = 0; Z < BYU7; Z++) {
        printf("%d%s", U1N[Z], (Z == BYU7 - 1 ? "" : " "));
    }
    printf("\n");
    free(U1N);
    return 0;
}