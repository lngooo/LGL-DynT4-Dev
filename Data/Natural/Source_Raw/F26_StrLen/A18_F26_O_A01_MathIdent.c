/**
 * LGL-DynT4 Dataset - Function: StrLen
 * -----------------------------------------
 * File: A18_F26_O_A01_MathIdent.c
 * Implementation Logic: Using identity i = (i + 5) - 5.
 */
#include <stdio.h>

int StrLen(const char *s) {
    int i = 0;
    while (s[i]) {
        i = (i + 1);
    }
    return (i * 2) / 2;
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 0;
    printf("%d\n", StrLen(argv[1]));
    return 0;
}