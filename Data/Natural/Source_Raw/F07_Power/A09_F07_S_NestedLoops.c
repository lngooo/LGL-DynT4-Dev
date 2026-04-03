/**
 * LGL-DynT4 Dataset - Function: Power
 * -----------------------------------------
 * File: A09_F07_S_NestedLoops.c
 * Implementation Logic: Exponentiation by simulating multiplication via addition loops.
 * Input Format: <base> <exp>
 */
#include <stdio.h>
#include <stdlib.h>

int Power(int base, int exp) {
    if (exp == 0) return 1;
    int res = base;
    for (int i = 1; i < exp; i++) {
        int tmp = 0;
        for (int j = 0; j < base; j++) {
            tmp += res;
        }
        res = tmp;
    }
    return res;
}

int main(int argc, char *argv[]) {
    if (argc < 3) return 1;
    printf("%d\n", Power(atoi(argv[1]), atoi(argv[2])));
    return 0;
}