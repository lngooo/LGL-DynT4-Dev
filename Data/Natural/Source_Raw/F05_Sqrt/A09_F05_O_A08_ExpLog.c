/**
 * LGL-DynT4 Dataset - Function: Sqrt
 * -----------------------------------------
 * File: A09_F05_O_A08_ExpLog.c
 * Implementation Logic: Sqrt via exp(0.5 * log(n)) with accuracy handling.
 * Input Format: <n>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int Sqrt(int n) {
    if (n < 0) return -1;
    if (n == 0) return 0;
    double res = exp(0.5 * log((double)n));
    int i_res = (int)(res + 0.0000000001);
    return i_res;
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 1;
    printf("%d\n", Sqrt(atoi(argv[1])));
    return 0;
}