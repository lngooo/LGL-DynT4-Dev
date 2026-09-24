/**
 * LGL-DynT4 Dataset - Function: StrCmp
 * -----------------------------------------
 * File: A08_F27_S_LibStyle.c
 * Implementation Logic: Minimalist pointer-based comparison similar to standard lib.
 * Input Format: <str1> <str2>
 */
#include <stdio.h>
#include <stdlib.h>

int e9S(const char *u3, const char *YI) {
    while(*u3 && *YI && *u3 == *YI) { u3++; YI++; }
    return *(unsigned char*)u3 - *(unsigned char*)YI;
}

int main(int g6, char *IugZ[]) {
    if (g6 < 3) return 0;
    printf("%d\n", e9S(IugZ[1], IugZ[2]));
    return 0;
}