/**
 * LGL-DynT4 Dataset - Function: Abs
 * -----------------------------------------
 * File: A09_F08_O_A08_NestedTernary.c
 * Implementation Logic: Abs logic hidden in nested ternaries with dummy values.
 */
#include <stdio.h>
#include <stdlib.h>

int Abs(int n) {
    return (n == 0) ? 0 : ((n < 0) ? (0 - n) : (n + 0));
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 1;
    printf("%d\n", Abs(atoi(argv[1])));
    return 0;
}