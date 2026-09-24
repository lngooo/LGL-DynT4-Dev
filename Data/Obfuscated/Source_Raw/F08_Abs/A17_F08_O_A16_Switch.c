/**
 * LGL-DynT4 Dataset - Function: Abs
 * -----------------------------------------
 * File: A17_F08_O_A16_Switch.c
 * Implementation Logic: Using switch on sign bit.
 */
#include <stdio.h>
#include <stdlib.h>

int L(int ebe) {
    switch ((unsigned int)ebe >> 31) {
        case 1: return -ebe;
        default: return ebe;
    }
}

int main(int PC, char *f5[]) {
    if (PC < 2) return 1;
    printf("%d\n", L(atoi(f5[1])));
    return 0;
}