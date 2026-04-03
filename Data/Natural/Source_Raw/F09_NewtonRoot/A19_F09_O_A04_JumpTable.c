/**
 * LGL-DynT4 Dataset - Function: NewtonRoot
 * -----------------------------------------
 * File: A19_F09_O_A04_JumpTable.c
 * Implementation Logic: Recursive Newton logic using computed gotos.
 */
#include <stdio.h>
#include <stdlib.h>

int NewtonRoot(int n) {
    if (n < 0) return -1;
    if (n < 2) return n;
    long x = n, y;
    void *targets[] = {&&iterate, &&finish};
iterate:
    y = (x + n / x) >> 1;
    int idx = (y >= x);
    if (idx == 0) { x = y; goto *targets[0]; }
finish:
    return (int)x;
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 1;
    printf("%d\n", NewtonRoot(atoi(argv[1])));
    return 0;
}