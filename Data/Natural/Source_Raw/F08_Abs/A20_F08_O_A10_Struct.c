/**
 * LGL-DynT4 Dataset - Function: Abs
 * -----------------------------------------
 * File: A20_F08_O_A10_Struct.c
 * Implementation Logic: Wrapping input and sign in a struct.
 */
#include <stdio.h>
#include <stdlib.h>

struct Data { int val; int sign; };

int Abs(int n) {
    struct Data d;
    d.val = n;
    d.sign = (n < 0);
    if (d.sign) return -d.val;
    return d.val;
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 1;
    printf("%d\n", Abs(atoi(argv[1])));
    return 0;
}