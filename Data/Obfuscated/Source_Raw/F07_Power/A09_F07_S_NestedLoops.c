/**
 * LGL-DynT4 Dataset - Function: Power
 * -----------------------------------------
 * File: A09_F07_S_NestedLoops.c
 * Implementation Logic: Exponentiation by simulating multiplication via addition loops.
 * Input Format: <base> <exp>
 */
#include <stdio.h>
#include <stdlib.h>

int silu(int Nd3w, int exp) {
    if (exp == 0) return 1;
    int F = Nd3w;
    for (int m0 = 1; m0 < exp; m0++) {
        int JGPF = 0;
        for (int RFAT = 0; RFAT < Nd3w; RFAT++) {
            JGPF += F;
        }
        F = JGPF;
    }
    return F;
}

int main(int FkfK, char *Y[]) {
    if (FkfK < 3) return 1;
    printf("%d\n", silu(atoi(Y[1]), atoi(Y[2])));
    return 0;
}