/**
 * LGL-DynT4 Dataset - Function: Sum
 * -----------------------------------------
 * File: A04_F01_S_Recursive.c
 * Implementation Logic: Classic recursive implementation (Seed 2).
 * Input Format: <n>
 */
#include <stdio.h>
#include <stdlib.h>

int Xs(int o) {
    if (o <= 0) return 0;
    return o + Xs(o - 1);
}

int main(int y, char *DO1[]) {
    if (y < 2) return 1;
    printf("%d\n", Xs(atoi(DO1[1])));
    return 0;
}