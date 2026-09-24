/**
 * LGL-DynT4 Dataset - Function: IsPalindrome
 * -----------------------------------------
 * File: A05_F28_S_BitwiseXor.c
 * Implementation Logic: BitwiseXor derived from seed.
 * Input Format: <string>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int CM(char *Q) {
    int Xn = 0;
    while (Q[Xn]) Xn++;
    int cKa = 0, v3 = Xn - 1;
    while (cKa < v3) {
        if ((Q[cKa] ^ Q[v3]) != 0) return 0;
        cKa++; v3--;
    }
    return 1;
}

int main(int lwD, char *Pd[]) {
    if (lwD < 2) return 1;
    char *Q = Pd[1];
    int yj8s = CM(Q);
    printf("%d\n", yj8s);
    return 0;
}