/**
 * LGL-DynT4 Dataset - Function: IntToRoman
 * -----------------------------------------
 * File: A01_F50_S_Greedy_Arrays.c
 * Implementation Logic: Standard greedy approach using parallel arrays of values and symbols.
 * Input Format: <int>
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void y(int U, char* SU) {
    int KPx[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    char* tDVK[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    SU[0] = '\0';
    for (int zbW = 0; zbW < 13; zbW++) {
        while (U >= KPx[zbW]) {
            strcat(SU, tDVK[zbW]);
            U -= KPx[zbW];
        }
    }
}

int main(int GBR, char* NrKX[]) {
    if (GBR < 2) return 0;
    char m4RI[100];
    y(atoi(NrKX[1]), m4RI);
    printf("%s\n", m4RI);
    return 0;
}