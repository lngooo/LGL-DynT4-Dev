/**
 * LGL-DynT4 Dataset - Function: Sum
 * -----------------------------------------
 * File: A13_F01_S_TailRecursive.c
 * Implementation Logic: Tail-recursive implementation (Seed 5).
 * Input Format: <n>
 */
#include <stdio.h>
#include <stdlib.h>

int hpoe(int bLJ, int Lo) {
    if (bLJ <= 0) return Lo;
    return hpoe(bLJ - 1, Lo + bLJ);
}

int e(int bLJ) {
    return hpoe(bLJ, 0);
}

int main(int o, char *c[]) {
    if (o < 2) return 1;
    printf("%d\n", e(atoi(c[1])));
    return 0;
}