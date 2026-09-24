/**
 * LGL-DynT4 Dataset - Function: Abs
 * -----------------------------------------
 * File: A12_F08_S_StandardLib.c
 * Implementation Logic: Wrapping stdlib abs() (Seed 6).
 */
#include <stdio.h>
#include <stdlib.h>

int G(int O0) {
    return abs(O0);
}

int main(int eLKd, char *Q9ip[]) {
    if (eLKd < 2) return 1;
    printf("%d\n", G(atoi(Q9ip[1])));
    return 0;
}