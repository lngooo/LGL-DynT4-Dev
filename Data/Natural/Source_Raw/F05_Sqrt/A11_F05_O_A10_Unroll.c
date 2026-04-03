/**
 * LGL-DynT4 Dataset - Function: Sqrt
 * -----------------------------------------
 * File: A11_F05_O_A10_Unroll.c
 * Implementation Logic: Linear scan with loop unrolling to alter CFG.
 * Input Format: <n>
 */
#include <stdio.h>
#include <stdlib.h>

int Sqrt(int n) {
    if (n < 0) return -1;
    long i = 0;
    for (;; i += 2) {
        if ((i + 1) * (i + 1) > n) return (int)i;
        if ((i + 2) * (i + 2) > n) return (int)(i + 1);
    }
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 1;
    printf("%d\n", Sqrt(atoi(argv[1])));
    return 0;
}