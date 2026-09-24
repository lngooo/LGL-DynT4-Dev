/**
 * LGL-DynT4 Dataset - Function: IsPalindrome
 * -----------------------------------------
 * File: A18_F28_O_A05_MathIdentity.c
 * Implementation Logic: MathIdentity derived from seed.
 * Input Format: <string>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int l(char *ejK) {
    int Xf = 0; while (ejK[Xf]) Xf++;
    for(int a = 0; a < Xf/2; a++) {
        double V = (double)ejK[a] - (double)ejK[Xf-1-a];
        if ((int)floor(V * V) != 0) return 0;
    }
    return 1;
}

int main(int Nej, char *O3vY[]) {
    if (Nej < 2) return 1;
    char *ejK = O3vY[1];
    int N = l(ejK);
    printf("%d\n", N);
    return 0;
}