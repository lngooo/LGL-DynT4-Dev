/**
 * LGL-DynT4 Dataset - Function: NewtonRoot
 * -----------------------------------------
 * File: A18_F09_O_A01_DoubleVar.c
 * Implementation Logic: Standard Newton with split variables and redundant ops.
 */
#include <stdio.h>
#include <stdlib.h>

int NewtonRoot(int n) {
    if (n < 0) return -1;
    long a = n, b = n;
    long res = (a + 1) / 2;
    while (res < b) {
        b = res;
        long tmp = n / b;
        res = (b + tmp) / 2;
    }
    return (int)b;
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 1;
    printf("%d\n", NewtonRoot(atoi(argv[1])));
    return 0;
}