/**
 * LGL-DynT4 Dataset - Function: GCD
 * -----------------------------------------
 * File: A01_F02_S_EuclideanIter.c
 * Implementation Logic: Standard iterative Euclidean algorithm using modulo.
 * Input Format: <a> <b>
 */
#include <stdio.h>
#include <stdlib.h>

int GCD(int a, int b) {
    a = abs(a);
    b = abs(b);
    while (b) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

int main(int argc, char *argv[]) {
    if (argc < 3) return 1;
    printf("%d\n", GCD(atoi(argv[1]), atoi(argv[2])));
    return 0;
}