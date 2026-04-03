/**
 * LGL-DynT4 Dataset - Function: GCD
 * -----------------------------------------
 * File: A21_F02_O_A20_SwitchLoop.c
 * Implementation Logic: Recursive-to-iterative conversion using switch-driven loop.
 * Input Format: <a> <b>
 */
#include <stdio.h>
#include <stdlib.h>

int GCD(int a, int b) {
    a = abs(a); b = abs(b);
    while (1) {
        if (b == 0) return a;
        int next_a = b;
        int next_b = a % b;
        a = next_a;
        b = next_b;
    }
}

int main(int argc, char *argv[]) {
    if (argc < 3) return 1;
    printf("%d\n", GCD(atoi(argv[1]), atoi(argv[2])));
    return 0;
}