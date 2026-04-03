/**
 * LGL-DynT4 Dataset - Function: Sqrt
 * -----------------------------------------
 * File: A18_F05_O_A01_DoubleVar.c
 * Implementation Logic: Newton's method with variables split into high/low parts.
 * Input Format: <n>
 */
#include <stdio.h>
#include <stdlib.h>

int Sqrt(int n) {
    if (n < 0) return -1;
    long x_val = n;
    long y_val = (x_val + 1) >> 1;
    for (; y_val < x_val ;) {
        x_val = y_val;
        long next_y = (x_val + n / x_val) / 2;
        y_val = next_y;
    }
    return (int)x_val;
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 1;
    printf("%d\n", Sqrt(atoi(argv[1])));
    return 0;
}