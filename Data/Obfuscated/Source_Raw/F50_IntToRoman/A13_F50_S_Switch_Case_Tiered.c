/**
 * LGL-DynT4 Dataset - Function: IntToRoman
 * -----------------------------------------
 * File: A13_F50_S_Switch_Case_Tiered.c
 * Implementation Logic: Tiered conversion using switch-case for remainders.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void a6zy(char* h, int D, const char* oE) {
    for (int LJ = 0; LJ < D; LJ++) strcat(h, oE);
}
void yJ(char* h, int or, const char* QtM5, const char* cpTu, const char* A) {
    switch (or) {
        case 0:
            break;
        case 1:
        case 2:
        case 3:
            a6zy(h, or, QtM5);
            break;
        case 4:
            strcat(h, QtM5);
            strcat(h, cpTu);
            break;
        case 5:
            strcat(h, cpTu);
            break;
        case 6:
        case 7:
        case 8:
            strcat(h, cpTu);
            a6zy(h, or - 5, QtM5);
            break;
        default:
            strcat(h, QtM5);
            strcat(h, A);
            break;
    }
}
void uDGN(int HYU3, char* mv) {
    mv[0] = '\0';
    a6zy(mv, HYU3 / 1000, "M");
    HYU3 %= 1000;
    yJ(mv, HYU3 / 100, "C", "D", "M");
    HYU3 %= 100;
    yJ(mv, HYU3 / 10, "X", "L", "C");
    HYU3 %= 10;
    yJ(mv, HYU3, "I", "V", "X");
}

int main(int SCa, char* CpVg[]) {
    if (SCa < 2) return 0;
    char ZQ[100];
    uDGN(atoi(CpVg[1]), ZQ);
    printf("%s\n", ZQ);
    return 0;
}