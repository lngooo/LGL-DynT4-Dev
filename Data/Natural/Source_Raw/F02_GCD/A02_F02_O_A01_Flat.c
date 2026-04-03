/**
 * LGL-DynT4 Dataset - Function: GCD
 * -----------------------------------------
 * File: A02_F02_O_A01_Flat.c
 * Implementation Logic: Control flow flattening with a state machine derived from A01.
 * Input Format: <a> <b>
 */
#include <stdio.h>
#include <stdlib.h>

int GCD(int a, int b) {
    int t, state = 0;
    a = abs(a); b = abs(b);
    while (state != 3) {
        switch (state) {
            case 0: state = (b != 0) ? 1 : 3; break;
            case 1: t = b; b = a % b; state = 2; break;
            case 2: a = t; state = 0; break;
        }
    }
    return a;
}

int main(int argc, char *argv[]) {
    if (argc < 3) return 1;
    printf("%d\n", GCD(atoi(argv[1]), atoi(argv[2])));
    return 0;
}