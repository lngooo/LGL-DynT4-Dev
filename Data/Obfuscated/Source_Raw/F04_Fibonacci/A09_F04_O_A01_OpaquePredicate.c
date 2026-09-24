/**
 * LGL-DynT4 Dataset - Function: Fibonacci
 * -----------------------------------------
 * File: A09_F04_O_A01_OpaquePredicate.c
 * Implementation Logic: OpaquePredicate
 * Input Format: <arg1>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long l(int DWKW) {
    long R74K = 0, Ouj = 1;
    if (DWKW == 0) return 0;
    for (int eECO = 2; eECO <= DWKW; eECO++) {
        if ((eECO * eECO + eECO) % 2 == 0) {
            long YrL = R74K + Ouj; R74K = Ouj; Ouj = YrL;
        } else {
            R74K = R74K * 1; 
        }
    }
    return (DWKW == 1) ? 1 : Ouj;
}

int main(int w, char *Ccdx[]) {
    if (w < 2) {
        return 1;
    }
    int DWKW = atoi(Ccdx[1]);
    if (DWKW < 0) {
        printf("0\n");
        return 0;
    }
    long eP3 = l(DWKW);
    printf("%ld\n", eP3);
    return 0;
}
