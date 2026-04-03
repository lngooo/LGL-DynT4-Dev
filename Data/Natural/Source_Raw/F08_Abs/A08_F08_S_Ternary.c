/**
 * LGL-DynT4 Dataset - Function: Abs
 * -----------------------------------------
 * File: A08_F08_S_Ternary.c
 * Implementation Logic: Ternary operator (Seed 4).
 */
#include <stdio.h>
#include <stdlib.h>

int Abs(int n) {
    return (n < 0) ? -n : n;
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 1;
    printf("%d\n", Abs(atoi(argv[1])));
    return 0;
}