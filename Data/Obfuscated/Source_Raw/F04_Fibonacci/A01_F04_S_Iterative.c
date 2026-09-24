/**
 * LGL-DynT4 Dataset - Function: Fibonacci
 * -----------------------------------------
 * File: A01_F04_S_Iterative.c
 * Implementation Logic: Iterative
 * Input Format: <arg1>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long DP9(int d) {
    long zBRg = 0, T6Ce = 1, u;
    if (d == 0) return 0;
    for (int ei = 2; ei <= d; ei++) {
        u = zBRg + T6Ce;
        zBRg = T6Ce;
        T6Ce = u;
    }
    return T6Ce;
}

int main(int NOL, char *yMH[]) {
    if (NOL < 2) {
        return 1;
    }
    int d = atoi(yMH[1]);
    if (d < 0) {
        printf("0\n");
        return 0;
    }
    long DGM = DP9(d);
    printf("%ld\n", DGM);
    return 0;
}
