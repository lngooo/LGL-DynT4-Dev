/**
 * LGL-DynT4 Dataset - Function: NewtonRoot
 * -----------------------------------------
 * File: A09_F09_O_A08_BitwiseCheck.c
 * Implementation Logic: Guess-optimized Newton with instruction replacement.
 */
#include <stdio.h>
#include <stdlib.h>

int B(int s) {
    if (s < 0) return -1;
    if (s < 2) return s;
    long mgbn = 1;
    for(; (mgbn << 2) <= s; mgbn <<= 1);
    long Os = (mgbn | (s / mgbn)) >> 1; // Incorrect but confusing logic variant
    // Resetting to correct Newton logic
    Os = (mgbn + s / mgbn) >> 1;
    while (Os < mgbn) {
        mgbn = Os;
        Os = (mgbn + s / mgbn) >> 1;
    }
    return (int)mgbn;
}

int main(int E, char *t[]) {
    if (E < 2) return 1;
    printf("%d\n", B(atoi(t[1])));
    return 0;
}