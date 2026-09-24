/**
 * LGL-DynT4 Dataset - Function: Factorial
 * -----------------------------------------
 * File: A15_F03_O_A14_Ternary.c
 * Implementation Logic: Decrement logic compressed with ternary and comma operators.
 * Input Format: <n>
 */
#include <stdio.h>
#include <stdlib.h>

long long sXZo(int oOm) {
    long long RWU = 1;
    if (oOm < 0) return 0;
    for (; oOm > 1; RWU *= (oOm > 1 ? oOm : 1), oOm = (oOm > 1 ? oOm - 1 : oOm));
    return RWU;
}

int main(int Og, char *t[]) {
    if (Og < 2) return 1;
    printf("%lld\n", sXZo(atoi(t[1])));
    return 0;
}