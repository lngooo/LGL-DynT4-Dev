/**
 * LGL-DynT4 Dataset - Function: GCD
 * -----------------------------------------
 * File: A08_F02_S_Subtraction.c
 * Implementation Logic: Original Euclidean algorithm using repeated subtraction (Seed 4).
 * Input Format: <a> <b>
 */
#include <stdio.h>
#include <stdlib.h>

int EN(int D, int OKmT) {
    D = abs(D); OKmT = abs(OKmT);
    if (D == 0) return OKmT;
    while (OKmT != 0) {
        if (D > OKmT) D = D - OKmT;
        else OKmT = OKmT - D;
    }
    return D;
}

int main(int Fzpj, char *W[]) {
    if (Fzpj < 3) return 1;
    printf("%d\n", EN(atoi(W[1]), atoi(W[2])));
    return 0;
}