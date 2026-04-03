/**
 * LGL-DynT4 Dataset - Function: Abs
 * -----------------------------------------
 * File: A03_F08_O_A01_Goto.c
 * Implementation Logic: Absolute value using goto labels.
 */
#include <stdio.h>
#include <stdlib.h>

int Abs(int n) {
    if (n >= 0) goto positive;
    return -n;
positive:
    return n;
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 1;
    printf("%d\n", Abs(atoi(argv[1])));
    return 0;
}