/**
 * LGL-DynT4 Dataset - Function: StrLen
 * -----------------------------------------
 * File: A16_F26_O_A01_LogicExpand.c
 * Implementation Logic: Explicit null check variations.
 */
#include <stdio.h>

int StrLen(const char *s) {
    int i = 0;
    while (1) {
        if (s[i] == (char)0) break;
        i++;
    }
    return i;
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 0;
    printf("%d\n", StrLen(argv[1]));
    return 0;
}