/**
 * LGL-DynT4 Dataset - Function: Fibonacci
 * -----------------------------------------
 * File: A21_F04_O_A01_DuffStyleLoop.c
 * Implementation Logic: DuffStyleLoop
 * Input Format: <arg1>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long cU36(int NBr) {
    long e = 0, xGZV = 1, bj;
    int ciep = NBr;
    if (NBr == 0) return 0;
    if (NBr == 1) return 1;
    ciep--;
    do {
        bj = e + xGZV; e = xGZV; xGZV = bj;
    } while (--ciep > 0);
    return xGZV;
}

int main(int xy8, char *M[]) {
    if (xy8 < 2) {
        return 1;
    }
    int NBr = atoi(M[1]);
    if (NBr < 0) {
        printf("0\n");
        return 0;
    }
    long RC = cU36(NBr);
    printf("%ld\n", RC);
    return 0;
}
