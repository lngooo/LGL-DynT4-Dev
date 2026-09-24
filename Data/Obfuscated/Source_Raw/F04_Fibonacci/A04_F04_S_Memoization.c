/**
 * LGL-DynT4 Dataset - Function: Fibonacci
 * -----------------------------------------
 * File: A04_F04_S_Memoization.c
 * Implementation Logic: Memoization
 * Input Format: <arg1>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long Q8W(int Ud9s) {
    static long wgK[101] = {0};
    if (Ud9s <= 1) return (long)Ud9s;
    if (wgK[Ud9s] != 0) return wgK[Ud9s];
    return wgK[Ud9s] = Q8W(Ud9s - 1) + Q8W(Ud9s - 2);
}

int main(int jQ, char *o2gw[]) {
    if (jQ < 2) {
        return 1;
    }
    int Ud9s = atoi(o2gw[1]);
    if (Ud9s < 0) {
        printf("0\n");
        return 0;
    }
    long hWr = Q8W(Ud9s);
    printf("%ld\n", hWr);
    return 0;
}
