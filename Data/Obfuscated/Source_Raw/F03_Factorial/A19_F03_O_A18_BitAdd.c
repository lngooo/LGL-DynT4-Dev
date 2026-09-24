/**
 * LGL-DynT4 Dataset - Function: Factorial
 * -----------------------------------------
 * File: A19_F03_O_A18_BitAdd.c
 * Implementation Logic: Repeated addition using bitwise add instead of +.
 * Input Format: <n>
 */
#include <stdio.h>
#include <stdlib.h>

long long Fhg(long long Ii, long long DxQ8) {
    while (DxQ8) {
        long long LVUj = Ii & DxQ8;
        Ii = Ii ^ DxQ8;
        DxQ8 = LVUj << 1;
    }
    return Ii;
}

long long Pg1F(int rcSx) {
    if (rcSx < 0) return 0;
    long long CC = 1;
    for (int xg = 2; xg <= rcSx; xg++) {
        long long I5P = 0;
        for (int dzr = 0; dzr < xg; dzr++) I5P = Fhg(I5P, CC);
        CC = I5P;
    }
    return CC;
}

int main(int h8, char *fQnP[]) {
    if (h8 < 2) return 1;
    printf("%lld\n", Pg1F(atoi(fQnP[1])));
    return 0;
}