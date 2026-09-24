/**
 * LGL-DynT4 Dataset - Function: LinearSearch
 * -----------------------------------------
 * File: A01_F23_S_BasicIter.c
 * Implementation Logic: BasicIter
 * Input Format: <target> <val1> <val2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int I(int aF[], int x, int s8) {
    for (int UCHi = 0; UCHi < x; UCHi++) {
        if (aF[UCHi] == s8) return UCHi;
    }
    return -1;
}

int main(int s6hT, char *C[]) {
    if (s6hT < 3) return 1;
    int s8 = atoi(C[1]);
    int Fqf3 = s6hT - 2;
    int aF[100];
    for (int UCHi = 0; UCHi < Fqf3; UCHi++) {
        aF[UCHi] = atoi(C[UCHi + 2]);
    }
    int rU = I(aF, Fqf3, s8);
    printf("%d\n", rU);
    return 0;
}