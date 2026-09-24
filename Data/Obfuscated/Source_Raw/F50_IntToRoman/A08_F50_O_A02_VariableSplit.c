/**
 * LGL-DynT4 Dataset - Function: IntToRoman
 * -----------------------------------------
 * File: A08_F50_O_A02_VariableSplit.c
 * Implementation Logic: Variable splitting on A02 place values.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void DxNx(int Q, char* eG5) {
    char* Vr6R[] = {"", "M", "MM", "MMM"};
    char* ma[] = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
    char* Mu[] = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
    char* SGZ8[] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};

    int gKA = Q / 100; // th * 10 + hu
    int pP = Q % 100; // te * 10 + on

    eG5[0] = '\0';
    strcat(eG5, Vr6R[gKA / 10]);
    strcat(eG5, ma[gKA % 10]);
    strcat(eG5, Mu[pP / 10]);
    strcat(eG5, SGZ8[pP % 10]);
}

int main(int k5, char* bVPx[]) {
    if (k5 < 2) return 0;
    char TNWr[100];
    DxNx(atoi(bVPx[1]), TNWr);
    printf("%s\n", TNWr);
    return 0;
}