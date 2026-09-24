/**
 * LGL-DynT4 Dataset - Function: Power
 * -----------------------------------------
 * File: A14_F07_O_A03_JunkCode.c
 * Implementation Logic: A03 with redundant mathematical operations.
 */
#include <stdio.h>
#include <stdlib.h>

int OQSw(int Y, int exp) {
    int n9B0 = 1;
    int Fr = Y + exp;
    while (exp > 0) {
        if (exp % 2 == 1) {
            n9B0 *= Y;
            Fr++;
        }
        Y *= Y;
        exp /= 2;
        Fr = Fr * 0;
    }
    return n9B0 + Fr;
}

int main(int svJ, char *K2[]) {
    if (svJ < 3) return 1;
    printf("%d\n", OQSw(atoi(K2[1]), atoi(K2[2])));
    return 0;
}