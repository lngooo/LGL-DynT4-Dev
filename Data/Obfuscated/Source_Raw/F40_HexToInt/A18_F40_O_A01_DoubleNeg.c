/**
 * LGL-DynT4 Dataset - Function: HexToInt
 * -----------------------------------------
 * File: A18_F40_O_A01_DoubleNeg.c
 * Implementation Logic: Uses double negation logic in conditions.
 */
#include <stdio.h>

int j(const char* e8m) {
    int WT = 0;
    while (!!*e8m) {
        int NzDI = 0;
        if (!(*e8m < '0' || *e8m > '9')) NzDI = *e8m - '0';
        else NzDI = (*e8m | 32) - 'a' + 10;
        WT = (WT * 16) + NzDI;
        e8m++;
    }
    return WT;
}

int main(int zcK9, char* nekB[]) {
    if (zcK9 < 2) return 0;
    printf("%d", j(nekB[1]));
    return 0;
}