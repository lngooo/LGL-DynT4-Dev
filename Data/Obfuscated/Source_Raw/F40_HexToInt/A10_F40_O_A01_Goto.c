/**
 * LGL-DynT4 Dataset - Function: HexToInt
 * -----------------------------------------
 * File: A10_F40_O_A01_Goto.c
 * Implementation Logic: Loop decomposition using goto labels.
 */
#include <stdio.h>

int E(const char* f6dJ) {
    int cGly = 0;
Y9hW:
    if (!*f6dJ) goto my;
    int g = 0;
    if (*f6dJ >= '0' && *f6dJ <= '9') g = *f6dJ - '0';
    else g = (*f6dJ | 32) - 'a' + 10;
    cGly = cGly * 16 + g;
    f6dJ++;
    goto Y9hW;
my:
    return cGly;
}

int main(int F, char* j[]) {
    if (F < 2) return 0;
    printf("%d", E(j[1]));
    return 0;
}