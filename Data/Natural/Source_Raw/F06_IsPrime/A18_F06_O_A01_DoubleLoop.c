/**
 * LGL-DynT4 Dataset - Function: IsPrime
 * -----------------------------------------
 * File: A18_F06_O_A01_DoubleLoop.c
 * Implementation Logic: Trial division with nested loops and redundant counters.
 */
#include <stdio.h>
#include <stdlib.h>

int IsPrime(int n) {
    if (n < 2) return 0;
    int count = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) count++;
        if (count > 2) return 0;
    }
    return count == 2;
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 1;
    printf("%d\n", IsPrime(atoi(argv[1])));
    return 0;
}