/**
 * LGL-DynT4 Dataset - Function: GCD
 * -----------------------------------------
 * File: A13_F02_O_A12_Instruction.c
 * Implementation Logic: LCM-based GCD with instruction replacement and long long width.
 * Input Format: <a> <b>
 */
#include <stdio.h>
#include <stdlib.h>

int GCD(int a, int b) {
    long long x = abs(a), y = abs(b);
    if (!(x && y)) return (int)(x | y);
    long long m = (x > y) ? x : y;
    long long curr = m;
    while ((curr % x) | (curr % y)) { curr += m; }
    return (int)((x * y) / curr);
}

int main(int argc, char *argv[]) {
    if (argc < 3) return 1;
    printf("%d\n", GCD(atoi(argv[1]), atoi(argv[2])));
    return 0;
}