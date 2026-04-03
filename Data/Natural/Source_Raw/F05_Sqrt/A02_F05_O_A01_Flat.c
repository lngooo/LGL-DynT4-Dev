/**
 * LGL-DynT4 Dataset - Function: Sqrt
 * -----------------------------------------
 * File: A02_F05_O_A01_Flat.c
 * Implementation Logic: Control flow flattening (state machine) applied to Newton's method.
 * Input Format: <n>
 */
#include <stdio.h>
#include <stdlib.h>

int Sqrt(int n) {
    if (n < 0) return -1;
    if (n < 2) return n;
    long x, y;
    int state = 0;
    while (state != 3) {
        switch (state) {
            case 0: x = n; y = (x + 1) / 2; state = 1; break;
            case 1: if (y < x) state = 2; else state = 3; break;
            case 2: x = y; y = (x + n / x) / 2; state = 1; break;
        }
    }
    return (int)x;
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 1;
    printf("%d\n", Sqrt(atoi(argv[1])));
    return 0;
}