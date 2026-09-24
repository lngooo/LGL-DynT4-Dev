/**
 * LGL-DynT4 Dataset - Function: Sum
 * -----------------------------------------
 * File: A06_F01_O_A04_Ternary.c
 * Implementation Logic: Recursive logic compressed into ternary operators.
 * Input Format: <n>
 */
#include <stdio.h>
#include <stdlib.h>

int kD(int r7OS) {
    return (r7OS <= 0) ? 0 : (r7OS + kD(r7OS - 1));
}

int main(int Ru, char *o[]) {
    if (Ru < 2) return 1;
    printf("%d\n", kD(atoi(o[1])));
    return 0;
}