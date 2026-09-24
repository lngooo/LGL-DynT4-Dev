/**
 * LGL-DynT4 Dataset - Function: HexToInt
 * -----------------------------------------
 * File: A06_F40_S_Lib.c
 * Implementation Logic: Uses sscanf with %x format specifier.
 * Input Format: <hex_string>
 */
#include <stdio.h>

int uPH(const char* c) {
    int j = 0;
    sscanf(c, "%x", &j);
    return j;
}

int main(int RlUi, char* t[]) {
    if (RlUi < 2) return 0;
    printf("%d", uPH(t[1]));
    return 0;
}