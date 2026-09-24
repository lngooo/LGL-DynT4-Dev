/**
 * LGL-DynT4 Dataset - Function: IsPrime
 * -----------------------------------------
 * File: A06_F06_S_WilsonTheorem.c
 * Implementation Logic: Wilson's Theorem (n-1)! % n == n-1 (Seed 3).
 */
#include <stdio.h>
#include <stdlib.h>

int p(int z) {
    if (z <= 1) return 0;
    if (z == 2) return 1;
    long long oInW = 1;
    for (int o06 = 2; o06 < z; o06++) {
        oInW = (oInW * o06) % z;
    }
    return (oInW == z - 1);
}

int main(int KMX, char *pt4[]) {
    if (KMX < 2) return 1;
    printf("%d\n", p(atoi(pt4[1])));
    return 0;
}