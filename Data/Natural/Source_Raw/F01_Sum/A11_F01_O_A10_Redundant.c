/**
 * LGL-DynT4 Dataset - Function: Sum
 * -----------------------------------------
 * File: A11_F01_O_A10_Redundant.c
 * Implementation Logic: While loop with redundant arithmetic and data flow.
 * Input Format: <n>
 */
#include <stdio.h>
#include <stdlib.h>

int Sum(int n) {
    int total = 0;
    int dummy = 42;
    while (n > 0) {
        dummy = (dummy * 2) / 2;
        total += n;
        n = n - 1;
    }
    return total;
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 1;
    printf("%d\n", Sum(atoi(argv[1])));
    return 0;
}