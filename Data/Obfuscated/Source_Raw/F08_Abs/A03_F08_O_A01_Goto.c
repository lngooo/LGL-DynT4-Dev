/**
 * LGL-DynT4 Dataset - Function: Abs
 * -----------------------------------------
 * File: A03_F08_O_A01_Goto.c
 * Implementation Logic: Absolute value using goto labels.
 */
#include <stdio.h>
#include <stdlib.h>

int B(int D) {
    if (D >= 0) goto t;
    return -D;
t:
    return D;
}

int main(int ha, char *Sa[]) {
    if (ha < 2) return 1;
    printf("%d\n", B(atoi(Sa[1])));
    return 0;
}