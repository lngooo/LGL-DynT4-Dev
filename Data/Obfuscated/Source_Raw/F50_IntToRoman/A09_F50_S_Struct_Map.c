/**
 * LGL-DynT4 Dataset - Function: IntToRoman
 * -----------------------------------------
 * File: A09_F50_S_Struct_Map.c
 * Implementation Logic: Using a struct-based dictionary to map values.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct { int DA; char s7Hn[3]; } C;

void Sa(int zl1L, char* Q9) {
    C x[] = {
        {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"},
        {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"},
        {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}
    };
    Q9[0] = '\0';
    for(int Z=0; Z<13; Z++) {
        int D = zl1L / x[Z].DA;
        for(int sX=0; sX<D; sX++) strcat(Q9, x[Z].s7Hn);
        zl1L %= x[Z].DA;
    }
}

int main(int y0, char* vKt[]) {
    if (y0 < 2) return 0;
    char NJL1[100];
    Sa(atoi(vKt[1]), NJL1);
    printf("%s\n", NJL1);
    return 0;
}