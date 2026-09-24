/**
 * LGL-DynT4 Dataset - Function: Fibonacci
 * -----------------------------------------
 * File: A19_F04_O_A01_AlgebraicIdentity.c
 * Implementation Logic: AlgebraicIdentity
 * Input Format: <arg1>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long Gz0(int qcWP) {
    long sw = 0, P = 1;
    if (qcWP == 0) return 0;
    for (int rhZ = 2; rhZ <= qcWP; rhZ++) {
        P = sw + P; sw = P - sw;
    }
    return (qcWP == 1) ? 1 : P;
}

int main(int B4z, char *yvlF[]) {
    if (B4z < 2) {
        return 1;
    }
    int qcWP = atoi(yvlF[1]);
    if (qcWP < 0) {
        printf("0\n");
        return 0;
    }
    long x7ZH = Gz0(qcWP);
    printf("%ld\n", x7ZH);
    return 0;
}
