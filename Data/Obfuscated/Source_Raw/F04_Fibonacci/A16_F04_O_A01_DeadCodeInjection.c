/**
 * LGL-DynT4 Dataset - Function: Fibonacci
 * -----------------------------------------
 * File: A16_F04_O_A01_DeadCodeInjection.c
 * Implementation Logic: DeadCodeInjection
 * Input Format: <arg1>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long CNa5(int n1j) {
    long hXsp = 0, hdp = 1, OYND;
    if (n1j == 0) return 0;
    for (int h = 2; h <= n1j; h++) {
        OYND = hXsp + hdp; hXsp = hdp; hdp = OYND;
        if (0) { printf("never"); n1j++; }
    }
    return (n1j == 1) ? 1 : hdp;
}

int main(int MIbO, char *Tj[]) {
    if (MIbO < 2) {
        return 1;
    }
    int n1j = atoi(Tj[1]);
    if (n1j < 0) {
        printf("0\n");
        return 0;
    }
    long BaN = CNa5(n1j);
    printf("%ld\n", BaN);
    return 0;
}
