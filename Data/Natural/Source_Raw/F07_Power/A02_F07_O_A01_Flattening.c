/**
 * LGL-DynT4 Dataset - Function: Power
 * -----------------------------------------
 * File: A02_F07_O_A01_Flattening.c
 * Implementation Logic: Control flow flattening using switch-case derived from A01.
 * Input Format: <base> <exp>
 */
#include <stdio.h>
#include <stdlib.h>

int Power(int base, int exp) {
    int res = 1, i = 0, state = 0;
    while (state != -1) {
        switch (state) {
            case 0: state = (i < exp) ? 1 : 2; break;
            case 1: res *= base; i++; state = 0; break;
            case 2: state = -1; break;
        }
    }
    return res;
}

int main(int argc, char *argv[]) {
    if (argc < 3) return 1;
    printf("%d\n", Power(atoi(argv[1]), atoi(argv[2])));
    return 0;
}