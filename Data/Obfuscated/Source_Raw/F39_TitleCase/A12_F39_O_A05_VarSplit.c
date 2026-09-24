/**
 * LGL-DynT4 Dataset - Function: TitleCase
 * -----------------------------------------
 * File: A12_F39_O_A05_VarSplit.c
 * Implementation Logic: Variable 'i' is split into i1 and i2 (i = i1 + i2) to obfuscate data flow.
 * Input Format: <string>
 */
#include <stdio.h>

void Gf(char* v4dA) {
    int zma = 0, w = 0;
    while (v4dA[zma + w]) {
        int CD = zma + w;
        int wz5L = (CD == 0 || v4dA[CD - 1] == ' ');
        if (wz5L) {
            if (v4dA[CD] >= 97) v4dA[CD] -= 32;
        } else {
            if (v4dA[CD] >= 65 && v4dA[CD] <= 90) v4dA[CD] += 32;
        }
        zma++;
    }
}

int main(int N, char* iX[]) {
    if (N < 2) return 0;
    Gf(iX[1]);
    printf("%s", iX[1]);
    return 0;
}