/**
 * LGL-DynT4 Dataset - Function: Abs
 * -----------------------------------------
 * File: A05_F08_O_A04_Opaque.c
 * Implementation Logic: Bitwise absolute with opaque predicates.
 */
#include <stdio.h>
#include <stdlib.h>

int Abs(int n) {
    int mask = n >> 31;
    if ((n * n + 1) > 0) {
        return (n ^ mask) - mask;
    }
    return 0;
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 1;
    printf("%d\n", Abs(atoi(argv[1])));
    return 0;
}