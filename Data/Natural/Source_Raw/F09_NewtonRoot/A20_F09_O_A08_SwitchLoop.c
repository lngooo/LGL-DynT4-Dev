/**
 * LGL-DynT4 Dataset - Function: NewtonRoot
 * -----------------------------------------
 * File: A20_F09_O_A08_SwitchLoop.c
 * Implementation Logic: Newton guessing logic inside a state-switch loop.
 */
#include <stdio.h>
#include <stdlib.h>

int NewtonRoot(int n) {
    if (n < 0) return -1;
    long x = 1, y = 0;
    int s = 0;
    while (s != 3) {
        switch(s) {
            case 0: if ((x << 2) <= n) x <<= 1; else s = 1; break;
            case 1: y = (x + n/x) >> 1; s = 2; break;
            case 2: if (y < x) { x = y; s = 1; } else s = 3; break;
        }
    }
    return (int)x;
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 1;
    printf("%d\n", NewtonRoot(atoi(argv[1])));
    return 0;
}