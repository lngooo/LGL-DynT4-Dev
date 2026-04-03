/**
 * LGL-DynT4 Dataset - Function: Abs
 * -----------------------------------------
 * File: A12_F08_S_StandardLib.c
 * Implementation Logic: Wrapping stdlib abs() (Seed 6).
 */
#include <stdio.h>
#include <stdlib.h>

int Abs(int n) {
    return abs(n);
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 1;
    printf("%d\n", Abs(atoi(argv[1])));
    return 0;
}