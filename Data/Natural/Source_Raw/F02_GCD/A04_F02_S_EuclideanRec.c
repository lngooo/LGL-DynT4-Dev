/**
 * LGL-DynT4 Dataset - Function: GCD
 * -----------------------------------------
 * File: A04_F02_S_EuclideanRec.c
 * Implementation Logic: Recursive Euclidean algorithm (Seed 2).
 * Input Format: <a> <b>
 */
#include <stdio.h>
#include <stdlib.h>

int GCD(int a, int b) {
    a = abs(a); b = abs(b);
    if (b == 0) return a;
    return GCD(b, a % b);
}

int main(int argc, char *argv[]) {
    if (argc < 3) return 1;
    printf("%d\n", GCD(atoi(argv[1]), atoi(argv[2])));
    return 0;
}