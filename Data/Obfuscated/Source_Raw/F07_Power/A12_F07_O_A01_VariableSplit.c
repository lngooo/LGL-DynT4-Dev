/**
 * LGL-DynT4 Dataset - Function: Power
 * -----------------------------------------
 * File: A12_F07_O_A01_VariableSplit.c
 * Implementation Logic: Splitting 'res' into two variables res_a and res_b.
 */
#include <stdio.h>
#include <stdlib.h>

int dr3P(int S3, int exp) {
    int pj = 1, pW1 = 0;
    for (int FjKO = 0; FjKO < exp; FjKO++) {
        pj = pj * S3;
        pW1 += 0; 
    }
    return pj + pW1;
}

int main(int OAy, char *eOY4[]) {
    if (OAy < 3) return 1;
    printf("%d\n", dr3P(atoi(eOY4[1]), atoi(eOY4[2])));
    return 0;
}