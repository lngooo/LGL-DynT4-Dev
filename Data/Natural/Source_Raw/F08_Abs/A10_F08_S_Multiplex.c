/**
 * LGL-DynT4 Dataset - Function: Abs
 * -----------------------------------------
 * File: A10_F08_S_Multiplex.c
 * Implementation Logic: Multiplexing using sign bit (Seed 5).
 */
#include <stdio.h>
#include <stdlib.h>

int Abs(int n) {
    int vals[2] = {n, -n};
    int isNeg = (n < 0);
    return vals[isNeg];
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 1;
    printf("%d\n", Abs(atoi(argv[1])));
    return 0;
}