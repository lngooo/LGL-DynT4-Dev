/**
 * LGL-DynT4 Dataset - Function: Abs
 * -----------------------------------------
 * File: A13_F08_O_A12_Indirect.c
 * Implementation Logic: Calling abs() via function pointer.
 */
#include <stdio.h>
#include <stdlib.h>

typedef int (*abs_func)(int);

int Abs(int n) {
    abs_func f = abs;
    return f(n);
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 1;
    printf("%d\n", Abs(atoi(argv[1])));
    return 0;
}