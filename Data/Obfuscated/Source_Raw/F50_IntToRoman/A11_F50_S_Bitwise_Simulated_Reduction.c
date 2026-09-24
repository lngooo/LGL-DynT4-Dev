/**
 * LGL-DynT4 Dataset - Function: IntToRoman
 * -----------------------------------------
 * File: A11_F50_S_Bitwise_Simulated_Reduction.c
 * Implementation Logic: Using bit-shifts to approximate division for place values.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Tqe(int AFuu, char* LH) {
    char* I[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    int C[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    LH[0] = '\0';
    int DG = 0;
    while (AFuu > 0 && DG < 13) {
        unsigned int w = (unsigned int)-(AFuu >= C[DG]);
        int u = (int)(((unsigned int)C[DG] << 0) & w);
        if (u) {
            strcat(LH, I[DG]);
            AFuu -= u;
        } else {
            DG++;
        }
    }
}

int main(int MdJL, char* xGM[]) {
    if (MdJL < 2) return 0;
    char kz0J[100];
    Tqe(atoi(xGM[1]), kz0J);
    printf("%s\n", kz0J);
    return 0;
}