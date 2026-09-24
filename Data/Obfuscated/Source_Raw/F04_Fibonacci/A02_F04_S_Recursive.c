/**
 * LGL-DynT4 Dataset - Function: Fibonacci
 * -----------------------------------------
 * File: A02_F04_S_Recursive.c
 * Implementation Logic: Recursive
 * Input Format: <arg1>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long gYSh(int BC) {
    if (BC <= 1) return (long)BC;
    return gYSh(BC - 1) + gYSh(BC - 2);
}

int main(int Av, char *zAUg[]) {
    if (Av < 2) {
        return 1;
    }
    int BC = atoi(zAUg[1]);
    if (BC < 0) {
        printf("0\n");
        return 0;
    }
    long BuQ = gYSh(BC);
    printf("%ld\n", BuQ);
    return 0;
}
