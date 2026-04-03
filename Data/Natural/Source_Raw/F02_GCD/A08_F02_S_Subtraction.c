/**
 * LGL-DynT4 Dataset - Function: GCD
 * -----------------------------------------
 * File: A08_F02_S_Subtraction.c
 * Implementation Logic: Original Euclidean algorithm using repeated subtraction (Seed 4).
 * Input Format: <a> <b>
 */
#include <stdio.h>
#include <stdlib.h>

int GCD(int a, int b) {
    a = abs(a); b = abs(b);
    if (a == 0) return b;
    while (b != 0) {
        if (a > b) a = a - b;
        else b = b - a;
    }
    return a;
}

int main(int argc, char *argv[]) {
    if (argc < 3) return 1;
    printf("%d\n", GCD(atoi(argv[1]), atoi(argv[2])));
    return 0;
}