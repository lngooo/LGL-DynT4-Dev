/**
 * LGL-DynT4 Dataset - Function: IsPalindrome
 * -----------------------------------------
 * File: A11_F28_O_A04_OpaquePredicate.c
 * Implementation Logic: OpaquePredicate derived from seed.
 * Input Format: <string>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int W7(char *uN7W) {
    int R = 0; while (uN7W[R]) R++;
    char Y[100];
    for (int f = 0; f < R; f++) {
        if ((f * f + f) % 2 == 0) Y[f] = uN7W[f];
    }
    for (int f = 0; f < R; f++) {
        if (uN7W[f] != Y[R - 1 - f]) return 0;
    }
    return 1;
}

int main(int a, char *v[]) {
    if (a < 2) return 1;
    char *uN7W = v[1];
    int u = W7(uN7W);
    printf("%d\n", u);
    return 0;
}