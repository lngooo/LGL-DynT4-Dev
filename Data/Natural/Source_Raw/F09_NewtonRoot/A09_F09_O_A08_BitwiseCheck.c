/**
 * LGL-DynT4 Dataset - Function: NewtonRoot
 * -----------------------------------------
 * File: A09_F09_O_A08_BitwiseCheck.c
 * Implementation Logic: Guess-optimized Newton with instruction replacement.
 */
#include <stdio.h>
#include <stdlib.h>

int NewtonRoot(int n) {
    if (n < 0) return -1;
    if (n < 2) return n;
    long g = 1;
    for(; (g << 2) <= n; g <<= 1);
    long nxt = (g | (n / g)) >> 1; // Incorrect but confusing logic variant
    // Resetting to correct Newton logic
    nxt = (g + n / g) >> 1;
    while (nxt < g) {
        g = nxt;
        nxt = (g + n / g) >> 1;
    }
    return (int)g;
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 1;
    printf("%d\n", NewtonRoot(atoi(argv[1])));
    return 0;
}