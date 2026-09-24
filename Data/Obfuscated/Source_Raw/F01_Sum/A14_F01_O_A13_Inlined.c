/**
 * LGL-DynT4 Dataset - Function: Sum
 * -----------------------------------------
 * File: A14_F01_O_A13_Inlined.c
 * Implementation Logic: Manual inlining of tail recursion into a jump loop.
 * Input Format: <n>
 */
#include <stdio.h>
#include <stdlib.h>

int eGp(int QFn) {
    int U7 = 0;
pYEZ:
    if (QFn <= 0) return U7;
    U7 += QFn;
    QFn--;
    goto pYEZ;
}

int main(int mggQ, char *wBAD[]) {
    if (mggQ < 2) return 1;
    printf("%d\n", eGp(atoi(wBAD[1])));
    return 0;
}