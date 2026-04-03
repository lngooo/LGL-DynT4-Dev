/**
 * LGL-DynT4 Dataset - Function: Abs
 * -----------------------------------------
 * File: A19_F08_O_A04_InlineAsm.c
 * Implementation Logic: Simulating assembly-style negation logic.
 */
#include <stdio.h>
#include <stdlib.h>

int Abs(int n) {
    int v = n;
    if (v < 0) {
        v = ~v;
        v = v + 1;
    }
    return v;
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 1;
    printf("%d\n", Abs(atoi(argv[1])));
    return 0;
}