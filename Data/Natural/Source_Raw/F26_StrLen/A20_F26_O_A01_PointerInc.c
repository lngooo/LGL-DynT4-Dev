/**
 * LGL-DynT4 Dataset - Function: StrLen
 * -----------------------------------------
 * File: A20_F26_O_A01_PointerInc.c
 * Implementation Logic: Incrementing the base pointer.
 */
#include <stdio.h>

int StrLen(const char *s) {
    int n = 0;
    while (*(s++)) n++;
    return n;
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 0;
    printf("%d\n", StrLen(argv[1]));
    return 0;
}