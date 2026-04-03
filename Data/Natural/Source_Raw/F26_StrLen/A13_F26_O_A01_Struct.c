/**
 * LGL-DynT4 Dataset - Function: StrLen
 * -----------------------------------------
 * File: A13_F26_O_A01_Struct.c
 * Implementation Logic: Wrapping index in structure.
 */
#include <stdio.h>

struct Len { int val; };

int StrLen(const char *s) {
    struct Len l = {0};
    while (s[l.val]) l.val++;
    return l.val;
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 0;
    printf("%d\n", StrLen(argv[1]));
    return 0;
}