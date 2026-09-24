/**
 * LGL-DynT4 Dataset - Function: Fibonacci
 * -----------------------------------------
 * File: A18_F04_O_A01_ArrayPointerLogic.c
 * Implementation Logic: ArrayPointerLogic
 * Input Format: <arg1>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long X(int icw) {
    long Pl1[2] = {0, 1};
    if (icw == 0) return 0;
    for (int SEOl = 2; SEOl <= icw; SEOl++) {
        Pl1[SEOl % 2] = Pl1[0] + Pl1[1];
    }
    return Pl1[icw % 2];
}

int main(int eT, char *csmc[]) {
    if (eT < 2) {
        return 1;
    }
    int icw = atoi(csmc[1]);
    if (icw < 0) {
        printf("0\n");
        return 0;
    }
    long cu = X(icw);
    printf("%ld\n", cu);
    return 0;
}
