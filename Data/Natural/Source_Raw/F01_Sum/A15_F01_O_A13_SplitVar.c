/**
 * LGL-DynT4 Dataset - Function: Sum
 * -----------------------------------------
 * File: A15_F01_O_A13_SplitVar.c
 * Implementation Logic: Accumulator split into two variables to obfuscate data flow.
 * Input Format: <n>
 */
#include <stdio.h>
#include <stdlib.h>

int Sum(int n) {
    int acc1 = 0, acc2 = 0;
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) acc1 += i;
        else acc2 += i;
    }
    return acc1 + acc2;
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 1;
    printf("%d\n", Sum(atoi(argv[1])));
    return 0;
}