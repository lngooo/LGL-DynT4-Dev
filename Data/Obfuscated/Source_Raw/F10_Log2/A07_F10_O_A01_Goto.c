/**
 * LGL-DynT4 Dataset - Function: Log2
 * -----------------------------------------
 * File: A07_F10_O_A01_Goto.c
 * Implementation Logic: Goto
 * Input Format: <integer>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int XIN(int M) {
    int Q = 0;
P:
    M >>= 1;
    if (M == 0) goto d;
    Q++;
    goto P;
d:
    return Q;
}

int main(int A, char *yhJq[]) {
    if (A < 2) return 0;
    int M = atoi(yhJq[1]);
    if (M <= 0) return 0; 
    int SjnS = XIN(M);
    printf("%d\n", SjnS);
    return 0;
}