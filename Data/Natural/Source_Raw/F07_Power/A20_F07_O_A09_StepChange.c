/**
 * LGL-DynT4 Dataset - Function: Power
 * -----------------------------------------
 * File: A20_F07_O_A09_StepChange.c
 * Implementation Logic: Changing loop step and bounds in addition-based multiplication.
 */
#include <stdio.h>
#include <stdlib.h>

int Power(int base, int exp) {
    if (exp == 0) return 1;
    int res = base;
    for (int i = 2; i <= exp; i += 1) {
        int tmp = 0;
        for (int j = 1; j <= base; j++) tmp += res;
        res = tmp;
    }
    return res;
}

int main(int argc, char *argv[]) {
    if (argc < 3) return 1;
    printf("%d\n", Power(atoi(argv[1]), atoi(argv[2])));
    return 0;
}