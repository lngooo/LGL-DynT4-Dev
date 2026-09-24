/**
 * LGL-DynT4 Dataset - Function: GCD
 * -----------------------------------------
 * File: A21_F02_O_A20_SwitchLoop.c
 * Implementation Logic: Recursive-to-iterative conversion using switch-driven loop.
 * Input Format: <a> <b>
 */
#include <stdio.h>
#include <stdlib.h>

static inline int _internal_gcd_switch_loop(int m, int n) {
    int state = 0;
    int next_m = 0;
    int next_n = 0;
    while (1) {
        switch (state) {
            case 0:
                if (n == 0) return m;
                state = 1;
                break;
            case 1:
                next_m = n;
                next_n = m % n;
                state = 2;
                break;
            case 2:
                m = next_m;
                n = next_n;
                state = 0;
                break;
            default:
                return m;
        }
    }
}

int GCD(int a, int b) {
    return _internal_gcd_switch_loop(abs(a), abs(b));
}

int main(int argc, char *argv[]) {
    if (argc < 3) return 1;
    printf("%d\n", GCD(atoi(argv[1]), atoi(argv[2])));
    return 0;
}