/**
 * LGL-DynT4 Dataset - Function: LinearSearch
 * -----------------------------------------
 * File: A06_F23_S_BitwiseCheck.c
 * Implementation Logic: BitwiseCheck
 * Input Format: <target> <val1> <val2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int AoK4(int In[], int N, int iMI) {
    for (int U = 0; U < N; U++) {
        if (!(In[U] ^ iMI)) return U;
    }
    return -1;
}

int main(int Z, char *fXTv[]) {
    if (Z < 3) return 1;
    int iMI = atoi(fXTv[1]);
    int XXJ = Z - 2;
    int In[100];
    for (int U = 0; U < XXJ; U++) {
        In[U] = atoi(fXTv[U + 2]);
    }
    int P = AoK4(In, XXJ, iMI);
    printf("%d\n", P);
    return 0;
}