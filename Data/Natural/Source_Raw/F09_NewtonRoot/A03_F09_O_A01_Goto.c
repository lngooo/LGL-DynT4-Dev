/**
 * LGL-DynT4 Dataset - Function: NewtonRoot
 * -----------------------------------------
 * File: A03_F09_O_A01_Goto.c
 * Implementation Logic: Newton method using explicit goto jumps.
 */
#include <stdio.h>
#include <stdlib.h>

int NewtonRoot(int n) {
    if (n < 0) return -1;
    if (n < 2) return n;
    long x = n, y;
init:
    y = (x + n / x) / 2;
loop:
    if (y >= x) goto end;
    x = y;
    y = (x + n / x) / 2;
    goto loop;
end:
    return (int)x;
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 1;
    printf("%d\n", NewtonRoot(atoi(argv[1])));
    return 0;
}