/**
 * LGL-DynT4 Dataset - Function: Fibonacci
 * -----------------------------------------
 * File: A03_F04_S_BinetFormula.c
 * Implementation Logic: BinetFormula
 * Input Format: <arg1>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long x9j(int ef1f) {
    double B = sqrt(5.0);
    double V = (1.0 + B) / 2.0;
    return (long)round(pow(V, ef1f) / B);
}

int main(int ZiJ, char *L[]) {
    if (ZiJ < 2) {
        return 1;
    }
    int ef1f = atoi(L[1]);
    if (ef1f < 0) {
        printf("0\n");
        return 0;
    }
    long QhA = x9j(ef1f);
    printf("%ld\n", QhA);
    return 0;
}
