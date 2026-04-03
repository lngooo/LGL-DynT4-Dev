/**
 * LGL-DynT4 Dataset - Function: Sum
 * -----------------------------------------
 * File: A12_F01_O_A10_DoWhile.c
 * Implementation Logic: Logic converted to do-while with boundary check.
 * Input Format: <n>
 */
#include <stdio.h>
#include <stdlib.h>

int Sum(int n) {
    if (n <= 0) return 0;
    int total = 0;
    int i = 1;
    do {
        total += i;
        i++;
    } while (i <= n);
    return total;
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 1;
    printf("%d\n", Sum(atoi(argv[1])));
    return 0;
}