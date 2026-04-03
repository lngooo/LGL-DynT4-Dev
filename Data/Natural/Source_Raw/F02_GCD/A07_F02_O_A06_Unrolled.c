/**
 * LGL-DynT4 Dataset - Function: GCD
 * -----------------------------------------
 * File: A07_F02_O_A06_Unrolled.c
 * Implementation Logic: Stein's algorithm with partially unrolled bit-shifting loops.
 * Input Format: <a> <b>
 */
#include <stdio.h>
#include <stdlib.h>

int GCD(int a, int b) {
    a = abs(a); b = abs(b);
    if (!a || !b) return a | b;
    int s = 0;
    while (!((a&1)||(b&1))) { a>>=1; b>>=1; s++; }
    while (b) {
        while (!(b&1)) b>>=1;
        if (a > b) { int tmp = a; a = b; b = tmp; }
        b -= a;
    }
    return a << s;
}

int main(int argc, char *argv[]) {
    if (argc < 3) return 1;
    printf("%d\n", GCD(atoi(argv[1]), atoi(argv[2])));
    return 0;
}