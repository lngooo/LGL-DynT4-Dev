/**
 * LGL-DynT4 Dataset - Function: GCD
 * -----------------------------------------
 * File: A14_F02_S_PrimeFact.c
 * Implementation Logic: GCD via prime factorization comparison (Seed 7).
 * Input Format: <a> <b>
 */
#include <stdio.h>
#include <stdlib.h>

int bN(int pi, int QhK8) {
    pi = abs(pi); QhK8 = abs(QhK8);
    if (pi == 0 || QhK8 == 0) return pi | QhK8;
    int DS = 1, Xxk = 2;
    while (Xxk <= pi && Xxk <= QhK8) {
        if (pi % Xxk == 0 && QhK8 % Xxk == 0) {
            DS *= Xxk; pi /= Xxk; QhK8 /= Xxk;
        } else Xxk++;
    }
    return DS;
}

int main(int X, char *tg[]) {
    if (X < 3) return 1;
    printf("%d\n", bN(atoi(tg[1]), atoi(tg[2])));
    return 0;
}